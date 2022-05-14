# include "Time.hpp"
# include <iostream>

using namespace std;

Time::Time(){
    // Default constructor
    this->h = 0;
    this->m = 0;
    this->s = 0;
}

Time::Time(int h, int m, int s){
    // User Defined Constructor
    this->h = h;
    this->m = m;
    this->s = s;
}

Time::Time(const Time& other){
    // Copy Constructor
    this->h = other.h;
    this->m = other.m;
    this->s = other.s;
}

Time::~Time(){

}

// Methods
int Time::getHour(){
    return this->h;
}

int Time::getMinute(){
    return this->m;
}

int Time::getSecond(){
    return this->s;
}

void Time::setHour(int HOUR){
    this->h = HOUR;
}

void Time::setMinute(int MINUTE){
    this->m = MINUTE;
}

void Time::setSecond(int SECOND){
    this->s = SECOND;
}

int Time::convertToSecond(){
    return this->h*3600 + this->m*60 + this->s;
}

Time Time::add(Time t){
    Time *clock = new Time();
    int sumSecond = this->convertToSecond() + t.convertToSecond();
    int hour = sumSecond / 3600;
    if (hour >= 24){
        hour -= 24;
    }

    clock->h = hour;
    clock->m = (sumSecond % 3600) / 60;
    clock->s = (sumSecond % 3600) % 60;
    return *clock;
}

Time Time::minus(Time t){
    Time *clock = new Time(); 
    int netSecond = this->convertToSecond() - t.convertToSecond();

    if (netSecond < 0){
        return *this;
    }
    else{
        clock->h = netSecond / 3600;
        clock->m = (netSecond % 3600) / 60;
        clock->s = (netSecond % 3600) % 60;
        return *clock;
    }
}

void Time::printTime(){
    if (this->h < 10){
        cout << 0;
    }
    cout << this->h << ":";
    if (this->m < 10){
        cout << 0;
    }
    cout << this->m << ":";
    if (this->s < 10){
        cout << 0;
    }
    cout << this->s;
}