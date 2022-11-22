#ifndef CUSTOMEXCEPTION_H
#define CUSTOMEXCEPTION_H
#include <string.h>
class CustomExcep{
    protected:
        char mensagem[100];
    
    public:
        CustomExcep(const char* e){
            strcpy(mensagem,e);
        }
        
        
        virtual const char* what(){
            return mensagem;
        }
};

#endif