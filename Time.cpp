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
    std::cout << "Jogadores Goleiros: " << std::endl;
    for(int i = 0; i < 11 ;i++){
        const type_info& info1 = typeid(*jogadores[i]);
        if(info1 == typeid(JogadorGoleiro)){
            jogadores[i]->Jogador::printJogador();
        }
    }
    std::cout << "--------------------------------" << std::endl;
    std::cout << "Jogadores Defensores: " << std::endl;
    for(int i = 0; i < 11 ;i++){
        const type_info& info2 = typeid(*jogadores[i]);
        if(info2 == typeid(JogadorDefesa)){
            jogadores[i]->Jogador::printJogador();
        }
    }
    std::cout << "--------------------------------" << std::endl;
    std::cout << "Jogadores Atacantes: " << std::endl;
    for(int i = 0; i < 11 ;i++){
        const type_info& info3 = typeid(*jogadores[i]);
        if(info3 == typeid(JogadorAtacante)){
            jogadores[i]->Jogador::printJogador();
        }
    }
    //jogadores[2]->Jogador::printJogador();
}
void Time::insJogador(Jogador *team[11]){
    for(int i = 0; i < 11; i++){
        jogadores[i] = team[i];
    }
}
string Time::getResultados(){
    stringstream ss;
    ss << "Partidas Totais: " << vitorias+empates+derrotas << ", Vitoria: " << vitorias << ", Empates: " << empates << ", Derrotas: " << derrotas; 
    // frase += "Vitoria: " + vitorias ;
    // frase += ", Empates: " + empates;
    // frase += ", Derrotas: " + derrotas;
    return ss.str();
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
bool Time::realTime(string n){
    return nome == n;
}
bool Time::realPlayer(string p){
    for(int i = 0; i < 11; i++){
        if(jogadores[i]->getNome() == p){
            return true;
        }
    }
    return false;
}
Jogador* Time::getJogador(string nome){
    for(int i = 0; i < 11; i++){
        if(jogadores[i]->getNome() == nome){
            return jogadores[i];
        }
    }
    //cout << "Jogador nao esta no time." << endl;
    return nullptr;
}