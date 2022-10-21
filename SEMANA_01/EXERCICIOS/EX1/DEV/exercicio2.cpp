#include <iostream>
#include <string>
using namespace std;

int leSensor(){
    int valor = 0;
    cout << "Digite o valor do sensor: ";
    cin >> valor;
    return valor;
}
int main(){
    int valor = 0;
    valor = leSensor();
    cout << "Valor do sensor: " << valor << endl;
    return 0;
}