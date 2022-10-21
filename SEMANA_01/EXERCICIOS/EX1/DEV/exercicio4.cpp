#include <iostream>
#include <string>
using namespace std;

string caminho(int *v, int *maiorDistancia){
    int *vetor = v;
    int maior = 0;
    int posicao = 0;
    for(int i = 0; i < 4; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
            posicao = i;
        }
    }
    *maiorDistancia = maior;
    switch(posicao){
        case 0:
            return "Direita";
        case 1:
            return "Esquerda";
        case 2:
            return "Frente";
        case 3:
            return "Tras";
    }
}
int main(int argc, char** argv) {
    int vetor[4] = {1,2,3,4};
    int Distancia;
    string direcao = caminho(vetor, &Distancia);
    cout << "Direcao: " << direcao << endl;
    cout << "Maior distancia: " << Distancia << endl;
    return 0;
}