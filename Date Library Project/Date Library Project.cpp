#include <iostream>
#include "clsDate.h"

using namespace std;

int main()

{
    clsDate Date1;
    Date1.Print();

    clsDate Date2(15, 10, 2025);

    Date1.PrintMonthCalendar();

    Date1.CalculateBusinessDays(Date1, Date2);

    Date1.IncreaseDateByOneMonth();

    cout << "My Age in Day: " << clsDate::CalculateMyAgeInDays(clsDate(15, 11, 2008));


    system("pause>0");
    return 0;
};
