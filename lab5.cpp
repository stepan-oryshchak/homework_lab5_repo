#include "Header.h"

int main()
{
    Weather first_city("09.11", "Kyiv", "Ukraine", 5, 79, 10);
    Weather second_city("21.11", "Wroclaw", "Poland", 4, 95, 16);
    Weather third_city("10.11", "Lviv", "Ukraine", 1, 100, 2);

    WeatherCalendar weathers;

    weathers.list[0] = first_city;
    weathers.list[1] = second_city;
    weathers.list[2] = third_city;

    const int size_of_list = sizeof weathers / sizeof weathers.list[0];

    weathers.is_lviv_weather(0);

    weathers.find_max_temprature();

    weathers.bubble_sort(size_of_list);

    for (int i = 0; i < size_of_list; i++) {
        weathers.print_city_data(i);
    }
}