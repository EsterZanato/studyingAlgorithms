#include <iostream>

using namespace std;
#define tam 10

void ordenacaoSelecao(int *arr, int n) {
    for(int i=0;i<n-1; i++) { //vai percorrer todo o array
        int min = i;
        for (int j=i+1; j<n; j++) { // vai percorrer o array a partir do próximo elemento
            if (arr[j] > arr[min]) { //compara se o J é menor que o min, se for true o J vira o min
                min = j;
            }
        }

        int tmp = arr[i];
        arr[i] = arr[min]; //aqui é feito a troca para que o menor valor fique no início da lista
        arr[min] = tmp;
    }
}

void imprimirArray (int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}


int main() {
    int arr[tam] = {64, 25, 12, 22, 11, 1, 2, 3, 4, 5};
    cout << "Array original: " << endl;
    imprimirArray(arr, tam);
    cout << "Array ordenado: " << endl;
    ordenacaoSelecao(arr, tam);
    imprimirArray(arr,tam);

    return 0;
}