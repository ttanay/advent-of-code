#include <iostream>
#include <ostream>
#include <string>

int main() {
    std::string calibration;
    int calibration_value = 0;
    while(std::getline(std::cin, calibration)) {
        int tens = -1, units = -1, tens_p = 0, units_p = calibration.size() - 1;
        while(tens < 0 || units < 0) {
            if(tens < 0 && (calibration[tens_p] >= 48 && calibration[tens_p] <= 57))
                tens = calibration[tens_p] - 48;
            else if(tens < 0)
                tens_p++;

            if(units < 0 && (calibration[units_p] >= 48 && calibration[units_p] <= 57))
                units = calibration[units_p] - 48;
            else if(units < 0)
                units_p--;
        }
        calibration_value += (tens * 10) + units;
    }
    std::cout << calibration_value << std::endl;
    return 0;
}