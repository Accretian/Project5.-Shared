#include <iostream>

int main() {

    int month = 0;
    int year = 0;

    std::cin >> month >> year;

    std::string leap = "undefined";
    int days = 0;

    if ((year % 400) == 0) {
        leap = "YES";
    }
    else if ((year % 100) == 0) {
        leap = "NO";
    }
    else if ((year % 4) == 0) {
        leap = "YES";
    }
    else leap = "NO";

    if (month == 2) {
        if (leap == "YES") {
            days = 29;
        }
        else days = 28;
    }
    else if (month < 8) {
        if ((month % 2) == 0) {
            days = 30;
        }
        else days = 31;
    }
    else if ((month % 2) == 0) {
        days = 31;
    }
    else days = 30;




    std::cout << days;











}