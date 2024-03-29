#include <vector>
#include <string>
#include "pedido.h"
#include <iostream>
using namespace std;

vector<string> Pedido::getCopo(){
    cout << "selecione um copo" << endl;
    for(int i = 0; i < copo.size(); ++i){
        cout << i+1 << " - " << copo[i] << "ml" << endl;
    }
    return copo;
}

vector<string> Pedido::getAcai(){
    cout << "selecione um acai" << endl;
    for(int i = 0; i < acai.size(); ++i){
        cout << i+1 << " - " << acai[i] << endl;
    }
    return acai;
}
vector<string> Pedido::getAcompanhamento(){
    cout << "selecione um acompanhamento" << endl;
    for(int i = 0; i < acompanhamento.size(); ++i){
        cout << i+1 << " - " << acompanhamento[i] << endl;
    }
    return acompanhamento;
}

vector<string> Pedido::getAdicional(){
    cout << "selecione um adicional" << endl;
    for(int i = 0; i < adicional.size(); ++i){
        cout << i+1 << " - " << adicional[i] << endl;
    }
    return adicional;
}

vector<string> Pedido::getCompra(){
    cout << "sua compra:" << endl;
    for(int i = 0; i < compra.size(); ++i){
        cout << i+1 << " - " << compra[i] << endl;
    }
    return compra;
}

void Pedido::setCopo(int copo){
    cin >> copo;
    
}
