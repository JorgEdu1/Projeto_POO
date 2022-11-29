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
            //IFs aninhados para retornar o mes por extenso;
            if(month == 1){
                ss << day << " de Janeiro de " << year;
            }
            else if(month == 2){
                ss << day << " de Fevereiro de " << year;
            }
            else if(month == 3){
                ss << day << " de Março de " << year;
            }
            else if(month == 4){
                ss << day << " de Abril de " << year;
            }
            else if(month == 5){
                ss << day << " de Maio de " << year;
            }
            else if(month == 6){
                ss << day << " de Junho de " << year;
            }
            else if(month == 7){
                ss << day << " de Julho de " << year;
            }
            else if(month == 8){
                ss << day << " de Agosto de " << year;
            }
            else if(month == 9){
                ss << day << " de Setembro de " << year;
            }
            else if(month == 10){
                ss << day << " de Outubro de " << year;
            }
            else if(month == 11){
                ss << day << " de Novembro de " << year;
            }
            else if(month == 12){
                ss << day << " de Dezembro de " << year;
            }
            return ss.str();
        }
};
#endif