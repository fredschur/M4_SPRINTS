#include <iostream>
#include <string>
using namespace std;

bool mapeamento(){
    char resposta;
    cout << "Deseja continuar o mapeamento? (sim/não): ";
    cin >> resposta;
    if(resposta == 'sim'){
        return true;
    }
    return false;
}
int main(){
    bool continua = mapeamento();
    if(continua){
        cout << "Continua mapeamento" << endl;
    }else{
        cout << "Nao continua mapeamento" << endl;
    }
    return 0;
}