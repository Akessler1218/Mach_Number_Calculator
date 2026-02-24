#include <cmath>
double FtoK(double F){
    double k = (F - 32.0) * (5.0/9.0) + 273.15;
    return k;
}
double CtoK(double C){
    double k = (C + 273.15);
    return k;
}
double knotsToMps(double velocity){
    double knot = (velocity * 0.5144447);
    return knot;
}
double mphToMps(double velocity){
    double mph = (velocity * 0.44704);
    return mph;
}
double speedOfSound(double temp){
    double c = 20.046871*sqrt(temp);
    return c;
}
double machNumber(double velocity, double temp){
    double M = velocity/speedOfSound(temp);
    return M;
}

