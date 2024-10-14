#include <iostream>
#include <map>
#include <string>
#include <string>
#include <iomanip>
#include <sstream>



int main() {
    std::map <int, double> patients;
    std::string input;
    int count_patients = 0;
    double total_temperature = 0.0;
    while(true) {
            std:: cin >> input;
            if(input == "+") {
                int id = 0;
                double temperature = 0.0;
                std::cin >> id >> temperature;
                patients[id] = temperature;
                total_temperature += temperature;
                count_patients++;
            }
            else if(input == "~") {
                int id = 0;
                double temperature = 0.0;
                std::cin >> id >> temperature;
                if(patients.find(id) != patients.end()) {
                    total_temperature -= patients[id];
                    patients[id] = temperature;
                    total_temperature += temperature;
                }
        }
        else if(input == "-") {
            int id = 0;
            std::cin >> id;
            if(patients.find(id) != patients.end()) {
                total_temperature -= patients[id];
                patients.erase(id);
                count_patients--;
            }
        }
        else if (input == "?") {
            if(count_patients == 0) {
                std::cout << 0.000000000 << std::endl;
            } else {
                double avr_temp = total_temperature/count_patients;
                std::ostringstream out;
                out << std::fixed << std::setprecision(9) << avr_temp;
                std::string result = out.str();
                result.erase(result.find_last_not_of('0') + 1, std::string::npos);
                if (result.back() == '.') {
                    result.pop_back();
            }
             std::cout << result << std::endl;
            }
        }
        else if(input == "!"){
            break;
        }

    }
    return 0;
}