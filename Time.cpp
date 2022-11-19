#include "Time.h"
using namespace std;
//Construtor
Time::Time(string nome){
    this->nome = nome;
}
//Gets
string Time::getNome(){
    return nome;
}

int Time::getVitorias(){
    return vitorias;
}

int Time::getDerrotas(){
    return derrotas;
}

int Time::getEmpates(){
    return empates;
}

//Sets
void Time::setNome(string nome){
    this->nome = nome;
}

void Time::setVitorias(int v){
    vitorias = v;
}

void Time::setDerrotas(int d){
    derrotas = d;
}

void Time::setEmpates(int e){
    empates = e;
}

//Metodos membros
void Time::imprimeTime(){
    for(int i = 0; i < jogadores.size(); i++){
        jogadores[i].Jogador::printJogador();
    }
}

void Time::insJogador(vector<Jogador> &equipe){
    jogadores = equipe;
}

string Time::getResultados(){
    string frase;
    frase += "Vitoria: " + getVitorias() ;
    frase += ", Empates: " + getEmpates();
    frase += ", Derrotas: " + getDerrotas();
    return frase;
}

void Time::somaVitorias(){
    vitorias++;
}
void Time::somaDerrotas(){
    derrotas++;
}
void Time::somaEmpates(){
    empates++;
}










