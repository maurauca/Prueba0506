/*6. Ejercicio: Fibonacci
 Descripción: Escribe un programa que reciba como entrada un número entero y muestre la
secuencia de Fibonacci hasta ese número.
 Requisitos:
 - Utilizar una función para generar la secuencia de Fibonacci.
 - Utilizar ciclos para calcular los términos de la secuencia.
 - Utilizar una bifurcación para manejar el caso de un número negativo.
*/

#include <iostream>
using namespace std;

void fibonacci(int n) {
    int num1 = 0;
    int num2 = 1;
    int nextNum;

    if (n < 0) {
        cout << "El número debe ser no negativo." << endl;
        return;
    }

    cout << "Secuencia de Fibonacci hasta el termino " << n << ":" << endl;

    if (n >= 1) {
        cout << num1 << " ";
    }

    if (n >= 2) {
        cout << num2 << " ";
    }

    for (int i = 3; i <= n; i++) {
        nextNum = num1 + num2;
        cout << nextNum << " ";

        num1 = num2;
        num2 = nextNum;
    }

    cout << endl;
}

int main() {
    int num;
    cout << "Cuantos numeros deseas de la secuencia fibonacci: ";
    cin >> num;

    fibonacci(num);

    return 0;
}
