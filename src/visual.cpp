#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>

#include <iostream>
#include <vector>
#include <unordered_map>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using std::cin;
using std::cout;

int main()
{
    std::ios_base::sync_with_stdio(false);
    
    std::ifstream nodes_input("../parsed_maps/nodes.txt", std::ios::in);
    std::ifstream ways_input("../parsed_maps/ways.txt", std::ios::in);
    
    cout << "Loading parsed nodes!\n";
    
    long long size, lat_offset, lon_offset, granularity;
    long long id=0, lat=0, lon=0, id_d, lat_d, lon_d, real_lat, real_lon;
    
    std::unordered_map<long long, std::pair<long long, long long> > M;
    
    while(nodes_input >> size >> lat_offset >> lon_offset >> granularity)
    {
        id = 0, lat = 0, lon = 0;
        for(int i=0;i<size;++i)
        {
            nodes_input >> id_d >> lat_d >> lon_d;
            id += id_d;
            lat += lat_d;
            lon += lon_d;
            
            real_lat = (lat_offset + (granularity * lat))/100LL;
            real_lon = (lon_offset + (granularity * lon))/100LL;
            
            M[id] = {real_lat, real_lon};
            
            //cout << real_lat << " " << real_lon << "\n";
        }
    }
    cout << "Nodes parsed successfully!\n";
    
    ////////////////////////////////////////////////////////////////////////////
    
    std::vector<std::vector<std::pair<long long, long long> > > ways;
    
    cout << "Loading parsed ways!\n";
    
    while(ways_input >> size)
    {
        id = 0;
        ways.push_back(std::vector<std::pair<long long, long long> >());
        for(int i=0;i<size;++i)
        {
            ways_input >> id_d;
            id += id_d;
            
            ways.back().push_back({M[id].first, M[id].second});
            //cout << id << "\n";
        }
    }
    cout << "Ways parsed successfully!\n";
    
    
    
    long long sum_lat = 0, sum_lon = 0, pct = 0;
    long long maxi_lat = -1LL, maxi_lon = -1LL;
    
    for(const auto& x : ways)
        for(const auto& y : x)
        {
            sum_lat += y.first;
            sum_lon += y.second;
            ++pct;
            
            maxi_lat = std::max(maxi_lat, llabs(y.first));
            maxi_lon = std::max(maxi_lon, llabs(y.second));
        }
    
    double stred_lat = (double)sum_lat/(double)pct, stred_lon = (double)sum_lon/(double)pct;
    
    cout << std::fixed;
    cout << std::setprecision(7);
    
    sf::Window window(sf::VideoMode(800, 600), "OpenGL", sf::Style::Default, sf::ContextSettings(32));
    window.setVerticalSyncEnabled(true);
    
    window.setActive(true);
    
    glScaled(1.0, 1.0, 0.0);
    
    bool running = true;
    
    double sc = 1.0, r = 0.0, u = 0.0;
    
    while (running)
    {
        // handle events
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                // end the program
                running = false;
            }
            else if (event.type == sf::Event::Resized)
            {
                // adjust the viewport when the window is resized
                glViewport(0, 0, event.size.width, event.size.height);
            }
            else if(event.type == sf::Event::KeyPressed)
            {
                if (event.key.code == sf::Keyboard::Up)
                {
                    glTranslated(0.0, -0.05, 0.0);
                    u += -0.05;
                }
                else if (event.key.code == sf::Keyboard::Down)
                {
                    glTranslated(0.0, 0.05, 0.0);
                    u += 0.05;
                }
                else if (event.key.code == sf::Keyboard::Left)
                {
                    glTranslated(0.05, 0.0, 0.0);
                    r += 0.05;
                }
                else if (event.key.code == sf::Keyboard::Right)
                {
                    glTranslated(-0.05, 0.0, 0.0);
                    r += -0.05;
                }
                else if (event.key.code == sf::Keyboard::Q)
                {
                    glScaled(1.3, 1.3, 0.0);
                    sc *= 1.3; 
                }
                else if (event.key.code == sf::Keyboard::A)
                {
                    glScaled(0.76, 0.76, 0.0);
                    sc *= 0.76;
                }
                else if (event.key.code == sf::Keyboard::R)
                {
                    glTranslated(-r, -u, 0.0);
                    glScaled(1.0/sc, 1.0/sc, 0.0);
                    r = 0.0;
                    u = 0.0;
                    sc = 1.0;
                }
            }
        }
        
        // clear the buffers
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        
        
        glBegin(GL_LINES);
        
        int k = 0;
        for(const auto& x : ways)
        {
            if(k >= 1000000) break;
            for(int i=0;i+1<x.size();++i)
            {
                //cout << x[i].first << " " << x[i].second << "\n";
                k++;
                double a, b, c, d;
                
                a = (double)x[i].first - stred_lat;
                b = (double)x[i].second - stred_lon;
                c = (double)x[i+1].first - stred_lat;
                d = (double)x[i+1].second - stred_lon;
                
                a /= (double)maxi_lat - stred_lat;
                b /= (double)maxi_lon - stred_lon;
                c /= (double)maxi_lat - stred_lat;
                d /= (double)maxi_lon - stred_lon;
                
                //cout << a << " " << b << " " << c << " " << d << "\n";
                                
                glVertex3d(b, a, 0.0);
                glVertex3d(d, c, 0.0);
            }
            
        }
        
        glEnd();
        
        // end the current frame (internally swaps the front and back buffers)
        window.display();
    }
    
    return 0;
}
