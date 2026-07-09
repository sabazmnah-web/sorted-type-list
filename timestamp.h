#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

class timeStamp {
private:
    int seconds;
    int minutes;
    int hours;

public:
    timeStamp();
    timeStamp(int s, int m, int h);
    void Print() const;

    bool operator>(const timeStamp& other) const;
    bool operator<(const timeStamp& other) const;
    bool operator==(const timeStamp& other) const;
    bool operator!=(const timeStamp& other) const;
};

#endif // TIMESTAMP_H_INCLUDED
