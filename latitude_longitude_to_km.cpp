#include<bits/stdc++.h>

using namespace std;
float latitude_longitude_to_km(float latitude, float longitude, float max_distance) {

}

double haversine(double lat1, double lon1, double lat2, double lon2) {

        double dLat = (lat2 - lat1) * M_PI / 180.0;
        double dLon = (lon2 - lon1) * M_PI / 180.0;

        lat1 = (lat1) * M_PI / 180.0;
        lat2 = (lat2) * M_PI / 180.0;

        double a = pow(sin(dLat / 2), 2) + pow(sin(dLon / 2), 2) * cos(lat1) * cos(lat2);
        double rad = 6371;
        double c = 2 * asin(sqrt(a));
        return rad * c;
    }

int main() {
    double lat1 = 51.5007; double lon1 = 0.1246;
    double lat2 = 40.6892; double lon2 = 74.0445;

    cout << haversine(lat1, lon1, lat2, lon2) << " K.M.";
}
