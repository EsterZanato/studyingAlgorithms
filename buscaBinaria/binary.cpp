#include <iostream>
#include <math.h>
#define tam 12

using namespace std;
int pesqBin(int[],int);
int count = count;

int main() {
    int lista[tam] = {2,10,15,17,21,28,40,55,60,65,68,70};
    cout << "O valor procurado está no indíce: " << pesqBin(lista,10) << endl;
}

int pesqBin(int valores[],int procurado) {
    int LimiteInferior=0;
    int LimiteSuperior=tam-1;

    while(LimiteInferior <= LimiteSuperior) {
        int posMeio=ceil((LimiteInferior + LimiteSuperior)/2);
        int palpite=valores[posMeio];

        if(palpite==procurado)
            return posMeio;
        if (palpite > procurado)
            LimiteSuperior=posMeio-1;
        else
            LimiteInferior=posMeio+1;
    }

    return -1;
}