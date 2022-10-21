#include <iostream>
#include <string>

int calcular(int medida, int min, int max){
    int valor = 0;
    valor = (medida - min) * 100 / (max - min);
    return valor;
}
int main () {
    int medida = 0;
    int min = 0;
    int max = 0;
    std::cout << "Digite a medida: ";
    std::cin >> medida;
    std::cout << "Digite o valor minimo: ";
    std::cin >> min;
    std::cout << "Digite o valor maximo: ";
    std::cin >> max;
    std::cout << "Valor convertido: " << calcular(medida, min, max) << std::endl;
    return 0;
}
