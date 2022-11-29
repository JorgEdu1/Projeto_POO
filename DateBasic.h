#ifndef DATEBASIC_H
#define DATEBASIC_H
#include <iostream>
#include <string>
#include <sstream>

class DateBasic{
    private:
        int day;
        int month;
        int year;

    public:
        DateBasic() = default;
        DateBasic(int d, int m, int y){
            day = d;
            month = m;
            year = y;
        }
        
        std::string datePrint(){
            std::stringstream ss;
            ss << day << " de " << month << " de " << year;
            return ss.str();
        }
};
#endif