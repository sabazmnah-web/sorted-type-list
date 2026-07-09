#include <iostream>
#include "timestamp.h"

using namespace std;

timeStamp::timeStamp() {
    seconds = 0;
    minutes = 0;
    hours = 0;
}

timeStamp::timeStamp(int s, int m, int h) {
    seconds = s;
    minutes = m;
    hours = h;
}

void timeStamp::Print() const {
    if (hours < 10) cout << "0";
    cout << hours << ":";
    if (minutes < 10) cout << "0";
    cout << minutes << ":";
    if (seconds < 10) cout << "0";
    cout << seconds;
}

bool timeStamp::operator>(const timeStamp& other) const {
    if (hours != other.hours) return hours > other.hours;
    if (minutes != other.minutes) return minutes > other.minutes;
    return seconds > other.seconds;
}

bool timeStamp::operator<(const timeStamp& other) const {
    if (hours != other.hours) return hours < other.hours;
    if (minutes != other.minutes) return minutes < other.minutes;
    return seconds < other.seconds;
}

bool timeStamp::operator==(const timeStamp& other) const {
    return (hours == other.hours && minutes == other.minutes && seconds == other.seconds);
}

bool timeStamp::operator!=(const timeStamp& other) const {
    return !(*this == other);
}
