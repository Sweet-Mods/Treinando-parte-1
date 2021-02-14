//code by sweet mods

//inclusoes
#include <iostream>
#include <map>
//inclusao principal
#include "recurses.h"

using namespace std;

//variaveis
string resp;


int main(){
    cout << "Carregando...";
    //
    map<int,string>player;
    Feminino *p1=new Feminino();
    Masculino *p2=new Masculino();
    system("cls");

    inicio:
    p1->print();
    cout << endl;
    p2->print();
    cout << "\n>";
    cin >> resp; 

    if(resp == "ms.down.money"){
        p2->downMoney();
        system("cls");
        goto inicio;
    }else if(resp == "ms.up.money"){
        p2->upMoney();
        system("cls");
        goto inicio;
    }else if(resp == "ms.down.life"){
        p2->downLife();
        system("cls");
        goto inicio;
    }else if(resp == "ms.up.life"){
        p2->upLife();
        system("cls");
        goto inicio;
    }else if(resp == "fm.down.money"){
        p1->downMoney();
        system("cls");
        goto inicio;
    }else if(resp == "fm.up.money"){
        p1->upMoney();
        system("cls");
        goto inicio;
    }else if(resp == "fm.down.life"){
        p1->downLife();
        system("cls");
        goto inicio;
    }else if(resp == "fm.up.life"){
        p1->upLife();
        system("cls");
        goto inicio;
    }

    return 0;
}