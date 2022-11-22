#include "JogadorAtacante.h"
#include "JogadorDefesa.h"
#include "JogadorGoleiro.h"
#include "Partidas.h"
#include "Time.h"
#include "CustomException.h"
#include <iostream>
using namespace std;

int main(){
    Time *Campeonato[4];
    Campeonato[0] = new Time("Vasco");

    Jogador *TimeVasco[] = {new JogadorAtacante("Jorge",22,10,1,9,7,1,2), new JogadorDefesa("Erick",23,0,0,1,10,2),new JogadorAtacante("Matheus",22,10,1,9,7,1,2), new JogadorDefesa("Pedro",23,0,0,1,10,2),new JogadorAtacante("Gustavo",22,10,1,9,7,1,2), new JogadorDefesa("Guilherme",23,0,0,1,10,2),new JogadorAtacante("Clebao",22,10,1,9,7,1,2), new JogadorDefesa("Mendonza",23,0,0,1,10,2),new JogadorAtacante("Babigol",22,10,1,9,7,1,2), new JogadorDefesa("Nene",23,0,0,1,10,2),new JogadorAtacante("CacaRato",22,10,1,9,7,1,2)};
    Campeonato[0]->insJogador(TimeVasco);

    Campeonato[1] = new Time("Flamengo");
    Jogador *TimeFla[] = {new JogadorAtacante("Gabigol",22,10,1,9,7,1,2), new JogadorDefesa("DavidLuiz",23,0,0,1,10,2),new JogadorAtacante("BrunoHenrique",22,10,1,9,7,1,2), new JogadorDefesa("LeoPereira",23,0,0,1,10,2),new JogadorAtacante("Pedro",22,10,1,9,7,1,2), new JogadorDefesa("Pablo",23,0,0,1,10,2),new JogadorAtacante("Arrascaeta",22,10,1,9,7,1,2), new JogadorDefesa("Cleiton",23,0,0,1,10,2),new JogadorAtacante("Everton",22,10,1,9,7,1,2), new JogadorDefesa("RodrigoCaio",23,0,0,1,10,2),new JogadorAtacante("Diego",22,10,1,9,7,1,2)};
    Campeonato[1]->insJogador(TimeFla);

    Campeonato[2] = new Time("Salgueiro");
    Jogador *TimeSalgueiro[] = {new JogadorAtacante("RonaldinhoPernambucano",22,10,1,9,7,1,2), new JogadorDefesa("Tiringa",23,0,0,1,10,2),new JogadorAtacante("Camavinga",22,10,1,9,7,1,2), new JogadorDefesa("Ganso",23,0,0,1,10,2),new JogadorAtacante("Alex",22,10,1,9,7,1,2), new JogadorDefesa("MagnoAlves",23,0,0,1,10,2),new JogadorAtacante("TiaDaCantina",22,10,1,9,7,1,2), new JogadorDefesa("JoaoGomes",23,0,0,1,10,2),new JogadorAtacante("Estacio",22,10,1,9,7,1,2), new JogadorDefesa("JojeDudu",23,0,0,1,10,2),new JogadorAtacante("Pente",22,10,1,9,7,1,2)};
    Campeonato[2]->insJogador(TimeSalgueiro);

    Campeonato[3] = new Time("Brasil");
    Jogador *TimeBrasil[] = {new JogadorAtacante("Neymar",22,10,1,9,7,1,2), new JogadorDefesa("Militao",23,0,0,1,10,2),new JogadorAtacante("Richarlison",22,10,1,9,7,1,2), new JogadorDefesa("Marquinhos",23,0,0,1,10,2),new JogadorAtacante("Raphinha",22,10,1,9,7,1,2), new JogadorDefesa("AlexTelles",23,0,0,1,10,2),new JogadorAtacante("ViniJr",22,10,1,9,7,1,2), new JogadorDefesa("AlexSandro",23,0,0,1,10,2),new JogadorAtacante("Paqueta",22,10,1,9,7,1,2), new JogadorDefesa("Casemiro",23,0,0,1,10,2),new JogadorAtacante("BrunoGuimaraes",22,10,1,9,7,1,2)};
    Campeonato[3]->insJogador(TimeBrasil);


    for(int i = 0; i < 4; i ++){
        Campeonato[i]->imprimeTime();
        cout << endl;
    }



    string nometime;
    string nomejog;
    cin >> nometime >> nomejog;

    try{
        bool testaTime = false;
        int search = 0;
        for(int i = 0; i < 4; i++){
            testaTime = Campeonato[i]->realTime(nometime);
            if(testaTime == true){
                search = i;
                cout << "Time encontrado!!" << endl << "Irei checar se este jogador esta nesse time, um momento!" << endl;
                break;
            }
        }
        if(testaTime == false){
            throw CustomExcep("Esse time nao esta inscrito!!");
        }

        bool testaJogador = Campeonato[search]->realPlayer(nomejog);
        if(testaJogador){
            cout << "Jogador encontrado, este eh o seu time:" << endl;
            Campeonato[search]->imprimeTime();
        }else{
            throw CustomExcep("Esse jogador nao esta no time!!");
        }
    }catch(CustomExcep e){
        cout << "ERROR: " << e.what() << endl;
    }





















































    /*
    //cout << nometime << " " << nomejog;
    //cout << "Antes do try";
    try{
        //cout << "Esse";
        int search = 0;
        bool valid1 = false;
        for(int i = 0; i < 1; i++){
            if(Campeonato[i]->getNome() == nometime){
                //cout << "Aq";
                search = i;
                valid1 = true;
                break;
            }
        }
        //cout << "Aqui";
        if(valid1 == false){
            throw CustomExcep("Esse time nao esta no campeonato!");
        }

        //bool valid2 = 0;
        Time *achei = Campeonato[search];
        Jogador procura[11] = dynamic_cast<Jogador&>(achei->Players());
        //cout << nomejog;
        for(int i = 0; i < 11; i++){
            cout << procura[i].getNome() << endl;
            if(procura[i].getNome() == nomejog){
                achei->imprimeTime();
                //valid2 = 1;
            }
        }
        // if(!valid2){
        //     throw CustomExcep("Esse jogador nao esta no time!");
        // }
    }catch(CustomExcep e){
        cout << "ERROR: " << e.what() << endl;

    }
    // try{
    //     //cout << "Esse";
    //     int search = 0;
    //     bool valid1 = false;
    //     //cout << "Antes do for";
    //     for(int i = 0; i < 1; i++){
    //         if(Campeonato[i]->getNome() == nometime){
    //             // cout << "Aq";
    //             search = i;
    //             valid1 = true;
    //             break;
    //         }
    //     }
    //     cout << "Aqui";
    //     if(valid1 == false){
    //         throw CustomExcep("Esse time nao esta no campeonato!");
    //     }

    // }catch(CustomExcep e){
    //     cout << "ERROR: " << e.what() << endl;
    // }
   

    
    

    
    Time *Flamengo = new Time("Flamengo");
    

    Jogador *TimeMengo[] = {new JogadorAtacante("Jorge",22,10,1,9,7,1,2), new JogadorDefesa("Erick",23,0,0,1,10,2),new JogadorAtacante("Matheus",22,10,1,9,7,1,2), new JogadorDefesa("Erick",23,0,0,1,10,2),new JogadorAtacante("Jorge",22,10,1,9,7,1,2), new JogadorDefesa("Erick",23,0,0,1,10,2),new JogadorAtacante("Jorge",22,10,1,9,7,1,2), new JogadorDefesa("Erick",23,0,0,1,10,2),new JogadorAtacante("Jorge",22,10,1,9,7,1,2), new JogadorDefesa("Erick",23,0,0,1,10,2),new JogadorAtacante("Jorge",22,10,1,9,7,1,2)};


    // Jogador *TimeVasco[2];
    // TimeVasco[0] = new JogadorAtacante("Jorge",22,10,1,9,7,1,2);
    // TimeVasco[1] = new JogadorDefesa("Erick",23,0,0,1,10,2);

    Vasco->insJogador(TimeVasco);
    Flamengo->insJogador(TimeMengo);
    Partidas *derby = new Partidas(Flamengo,Vasco,27,"novembro",2022);
    cout << derby->getPlacar() << endl;
    cout << derby->dataJogo() << endl;
    
    
    cout << "Placar: " << derby->getPlacar() << endl;
    derby->golCasa();
    cout << endl;
    cout << "Placar: " << derby->getPlacar() << endl;
    derby->golVisitante();
    cout << endl;
    cout << "Placar: " << derby->getPlacar() << endl;
    derby->golVisitante();
    cout << endl;
    cout << "Placar: " << derby->getPlacar() << endl;
    derby->golCasa();
    cout << endl;
    cout << "Placar: " << derby->getPlacar() << endl;
    derby->golCasa();
    cout << endl;
    cout << "Placar: " << derby->getPlacar() << endl;
    cout << endl;
    
    derby->fimJogo();
    // delete derby;
    cout << Flamengo->getResultados() << endl << Vasco->getResultados();
    */
    
}