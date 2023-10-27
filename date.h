#include "menu.h"

// global variables
enum days_of_week
{
    saturday,
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday
};

string e2s_days_of_week(days_of_week dow)
{
    switch (dow)
    {
        case saturday:
        return "saturday";
        case sunday:
        return "sunday";
        case monday:
        return "monday";
        case tuesday:
        return "tuesday";
        case wednesday:
        return "wednesday";
        case thursday:
        return "thursday";
        default:
        return "friday";
    }
}

enum month_names
{
    january,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};

// classes and their definitions
class mydate
{
private:
    int date, month, year;
    int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    bool leapYear;
    days_of_week day;

public:
    days_of_week fix_day();
    bool check_leapYear();
    mydate(int d, int m, int y) : date(d), month(m), year(y)
    {
        day = fix_day();
    }
    mydate()
    {
        date = month = 1;
        year = 2000;
        day = fix_day();
    }
    void read_from_file(ifstream &in)
    {
        in >> date >> month >> year;
        day = fix_day();
    }
    void save_to_file(ofstream &out)
    {
        out << date << " " << month << " " << year << endl;
    }
    void set_current()
    {
        month = year = date = -1; //initializing

        time_t current_time;
        time(&current_time);
        char mm[4] = {}, dd[3] = {}, yyyy[5] = {}, ww[4] = {};
        char* temp = ctime(&current_time);
        char month_names[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", 
                                "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

        //separating from the string
        for(int i = 0 ; i < 3 ; i++)
            ww[i] = temp[i];
        for(int i = 4 ; i < 4+3 ; i++)
            mm[i-4] = temp[i];
        for(int i = 8 ; i < 8+2 ; i++)
            dd[i-8] = temp[i];
        for(int i = 20 ; i < 20+4 ; i++)
            yyyy[i-20] = temp[i];
        for(int i = 0 ; i < 12 ; i++)
        {
            if(!strcmp(mm, month_names[i]))
                month = i+1;
        }
        date = (dd[1]-'0') + (dd[0]-'0')*10;
        year = yyyy[3]-'0' + (yyyy[2]-'0')*10 + (yyyy[1]-'0')*100 + (yyyy[0]-'0')*1000;
        day = fix_day();
    }
    void get()
    {
        char ch;
        cout << "Enter the date in the formate dd/mm/yyyy : ";
        cin >> date >> ch >> month >> ch >> year;
        day = fix_day();
    }
    friend ostream &operator<<(ostream &out, mydate d);
    bool operator <(mydate d)
    {
        if(year != d.year)
            return year < d.year;
        if(month != d.month)
            return month < d.month;
        return date < d.date;
    }
    bool operator == (mydate d)
    {
        if(date == d.date && month == d.month && year == d.year)
            return true;
        return false;
    }
    bool operator > (mydate d)
    {
        return !(d < *this || d == *this);
    }
};

// late class-method definitions
days_of_week mydate::fix_day()
{
    year = abs(year);
    leapYear = check_leapYear();
    if (leapYear)
        days_in_month[february]++;
    month = abs(month);
    date = abs(date);
    if (month > 12)
        month = month % 12 + 1;
    if (date > days_in_month[month - 1])
        date = date % days_in_month[month - 1] + 1;

    int y = year, m = month, d = date;
    int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y -= m < 3;
    int temp = (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
    switch (temp)
    {
    case 0:
        return sunday;
    case 1:
        return monday;
    case 2:
        return tuesday;
    case 3:
        return wednesday;
    case 4:
        return thursday;
    case 5:
        return friday;
    default:
        return saturday;
    }
}

bool mydate::check_leapYear()
{
    if (year % 400 == 0)
        return true;
    else if (year % 100 == 0)
        return false;
    else if (year % 4 == 0)
        return true;
    else
        return false;
}
// friend functions
ostream &operator<<(ostream &out, mydate d)
{
    out << d.date << "/" << d.month << "/" << d.year;
    out << " (" << e2s_days_of_week(d.day) << ") ";
    return out;
}