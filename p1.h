#ifndef TIME1_H
#define TIME1_H

class Time
{
    public:

    void setTime(int,int,int);
    void printMilitary();
    void printStandard();

    private:
    int minute,hour,sec;
};

#endif