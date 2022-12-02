#include <iostream>
#include <list>

using namespace std;

enum type { SUNNY, CLOUDY, RAINY, FOGGY, STORM, WINDY, SNOWY };

void find_max_temprature(string);

class Weather
{
    //friends
    friend void find_max_temprature();
    friend void swap(int, int);

private:
    string date;
    string city;
    string country;
    int temp;
    int humidity;
    int wind_speed;
public:
    //constructor
    Weather() {

    }

    Weather(string date, string city, string country, int temp, int humidity, int wind_speed) {
        this->date = date;
        this->city = city;
        this->country = country;
        this->temp = temp;
        this->humidity = humidity;
        this->wind_speed = wind_speed;
    }
    //distructor
    ~Weather() {

    }
    //getters
    string get_date() {
        return date;
    }

    string get_city() {
        return city;
    }

    string get_country() {
        return country;
    }

    int get_temp() {
        return temp;
    }

    int get_humidity() {
        return humidity;
    }

    int get_wind_speed() {
        return wind_speed;
    }
    //setters
    int set_date(int date) {
        this->date = date;
        return date;
    }

    string set_city(string city) {
        this->city = city;
        return city;
    }

    string set_country(string country) {
        this->country = country;
        return country;
    }

    int set_temp(int temp) {
        this->temp = temp;
        return temp;
    }

    int set_humidity(int humidity) {
        this->humidity = humidity;
        return humidity;
    }

    int set_wind_speed(int wind_speed) {
        this->wind_speed = wind_speed;
        return wind_speed;
    }
};

class WeatherCalendar
{
public:

    Weather list[3];

    //logic functions
    void is_lviv_weather(int i) {
        if (list[i].get_humidity() >= 80) {
            cout << list[i].get_date() << " The typical day in Lviv" << endl;
        }
        else {
            cout << "You’re lucky, man" << endl;
        }
    }

    void find_max_temprature() {
        for (int i = 0; i < 3; ++i) {
            if (list[0].get_temp() < list[i].get_temp()) {
                list[0].set_temp(list[i].get_temp());
            }
        }
        cout << "Max temp is " << list[0].get_temp() << endl;
        cout << "==============================" << endl;
    }

    void swap(Weather* xp, Weather* yp)
    {
        Weather temp = *xp;
        *xp = *yp;
        *yp = temp;
    }

    void BubbleSort(int size)
    {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (list[j].get_date() > list[j + 1].get_date()) {
                    swap(&list[j], &list[j + 1]);
                }
            }
        }
    }

    void Print(int i) {
        cout << "Day " << list[i].get_date() << endl;
        cout << "City " << list[i].get_city() << endl;
        cout << "Country " << list[i].get_country() << endl;
        cout << "Temp " << list[i].get_temp() << endl;
        cout << "Humidity " << list[i].get_humidity() << endl;
        cout << "Wind speed " << list[i].get_wind_speed() << " mps" << endl;
        cout << "==============================" << endl;
    }
};