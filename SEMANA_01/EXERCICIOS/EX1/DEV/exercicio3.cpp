#include <iostream>
#include <string>
using namespace std;

int Medida(int *v, int maxv, int posicao, int medida){
    if(posicao < maxv){
        v[posicao] = medida;
        return posicao + 1;
    }
    return posicao;
}
int main(){
    int vetormax = 10;
    int vetorMov[vetormax];
    int atualvetor = 0;
    int medida = 0;
    cout << "Digite a medida: ";
    cin >> medida;
    atualvetor = Medida(vetorMov, vetormax, atualvetor, medida);
    cout << "Posicao atual do vetor: " << atualvetor << endl;
    return 0;
}