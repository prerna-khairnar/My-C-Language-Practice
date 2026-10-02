#include <stdio.h>

int isLeap(int year)
{
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int main()
{
    int day, month, year;

    int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *week[] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};

    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);

    long total = 0;

    // Count days for full years from 1970 to previous year
    for (int y = 1970; y < year; y++)
    {
        if (isLeap(y))
            total += 366;
        else
            total += 365;
    }

    // Count days for months in current year
    for (int m = 1; m < month; m++)
    {
        if (m == 2 && isLeap(year))
            total += 29;
        else
            total += monthDays[m - 1];
    }

    // Add days of current month
    total += day - 1;

    // Find weekday
    int index = total % 7;

    printf("Day of week: %s\n", week[index]);

    return 0;
}
