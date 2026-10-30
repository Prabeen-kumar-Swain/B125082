
#include <iostream>
using namespace std;

class TrafficSignal {
public:
    virtual int getGreenDuration(int vehicleCount) {
        return 0;
    }
};

class UrbanSignal : public TrafficSignal {
public:
    int getGreenDuration(int vehicleCount) override {
        int time = 10 + 2 * vehicleCount;

        if (time > 60)
            time = 60;

        return time;
    }
};

class HighwaySignal : public TrafficSignal {
public:
    int getGreenDuration(int vehicleCount) override {
        int time = 15 + 3 * vehicleCount;

        if (time > 90)
            time = 90;

        return time;
    }
};

int main() {
    UrbanSignal u;
    HighwaySignal h;

    TrafficSignal *ptr;

    ptr = &u;
    cout << "Urban Green Duration: "
         << ptr->getGreenDuration(20) << " seconds" << endl;

    ptr = &h;
    cout << "Highway Green Duration: "
         << ptr->getGreenDuration(20) << " seconds" << endl;

    return 0;
}
