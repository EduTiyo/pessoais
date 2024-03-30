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
        cout << "- " << compra[i] << endl;
    }
    return compra;
}

void Pedido::setCopo(int copoIndex){
    cin >> copoIndex;
    if (copoIndex <= copo.size() && copoIndex >= 1){
        string copoSelecionado = copo[copoIndex - 1];
        compra.push_back(copoSelecionado + "ml");
    }else {
        cout << "Opção inválida de copo\n";
        setCopo(copoIndex);
    }
}

void Pedido::setAcai(int acaiIndex){
    cin >> acaiIndex;
    if (acaiIndex <= acai.size() && acaiIndex >= 1){
        string acaiSelecionado = acai[acaiIndex - 1];
        compra.push_back(acaiSelecionado);
    }else {
        cout << "Opção inválida de açai\n";
        setAcai(acaiIndex);
    }
}

void Pedido::setAcompanhamento(int acompanhamentoIndex){
    cout << "selecionte 0 para nenhum acompanhamento\n";
    cin >> acompanhamentoIndex;
    if (acompanhamentoIndex <= acompanhamento.size() && acompanhamentoIndex >= 1){
        string acompanhamentoSelecionado = acompanhamento[acompanhamentoIndex - 1];
        compra.push_back(acompanhamentoSelecionado);
    }else {
        cout << "Opção inválida de acompanhamento\n";
        setAcompanhamento(acompanhamentoIndex);
    }
}

void Pedido::setAdicional(int adicionalIndex){
    cout << "selecionte 0 para nenhum adicional\n";
    cin >> adicionalIndex;
    if (adicionalIndex <= adicional.size() && adicionalIndex >= 1){
        string adicionalSelecionado = adicional[adicionalIndex - 1];
        compra.push_back(adicionalSelecionado);
    }else if(adicionalIndex == 0){
        cout << " " << endl;
    }else{
        cout << "Opção inválida de adicional\n";
        setAdicional(adicionalIndex);
    }
}