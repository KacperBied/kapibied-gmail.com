#include <iostream>
#include <ctime>
using namespace std;

class Timer
{
private:
    struct tm {
   int tm_sec;   // seconds of minutes from 0 to 61
   int tm_min;   // minutes of hour from 0 to 59
   int tm_hour;  // hours of day from 0 to 24
   int tm_mday;  // day of month from 1 to 31
   int tm_mon;   // month of year from 0 to 11
   int tm_year;  // year since 1900
   int tm_wday;  // days since sunday
   int tm_yday;  // days since January 1st
   int tm_isdst; // hours of daylight savings time
};
public:
    time_t time(time_t *time);

    void start() ///rozpoczynanie pomiaru czasu
    {
           time_t time(time_t *time); ///stawianie kropki na lini czasu
    }
    void pause()/// zatrzymywanie pomiaru czasu
    {
        cout<<"napisz -pauza- kiedy bêdziesz chcial chwilowo zatrzymac pomiar czasu, i -start- kiedy bedziesz chcial go wznowic"<<endl;
        string a;
        cin>>a;
        if (a=="pauza")
        {
            time_t time(time_t *time);
        }
        else if (a=="start")
        {
            time_t time(time_t *time);
        }
    }
    int stop() /// zatrzymywanie i zwracanie pomiaru
    {
        cout<<"napisz - stop, kiedy bedziesz chcial zatrzymac calosc"<<endl;
        string a;
        cin>>a;
        if (a=="stop")
        {
           double difftime ( time_t time2, time_t time1 );///liczona roznica pomiedzy czasami
        time_t mktime(struct tm *time);   ///zwracanie czasu??
        cout<<time;
        }
    }
};
int main()
{
    Timer aa;
    aa.start();
    aa.pasue();
    aa.stop();
    return 0;
}
