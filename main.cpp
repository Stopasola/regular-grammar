#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <cctype>
#include <algorithm>
using namespace std;

int main(){

    string Alfabeto,N_Terminais,Simbolo_Inicial,Ni,Nj,SK;
    int Num_Elementos,Num_Terminais, Num_Producoes,Num_Cadeia;


    cin >> N_Terminais;
    // Apenas maiusculas (A a Z)
    Num_Terminais = N_Terminais.size();
    //cout << "Num_Elementos " << Num_Elementos << endl;




    cin >> Alfabeto;
    //Apenas de d�gitos (0 a 9), letras min�sculas (a at� z) e sublinhado ( _ ).
    Num_Elementos = Alfabeto.size();
    //cout << "Num_Elementos " << Num_Elementos << endl;




    bool Aceito = false;
    while(Aceito == false){
        cin >> Simbolo_Inicial;
        size_t achou = N_Terminais.find(Simbolo_Inicial);
        if(achou != string::npos){
            Aceito = true;
        }
    }



    Aceito = false;
    //while(Aceito == false){
        cin >> Num_Producoes;
        getchar();
       // cout <<endl;
        /*if( Num_Producoes >= 1 && Num_Producoes <= (N_Terminais.size() * Alfabeto.size())){
            Aceito = true;
        }*/
    //}



    string Producoes[Num_Producoes];

    for(int i=0;i<Num_Producoes;i++){
        //scanf("%s %s%s %s%s",&Producoes[i].at(0),&Producoes[i].at(1),&Producoes[i].at(2),&Producoes[i].at(3),&Producoes[i].at(4));
        getline(cin,Producoes[i]);
        Producoes[i].erase(std::remove(Producoes[i].begin(), Producoes[i].end(), ' '),Producoes[i].end());
        if(Producoes[i].size() == 4){
            Producoes[i].insert(Producoes[i].size(),"*");
        }
        //cout << Producoes[i].size() << endl;
        //system("Pause");
        //remove_if(Producoes[i].begin(), Producoes[i].end(), isspace);
        //cout << Producoes[i] << endl;
        //system("pause");
    }

    /*for(int i=0;i<Num_Producoes;i++){

        cout << Producoes[i] << endl;
        //system("pause");
    }*/
    //system("pause");
    Aceito = false;
    while(Aceito == false){
        cin >> Num_Cadeia;
        if( Num_Cadeia >= 1 && Num_Cadeia <= 100){
            Aceito = true;
        }
    }



    string Testes[Num_Cadeia];
    for(int i=0;i< Num_Cadeia;i++){
        cin >> Testes[i];
    }

    ///////// Computa��o //////////
    //cout << "Producao " << Producoes[3].at(3) << endl;
    //system("Pause");
    string Simbolo_Atual;
    int Aceita = 0;
    bool acabou = false;
    for(int pos=0;pos<Num_Cadeia;pos++){
        cout << Testes[pos] << endl;
        Simbolo_Atual = Simbolo_Inicial;
        Testes[pos].erase(0,1);
        Testes[pos].erase(Testes[pos].size()-1,Testes[pos].size());

        for(int i=0; i<Testes[pos].size(); i++){
            for(int j=0;j<Num_Producoes;j++){
                /*cout << "j = " << j << endl;
                cout << "String lida " << Testes[pos].at(i) << endl;
                cout << "String Producao " << Producoes[j].at(3) << endl;
                cout << "Simbolo Atual " << Simbolo_Atual.at(0) << endl;
                cout << "Simbo Producao " << Producoes[j].at(0) << endl;
                */if(Testes[pos].at(i) == Producoes[j].at(3) && Simbolo_Atual.at(0) == Producoes[j].at(0)){
                        Aceita++;
                        //cout << "Aceita " << Aceita << endl;
                        Simbolo_Atual = Producoes[j].at(4);
                        break;
                }
                //cout << "Aceita " << Aceita << endl;
                //system("pause");
            }
        }
            //cout << "Simbolo_Atual.at(0)" << Simbolo_Atual.at(0) <<endl;
            for(int j=0;j<Num_Producoes;j++){
                if(Simbolo_Atual.at(0) == Producoes[j].at(0) && Producoes[j].at(3) == '#' && Aceita == Testes[pos].size()){
                    acabou = true;
                    break;
                }
                if(Simbolo_Atual.at(0) == '*' && Aceita == Testes[pos].size()){
                    acabou = true;
                    break;
                }
            }
            if(Aceita == Testes[pos].size() &&  /*Testes[pos].size()>0 &&*/ acabou == true ){
                cout << "S" << endl;
            }else{
                cout << "N" << endl;
            }
            acabou = false;
            Aceita = 0;
    }


    return 0;
}
