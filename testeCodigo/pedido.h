#include <vector>
#include <string>
using namespace std;
class Pedido{

    private:
        vector<string> copo = {"300","500","700"};
        vector<string> acai = {"tradicional", "premium"};
        vector<string> acompanhamento = {"morango", "leite em po", "banana"};
        vector<string> adicional = {"ouro branco", "nutella"};
        vector<string> compra;
    public:
        vector<string> getCopo();
        vector<string> getAcai();
        vector<string> getAcompanhamento();
        vector<string> getAdicional();
        vector<string> getCompra();

        void setCopo(int &copo);
        void setAcai(int acai);
        void setAcompanhamento(int acompanhamento, int copo);
        void setAdicional(int adicional);


};