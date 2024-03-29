#include <iostream>
#include <vector>
#include <string>
#include "pedido.h"
using namespace std;

int main(){
    
    Pedido pedido1;
    pedido1.getCopo();
    pedido1.getAcai();
    pedido1.getAcompanhamento();
    pedido1.getAdicional();
    pedido1.getCompra();
    
    return 0;
}