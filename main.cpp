#include "JogadorAtacante.h"
#include "JogadorDefesa.h"
#include "JogadorGoleiro.h"
#include "Partidas.h"
#include "Time.h"
#include <iostream>
using namespace std;

int main(){
    Time Vasco;

    // Jogador *TimeVasco[] = {new JogadorAtacante("Jorge",22,10,1,9,7,1,2), new JogadorDefesa("Erick",23,0,0,1,10,2),new JogadorAtacante("Jorge",22,10,1,9,7,1,2), new JogadorDefesa("Erick",23,0,0,1,10,2),new JogadorAtacante("Jorge",22,10,1,9,7,1,2), new JogadorDefesa("Erick",23,0,0,1,10,2),new JogadorAtacante("Jorge",22,10,1,9,7,1,2), new JogadorDefesa("Erick",23,0,0,1,10,2),new JogadorAtacante("Jorge",22,10,1,9,7,1,2), new JogadorDefesa("Erick",23,0,0,1,10,2),new JogadorAtacante("Jorge",22,10,1,9,7,1,2)};

    Jogador *TimeVasco[2];
    TimeVasco[0] = new JogadorAtacante("Jorge",22,10,1,9,7,1,2);
    TimeVasco[1] = new JogadorDefesa("Erick",23,0,0,1,10,2);

    Vasco.insJogador(*TimeVasco);

    Vasco.imprimeTime();    
}