#include "JogadorAtacante.h"
#include "JogadorDefesa.h"
#include "JogadorGoleiro.h"
#include "Partidas.h"
#include "Time.h"
#include "CustomException.h"
#include <iostream>
#include <typeinfo>

using namespace std;

//Essa funcao inclui os times no campeonato sem necessitar ficar repetindo as coisas no while.
void insTime(Time *Camp[],int index,string n, Jogador*Jogs[]){
    Camp[index] = new Time(n);
    Camp[index]->insJogador(Jogs);
    cout << "Time " << n << " incluido com sucesso!" << endl;

}

int main(){
    //Declaração de variaveis
    Jogador *TimeFla[] = {new JogadorAtacante("Gabigol",22,10,1,9,7,1,2), new JogadorDefesa("DavidLuiz",23,0,0,1,10,2),new JogadorAtacante("BrunoHenrique",22,10,1,9,7,1,2), new JogadorDefesa("LeoPereira",23,0,0,1,10,2),new JogadorAtacante("Pedro",22,10,1,9,7,1,2), new JogadorDefesa("Pablo",23,0,0,1,10,2),new JogadorAtacante("Arrascaeta",22,10,1,9,7,1,2), new JogadorGoleiro("Santos",23,0,0,9,1,10),new JogadorAtacante("Everton",22,10,1,9,7,1,2), new JogadorDefesa("RodrigoCaio",23,0,0,1,10,2),new JogadorAtacante("Diego",22,10,1,9,7,1,2)};

    Jogador *TimeVasco[] = {new JogadorGoleiro("Jorge",22,10,1,9,7,9), new JogadorDefesa("Erick",23,0,0,1,10,2),new JogadorAtacante("Matheus",22,10,1,9,7,1,2), new JogadorDefesa("Pedro",23,0,0,1,10,2),new JogadorAtacante("Gustavo",22,10,1,9,7,1,2), new JogadorDefesa("Guilherme",23,0,0,1,10,2),new JogadorAtacante("Clebao",22,10,1,9,7,1,2), new JogadorDefesa("Mendonza",23,0,0,1,10,2),new JogadorAtacante("Babigol",22,10,1,9,7,1,2), new JogadorDefesa("Nene",23,0,0,1,10,2),new JogadorAtacante("CacaRato",22,10,1,9,7,1,2)};

    Jogador *TimeSalgueiro[] = {new JogadorAtacante("RonaldinhoPernambucano",22,10,1,9,7,1,2), new JogadorDefesa("Tiringa",23,0,0,1,10,2),new JogadorAtacante("Camavinga",22,10,1,9,7,1,2), new JogadorDefesa("Ganso",23,0,0,1,10,2),new JogadorAtacante("Alex",22,10,1,9,7,1,2), new JogadorDefesa("MagnoAlves",23,0,0,1,10,2),new JogadorAtacante("Soteldo",22,10,1,9,7,1,2), new JogadorDefesa("JoaoGomes",23,0,0,1,10,2),new JogadorAtacante("Estacio",22,10,1,9,7,1,2), new JogadorGoleiro("JojeDudu",23,0,8,0,1,1),new JogadorAtacante("Pente",22,10,1,9,7,1,2)};

    Jogador *TimeBrasil[] = {new JogadorAtacante("Neymar",22,10,1,9,7,1,2), new JogadorDefesa("Militao",23,0,0,1,10,2),new JogadorAtacante("Richarlison",22,10,1,9,7,1,2), new JogadorDefesa("Marquinhos",23,0,0,1,10,2),new JogadorAtacante("Raphinha",22,10,1,9,7,1,2), new JogadorDefesa("AlexTelles",23,0,0,1,10,2),new JogadorAtacante("ViniJr",22,10,1,9,7,1,2), new JogadorDefesa("AlexSandro",23,0,0,1,10,2),new JogadorAtacante("Paqueta",22,10,1,9,7,1,2), new JogadorDefesa("Casemiro",23,0,0,1,10,2),new JogadorGoleiro("Alisson",10,22,10,1,9,7)};

    Time *Campeonato[4];
    int size = 0;

    cout << "Ola! Bem vindo ao sistema de times." << endl << "Digite: " << endl << 
    "1 -> Para inscrever um time." << endl << 
    "2 -> Para ver todos os times inscritos." << endl << 
    "3 -> Para procurar um jogador em um time." << endl << 
    "4 -> Para trocar um time ja inscrito." << endl <<
    "5 -> Para ver detalhe de um jogador de um time." << endl <<
    "6 -> Para comecar uma partida." << endl <<
    "7 -> Para saber como esta o time no campeonato." << endl <<
    "10 -> Para ver este menu novamente." << endl << 
    "999 -> Para encerrar o programa." << endl;

    do{
        int key = 0;
        cin >> key;
        if(key == 1){// 1 - Para incluir o time X no Campeonato no Index;
            string nome;
            //int index = 0;
            cout << "Digite o nome do time e ele sera inserido no campeonato!" << endl;
            cout << "Times disponiveis para inscricao: Flamengo, Vasco, Salgueiro e Brasil" << endl;
            cin >> nome;
            //IFs aninhados para inserir o time no campeonato
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
            //printar os jogadores do time ordenados por tipo de jogador
            for(int i = 0; i < size; i++){
                cout << "====================== " << Campeonato[i]->getNome() << " ====================== " << endl;
                Campeonato[i]->imprimeTime();
                cout << endl;
            }
        }else if(key == 999){//Exit do programa;
            break;
        }else if(key == 10){//Printar o menu novamente;
            system("clear||cls");
            cout << "Digite: " << endl << 
            "1 -> Para inscrever um time." << endl << 
            "2 -> Para ver todos os times inscritos." << endl << 
            "3 -> Para procurar um jogador em um time." << endl << 
            "4 -> Para trocar um time ja inscrito." << endl <<
            "5 -> Para ver detalhe de um jogador de um time." << endl <<
            "6 -> Para comecar uma partida." << endl <<
            "7 -> Para saber como esta o time no campeonato." << endl <<
            "10 -> Para ver este menu novamente." << endl << 
            "999 -> Para encerrar o programa." << endl;
        }else if(key == 3){//Procurar um jogador em um time;
            cout << "Digite o nome do time seguido do nome do jogador que voce procura!. Ex: Flamengo DavidLuiz" << endl;
            string nometime;
            string nomejog;
            cin >> nometime >> nomejog;

            try{
                bool testaTime = false;
                int search = 0;
                for(int i = 0; i < size; i++){//procura o time que tem aquele nome.
                    testaTime = Campeonato[i]->realTime(nometime);
                    if(testaTime == true){
                        search = i;
                        cout << "Time encontrado!!" << endl << "Irei checar se este jogador esta nesse time, um momento!" << endl;
                        break;
                    }
                }
                if(testaTime == false){//Se o time nao for encontrado, ele nao checa se o jogador esta no time.
                    throw CustomExcep("Esse time nao esta inscrito!!");
                }

                bool testaJogador = Campeonato[search]->realPlayer(nomejog);
                if(testaJogador){//printa o time ao encontar o jogador, ou não
                    cout << "Jogador encontrado, este eh o seu time:" << endl;
                    Campeonato[search]->imprimeTime();
                }else{
                    throw CustomExcep("Esse jogador nao esta no time!!");
                }
            }catch(CustomExcep e){
                cout << "ERROR: " << e.what() << endl;
            }
        }else if(key == 4){//substitui um time 
            cout << "Digite o nome do time a ser substituido e o nome do time que ira entrar no lugar." << endl;
            string sai;
            string entra;
            cin >> sai >> entra;

            try{
                bool testaTime = false;
                int search = 0;
                for(int i = 0; i < size; i++){  //busca o time no campeonato
                    testaTime = Campeonato[i]->realTime(sai); //testa se o time na posicao i e o desejado, caso sim altera o valor de testaTime para true.
                    if(testaTime == true){  //se existir, termina a busca e grava o indice do time.
                        search = i;
                        cout << "Time encontrado!! Vamos troca-lo!" << endl;
                        break;
                    }
                }
                if(testaTime == false){ //se o time nao existir dentro do campeonato, joga exececao.
                    throw CustomExcep("Esse time nao esta inscrito!!");
                }else{ //escolhe o time que ira entrar no lugar do outro.
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
        }else if(key == 5){
            //Pelo nome do jogador, exibir a quantidade de vitorias derrotas e empates
            cout << "Digite o nome do jogador para ver o historico do time." << endl;
            string jogador;
            cin >> jogador;

            try{
                bool testaTime = false;
                int search = 0;
                for(int i = 0; i < size; i++){  //testa se o jogador existe em algum time
                    if(Campeonato[i]->realPlayer(jogador)){ //se achar o jogador, printa os resultados do time.
                        cout << Campeonato[i]->getResultados() << endl;
                        testaTime = true;
                    }

                    Jogador *aux = Campeonato[i]->getJogador(jogador);   
                    if(jogador == aux->getNome()){  //printa o jogador e o time que ele pertence.
                        aux->printJogador();
                        cout << "Joga no: " << Campeonato[i]->getNome() << endl;
                        break;
                    }
                }
                if(testaTime == false){ //se nao existir, joga exececao.
                    throw CustomExcep("Esse jogador nao esta inscrito em nenhum time!!");
                }
            }catch(CustomExcep e){
                cout << "ERROR: " << e.what() << endl;
            }
        }else if(key == 6){
            //vou fazer uma partida entre dois times
            cout << "Digite quais times jogarao contra seguido da data. Ex. Flamengo(time casa) Vasco(time visitante) 22 10 2022" << endl;
            string timeCasa;
            string timeVisitante;
            int day;
            int month;
            int year;
            cin >> timeCasa >> timeVisitante >> day >> month >> year;

            try{
                bool testaTimeCasa = false;
                int searchCasa = 0;
                for(int i = 0; i < size; i++){ //procura o time que tem aquele nome.
                    testaTimeCasa = Campeonato[i]->realTime(timeCasa); //testa se o time na posicao i e o desejado, caso sim altera o valor de testaTimeCasa para true.
                    if(testaTimeCasa == true){ //se existir, termina a busca e grava o indice do time da casa.
                        searchCasa = i;
                        break;
                    }
                }
                if(testaTimeCasa == false){ //se nao existir, joga exececao.
                    throw CustomExcep("Time da Casa nao esta inscrito no campeonato");
                }
                bool testaTimeVis = false;
                int searchVis = 0;
                for(int i = 0; i < size; i++){  //procura o time que tem aquele nome.
                    testaTimeVis = Campeonato[i]->realTime(timeVisitante); //testa se o time na posicao i e o desejado, caso sim altera o valor de testaTimeVis para true.
                    if(testaTimeVis == true){   //se existir, termina a busca e grava o indice do time visitante.
                        searchVis = i;
                        break;
                    }
                }
                if(testaTimeVis == false){  //se nao existir, joga exececao.
                    throw CustomExcep("Time visitante nao esta inscrito no campeonato");
                }

                Partidas *jogo = new Partidas(Campeonato[searchCasa],Campeonato[searchVis],day,month,year); //cria um objeto do tipo Partidas com os times escolhidos e a data.
                cout << "Time da casa e time visitante ja entraram em campo!" << endl;
                do{
                    cout << "Insira:" << endl << 
                    "1 -> Para gol do time da casa." << endl << 
                    "2 -> Para gol do time visitante." << endl << 
                    "3 -> Para ver o resultado atual da partida." << endl << 
                    "4 -> Para descobrir se o time eh mandante ou nao pelo nome." << endl <<
                    "5 -> Para acabar a partida." << endl;
                    int command = 0;
                    cin >> command;
                    if(command == 1){   //se o comando for 1, o time da casa faz um gol.
                        string jog;
                        cout << "Digite o nome do jogador que fez o gol." << endl;
                        cin >> jog;
                        Jogador*aux = Campeonato[searchCasa]->getJogador(jog);  //pega o jogador que fez o gol.
                        if(aux == nullptr){ //se o jogador nao existir, o gol nao e contabilizado.
                            cout << "Este jogador nao esta no time, gol ANULADO!" << endl;
                        }else{
                            aux->somaGols();    //soma um gol no jogador.
                            jogo->golCasa();    //soma um gol no time da casa.
                        }
                    }else if(command == 2){ //se o comando for 2, o time visitante faz um gol.
                        string jog;
                        cout << "Digite o nome do jogador que fez o gol." << endl;
                        cin >> jog;
                        Jogador*aux = Campeonato[searchVis]->getJogador(jog);   //pega o jogador que fez o gol.
                        if(aux == nullptr){ //se o jogador nao existir, o gol nao e contabilizado.
                            cout << "Este jogador nao esta no time, gol ANULADO!" << endl;
                        }else{
                            aux->somaGols();    //soma um gol no jogador.
                            jogo->golVisitante();   //soma um gol no time visitante.
                        }
                    }else if(command == 3){ //se o comando for 3, printa o resultado atual da partida.
                        cout << jogo->getPlacar() << endl;  //printa o placar atual.
                    }else if(command == 4){ //se o comando for 4, printa se o time eh mandante ou nao.
                        cout << "Descubra se o time eh da casa ou visitante digitando o nome: " << endl;
                        string nome;
                        cin >> nome;
                        if(nome == jogo->getCasa()){    //se o nome for igual ao nome do time da casa, printa que ele e mandante.
                            cout << "Esse eh o time da casa!" << endl;
                        }else if(nome == jogo->getVisitante()){ //se nao, printa que ele e visitante.
                            cout << "Esse eh o time visitante!" << endl;
                        }
                    }else if(command == 5){ //se o comando for 5, acaba a partida.
                        jogo->fimJogo();    //chama o metodo fimJogo() que altera o valor de jogoAtivo para false.
                        delete jogo;        //deleta o objeto jogo.
                        break;              //termina o loop do menu da partida.
                    }
                }while(true);
            }catch(CustomExcep e){
                cout << "ERROR: " << e.what() << endl;
            }
        }else if(key == 7){
            //Quero saber a situação do meu time no campeonato até o momento.
            string nomeTime;
            cout << "Digite o nome do time que voce quer ver o resultado no campeonato." << endl;
            cin >> nomeTime;
            try{    
                bool testaTime = false;
                int search = 0;
                for(int i = 0; i < size; i++){ //procura o time que tem aquele nome.
                    testaTime = Campeonato[i]->realTime(nomeTime);  //testa se o time na posicao i e o desejado, caso sim altera o valor de testaTime para true.
                    if(testaTime == true){  //se existir, termina a busca e grava o indice do time.
                        search = i;;
                        break;
                    }
                }
                if(testaTime == false){ //se nao existir, joga exececao.
                    throw CustomExcep("Esse time nao esta inscrito!!");
                }else{  //se existir, printa o resultado do time.
                   cout << Campeonato[search]->getResultados() << endl;
                }
            }catch(CustomExcep e){
                cout << "ERROR: " << e.what() << endl;
            }
        }
    }while(true);

    return 0;
}