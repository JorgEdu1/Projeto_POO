#include "JogadorAtacante.h"
#include "JogadorDefesa.h"
#include "JogadorGoleiro.h"
#include "Partidas.h"
#include "Time.h"
#include "CustomException.h"
#include <iostream>
using namespace std;

//Essa funcao inclui os times no campeonato sem necessitar ficar repetindo as coisas no while.
void insTime(Time *Camp[],int index,string n, Jogador*Jogs[]){
    Camp[index] = new Time(n);
    Camp[index]->insJogador(Jogs);
    cout << "Time " << n << " incluido com sucesso!" << endl;

}

int main(){

    Jogador *TimeFla[] = {new JogadorAtacante("Gabigol",22,10,1,9,7,1,2), new JogadorDefesa("DavidLuiz",23,0,0,1,10,2),new JogadorAtacante("BrunoHenrique",22,10,1,9,7,1,2), new JogadorDefesa("LeoPereira",23,0,0,1,10,2),new JogadorAtacante("Pedro",22,10,1,9,7,1,2), new JogadorDefesa("Pablo",23,0,0,1,10,2),new JogadorAtacante("Arrascaeta",22,10,1,9,7,1,2), new JogadorDefesa("Cleiton",23,0,0,1,10,2),new JogadorAtacante("Everton",22,10,1,9,7,1,2), new JogadorDefesa("RodrigoCaio",23,0,0,1,10,2),new JogadorAtacante("Diego",22,10,1,9,7,1,2)};

    Jogador *TimeVasco[] = {new JogadorAtacante("Jorge",22,10,1,9,7,1,2), new JogadorDefesa("Erick",23,0,0,1,10,2),new JogadorAtacante("Matheus",22,10,1,9,7,1,2), new JogadorDefesa("Pedro",23,0,0,1,10,2),new JogadorAtacante("Gustavo",22,10,1,9,7,1,2), new JogadorDefesa("Guilherme",23,0,0,1,10,2),new JogadorAtacante("Clebao",22,10,1,9,7,1,2), new JogadorDefesa("Mendonza",23,0,0,1,10,2),new JogadorAtacante("Babigol",22,10,1,9,7,1,2), new JogadorDefesa("Nene",23,0,0,1,10,2),new JogadorAtacante("CacaRato",22,10,1,9,7,1,2)};

    Jogador *TimeSalgueiro[] = {new JogadorAtacante("RonaldinhoPernambucano",22,10,1,9,7,1,2), new JogadorDefesa("Tiringa",23,0,0,1,10,2),new JogadorAtacante("Camavinga",22,10,1,9,7,1,2), new JogadorDefesa("Ganso",23,0,0,1,10,2),new JogadorAtacante("Alex",22,10,1,9,7,1,2), new JogadorDefesa("MagnoAlves",23,0,0,1,10,2),new JogadorAtacante("TiaDaCantina",22,10,1,9,7,1,2), new JogadorDefesa("JoaoGomes",23,0,0,1,10,2),new JogadorAtacante("Estacio",22,10,1,9,7,1,2), new JogadorDefesa("JojeDudu",23,0,0,1,10,2),new JogadorAtacante("Pente",22,10,1,9,7,1,2)};

    Jogador *TimeBrasil[] = {new JogadorAtacante("Neymar",22,10,1,9,7,1,2), new JogadorDefesa("Militao",23,0,0,1,10,2),new JogadorAtacante("Richarlison",22,10,1,9,7,1,2), new JogadorDefesa("Marquinhos",23,0,0,1,10,2),new JogadorAtacante("Raphinha",22,10,1,9,7,1,2), new JogadorDefesa("AlexTelles",23,0,0,1,10,2),new JogadorAtacante("ViniJr",22,10,1,9,7,1,2), new JogadorDefesa("AlexSandro",23,0,0,1,10,2),new JogadorAtacante("Paqueta",22,10,1,9,7,1,2), new JogadorDefesa("Casemiro",23,0,0,1,10,2),new JogadorAtacante("BrunoGuimaraes",22,10,1,9,7,1,2)};

    Time *Campeonato[4];
    int size = 0;

    cout << "Ola! Bem vindo ao sistema de times." << endl << "Digite: " << endl << "1 -> Para inscrever um time." << endl << "2 -> Para ver todos os times inscritos." << endl << "3 -> Para procurar um jogador em um time." << endl << "4 -> Para trocar um time ja inscrito." << endl <<"10 -> Para ver este menu novamente." << endl << "999 -> Para encerrar o programa." << endl;


    do{
        int key = 0;
        cin >> key;
        // 1 - Para incluir o time X no Campeonato no Index;
        if(key == 1){

            string nome;
            //int index = 0;
            cout << "Digite o nome do time e ele sera inserido no campeonato!" << endl;
            cout << "Times disponiveis para inscricao: Flamengo, Vasco, Salgueiro e Brasil" << endl;
            cin >> nome;
            if(nome == "Flamengo"){
                insTime(Campeonato,size,nome,TimeFla);

            }else if(nome == "Vasco"){
                insTime(Campeonato,size,nome,TimeVasco);

            }else if(nome == "Salgueiro"){
                insTime(Campeonato,size,nome,TimeSalgueiro);

            }else if(nome == "Brasil"){
                insTime(Campeonato,size,nome,TimeBrasil);
            }
            if(size < 4){
                size++;
            }
        }else if(key == 2){
            for(int i = 0; i < size; i++){
                cout << "====================== " << Campeonato[i]->getNome() << " ====================== " << endl;
                Campeonato[i]->imprimeTime();
                cout << endl;
            }
            
        }else if(key == 999){//Exit do programa;
            break;
        }else if(key == 10){
            cout << "Digite: " << endl << "1 -> Para inscrever um time." << endl << "2 -> Para ver todos os times inscritos." << endl << "3 -> Para procurar um jogador em um time." << endl << "4 -> Para trocar um time ja inscrito." << endl <<"10 -> Para ver este menu novamente." << endl << "999 -> Para encerrar o programa." << endl;
        }else if(key == 3){
            cout << "Digite o nome do time seguido do nome do jogador que voce procura!. Ex: Flamengo DavidLuiz" << endl;
            string nometime;
            string nomejog;
            cin >> nometime >> nomejog;

            try{
                bool testaTime = false;
                int search = 0;
                for(int i = 0; i < size; i++){
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
        }else if(key == 4){
            cout << "Digite o nome do time a ser substituido e o nome do time que ira entrar no lugar." << endl;
            string sai;
            string entra;
            cin >> sai >> entra;

            try{
                bool testaTime = false;
                int search = 0;
                for(int i = 0; i < size; i++){
                    testaTime = Campeonato[i]->realTime(sai);
                    if(testaTime == true){
                        search = i;
                        cout << "Time encontrado!! Vamos troca-lo!" << endl;
                        break;
                    }
                }
                if(testaTime == false){
                    throw CustomExcep("Esse time nao esta inscrito!!");
                }else{
                    if(entra == "Flamengo"){
                        insTime(Campeonato,search,entra,TimeFla);

                    }else if(entra == "Vasco"){
                        insTime(Campeonato,search,entra,TimeVasco);

                    }else if(entra == "Salgueiro"){
                        insTime(Campeonato,search,entra,TimeSalgueiro);

                    }else if(entra == "Brasil"){
                        insTime(Campeonato,search,entra,TimeBrasil);
                    }
                }
            }catch(CustomExcep e){
                cout << "ERROR: " << e.what() << endl;
            }
        }
    }while(true);
}
//     Campeonato[0] = new Time("Vasco");

//     Jogador *TimeVasco[] = {new JogadorAtacante("Jorge",22,10,1,9,7,1,2), new JogadorDefesa("Erick",23,0,0,1,10,2),new JogadorAtacante("Matheus",22,10,1,9,7,1,2), new JogadorDefesa("Pedro",23,0,0,1,10,2),new JogadorAtacante("Gustavo",22,10,1,9,7,1,2), new JogadorDefesa("Guilherme",23,0,0,1,10,2),new JogadorAtacante("Clebao",22,10,1,9,7,1,2), new JogadorDefesa("Mendonza",23,0,0,1,10,2),new JogadorAtacante("Babigol",22,10,1,9,7,1,2), new JogadorDefesa("Nene",23,0,0,1,10,2),new JogadorAtacante("CacaRato",22,10,1,9,7,1,2)};
//     Campeonato[0]->insJogador(TimeVasco);

//     Campeonato[1] = new Time("Flamengo");
    

//     Campeonato[2] = new Time("Salgueiro");
//     Jogador *TimeSalgueiro[] = {new JogadorAtacante("RonaldinhoPernambucano",22,10,1,9,7,1,2), new JogadorDefesa("Tiringa",23,0,0,1,10,2),new JogadorAtacante("Camavinga",22,10,1,9,7,1,2), new JogadorDefesa("Ganso",23,0,0,1,10,2),new JogadorAtacante("Alex",22,10,1,9,7,1,2), new JogadorDefesa("MagnoAlves",23,0,0,1,10,2),new JogadorAtacante("TiaDaCantina",22,10,1,9,7,1,2), new JogadorDefesa("JoaoGomes",23,0,0,1,10,2),new JogadorAtacante("Estacio",22,10,1,9,7,1,2), new JogadorDefesa("JojeDudu",23,0,0,1,10,2),new JogadorAtacante("Pente",22,10,1,9,7,1,2)};
//     Campeonato[2]->insJogador(TimeSalgueiro);

//     Campeonato[3] = new Time("Brasil");
//     Jogador *TimeBrasil[] = {new JogadorAtacante("Neymar",22,10,1,9,7,1,2), new JogadorDefesa("Militao",23,0,0,1,10,2),new JogadorAtacante("Richarlison",22,10,1,9,7,1,2), new JogadorDefesa("Marquinhos",23,0,0,1,10,2),new JogadorAtacante("Raphinha",22,10,1,9,7,1,2), new JogadorDefesa("AlexTelles",23,0,0,1,10,2),new JogadorAtacante("ViniJr",22,10,1,9,7,1,2), new JogadorDefesa("AlexSandro",23,0,0,1,10,2),new JogadorAtacante("Paqueta",22,10,1,9,7,1,2), new JogadorDefesa("Casemiro",23,0,0,1,10,2),new JogadorAtacante("BrunoGuimaraes",22,10,1,9,7,1,2)};
//     Campeonato[3]->insJogador(TimeBrasil);


//     for(int i = 0; i < 4; i ++){
//         Campeonato[i]->imprimeTime();
//         cout << endl;
//     }



//     string nometime;
//     string nomejog;
//     cin >> nometime >> nomejog;

//     try{
//         bool testaTime = false;
//         int search = 0;
//         for(int i = 0; i < 4; i++){
//             testaTime = Campeonato[i]->realTime(nometime);
//             if(testaTime == true){
//                 search = i;
//                 cout << "Time encontrado!!" << endl << "Irei checar se este jogador esta nesse time, um momento!" << endl;
//                 break;
//             }
//         }
//         if(testaTime == false){
//             throw CustomExcep("Esse time nao esta inscrito!!");
//         }

//         bool testaJogador = Campeonato[search]->realPlayer(nomejog);
//         if(testaJogador){
//             cout << "Jogador encontrado, este eh o seu time:" << endl;
//             Campeonato[search]->imprimeTime();
//         }else{
//             throw CustomExcep("Esse jogador nao esta no time!!");
//         }
//     }catch(CustomExcep e){
//         cout << "ERROR: " << e.what() << endl;
//     }
