/*
1. Ejercicio: Suma de los elementos de un arreglo
 Descripción: Escribe un programa que reciba como entrada un arreglo de números enteros y
calcule la suma de todos sus elementos.
 Requisitos:
 - Utilizar un ciclo para recorrer el arreglo.
 - Utilizar una función para realizar la suma.
 - Utilizar una bifurcación para manejar el caso de un arreglo vacío.

*/

#include <iostream>
using namespace std;

int sumaArreglo(int arr[], int tam) {
    int sum = 0;
    for (int i = 0; i < tam; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int tam;
    cout << "Ingrese el tamano del arreglo: ";
    cin >> tam;

    if (tam <= 0) {
        cout << "El tamano del arreglo debe ser mayor a cero y no debe de ser negativo." << endl;
        return 0;
    }
    
    int* arr = new int[tam];

    cout << "Ingrese los números del arreglo:" << endl;
    for (int i = 0; i < tam; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> arr[i];
    }

    int sum = sumaArreglo(arr, tam);
    cout << "La suma de los elementos del arreglo es: " << sum << endl;

    return 0;
}


