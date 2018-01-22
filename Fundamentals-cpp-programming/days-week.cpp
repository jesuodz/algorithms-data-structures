#include <iostream>

int main() {
    enum Week_Days {
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    };

    enum class Week_days_scopped {
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    };

    Week_Days day1 = Monday;
    Week_days_scopped day2 = Week_days_scopped::Tuesday;

    if ( day1 == Monday ) {
        std::cout << "monday" << std::endl;
    }

    if ( day2 == Week_days_scopped::Tuesday ) {
        std::cout << "Tuesday" << '\n';
    }
}