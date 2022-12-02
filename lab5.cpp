#include "Header.h"

int main()
{
    Weather a("09.11", "Kyiv", "Ukraine", 5, 79, 10);
    Weather b("21.11", "Wroclaw", "Poland", 4, 95, 16);
    Weather c("10.11", "Lviv", "Ukraine", 1, 100, 2);

    WeatherCalendar weathers;

    weathers.list[0] = a;
    weathers.list[1] = b;
    weathers.list[2] = c;

    const int n = sizeof weathers / sizeof weathers.list[0];

    weathers.is_lviv_weather(0);

    weathers.find_max_temprature();

    weathers.BubbleSort(n);

    for (int i = 0; i < n; i++) {
        weathers.Print(i);
    }
}