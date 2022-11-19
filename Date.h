#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <ctime>
 
std::string months[] = {"Jan", "Fev", "Mar", "Abr", "Mai", "Jun",
                        "Jul", "Ago", "Set", "Out", "Nov", "Dez"};
std::string days[] = {"Dom", "Seg", "Ter", "Qua", "Qui", "Sex",
                      "Sab"};
 
class Date{
    // Private Members
    private:
        std::string mes;
        std::string dia;
        int date;
        int ano;
    // Public Members
    public:
        // Default Constructor
        Date() { 
                const int BASE_YEAR = 1900;
                time_t timer;
                tm * time;
                std::time(&timer);
                time = localtime(&timer);
                date = time->tm_mday;
                mes = months[time->tm_mon];
                dia = days[time->tm_wday];
                ano = time->tm_year + BASE_YEAR;
        }
        void printDate(void) { 
            std::cout << "Current date " 
                      << this->mes << " " << this->dia << " "
                      << this->date  << " " << this->ano;
        }
        // Destructor
        ~Date() {}
};

#endif