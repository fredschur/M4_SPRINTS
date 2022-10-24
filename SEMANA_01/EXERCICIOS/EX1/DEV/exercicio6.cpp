#include <iostream>
#include <string>
using namespace std;

int dirige(int *v,int maxv){
	int maxVetor = maxv;
	int *vetorMov = v;
	int atualvetor = 0;
	int dirigindo = 1;		
	while(dirigindo == 1){		
		for(int i=0; i < 4; i++){
			int medida = sensor(); /// .. Chame a função de de leitura da medida para a "Direita"
			medida = calcular(medida,0,830);
		atualvetor = metrica(atualvetor, medida, vetorMov, maxVetor);
		}
		// Chame a função para armazenar a medida no vetor
        ///////////////////////////////////////////////////////////////////////////		
		// Repita as chamadas acima para a "Esquerda", "Frente", "Tras"
		// ................
		///////////////////////////////////////////////////////////////////////////
		dirigindo = mapeamento();		
	}
	return atualvetor;
}


// O trecho abaixo irá utilizar as funções acima para ler os sensores e o movimento
// do robô e no final percorrer o vetor e mostrar o movimento a cada direção baseado 
// na maior distância a cada movimento
void percorre(int *v,int tamPercorrido){		
	int *vetorMov = v;
	int maiorDir = 0;
	
	for(int i = 0; i< tamPercorrido; i+=4){
		const char* direcao = caminho(&(vetorMov[i]),&maiorDir);
		printf("Movimentando para %s distancia = %i\n",direcao,maiorDir);
	}
}

int main(int argc, char** argv) {
	int maxVetor = 100;
	int vetorMov[maxVetor*4];
	int atualvetor = 0;
	
	atualvetor = dirige(vetorMov,maxVetor);
	percorre(vetorMov,atualvetor);
	
	return 0;
}
