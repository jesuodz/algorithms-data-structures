# include <iostream>

int main() {
    enum months {
        January,
        February,
        March,
        April,
        May,
        June,
        July,
        August,
        September,
        October,
        November,
        December
    };

    enum class months_scopped {
        January,
        February,
        March,
        April,
        May,
        June,
        July,
        August,
        September,
        October,
        November,
        December
    };

    months FirstMonth = January;
    months_scopped SecondMonth = months_scopped::February;

    if ( FirstMonth != January ) {
        std::cout << "January" << '\n';
    } else if ( SecondMonth == months_scopped::February ) {
        std::cout << "February" << '\n';
    }
}