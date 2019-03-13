#ifndef GEO
#define GEO

#include <cmath>
#include <cstdlib>
#include <cstdio>

const double EARTH_RADIUS = 6371.0;
const double PI = 3.14159265359;

inline double deg2rad(double deg)
{
    return ((deg * PI) / 180.0);
}

inline double coordinate_distance(double lat1, double lon1, double lat2, double lon2)
{
    lat1 = deg2rad(lat1);
    lon1 = deg2rad(lon1);
    lat2 = deg2rad(lat2);
    lon2 = deg2rad(lon2);

    double d_lat = fabs(lat1 - lat2);
    double d_lon = fabs(lon1 - lon2);
    
    double a = pow(sin(d_lat / 2.0), 2.0) + cos(lat1) * cos(lat2) * pow(sin(d_lon / 2.0), 2.0);
    double d_sigma = 2 * asin(sqrt(a));
    
    return (EARTH_RADIUS * d_sigma * 1000.0);
}

#endif
