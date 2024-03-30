#include <iostream>
#include <vector>
#include <string>
#include "pedido.h"
using namespace std;

int main(){
    
    Pedido pedido1;
    int copo;
    int acai;
    int acompanhamento;
    int adicional;
    pedido1.getCopo();
    pedido1.setCopo(copo);
    pedido1.getAcai();
    pedido1.setAcai(acai);
    pedido1.getAcompanhamento();
    pedido1.setAcompanhamento(acompanhamento);
    pedido1.getAdicional();
    pedido1.setAdicional(adicional);
    pedido1.getCompra();
    
    return 0;
}