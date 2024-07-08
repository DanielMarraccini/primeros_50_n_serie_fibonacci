/*Actividad
 *
 * Escribe un programa que imprima los 50 primeros números de la sucesión
 * de Fibonacci empezando en 0.
 * - La serie Fibonacci se compone por una sucesión de números en
 *   la que el siguiente siempre es la suma de los dos anteriores.
 *   0, 1, 1, 2, 3, 5, 8, 13...
 */


#include <iostream>

using namespace std;

int main(){

    long long numero[50];

    numero[0] = 0, numero[1] = 1;

    for(int i = 2; i < 50; i++){

        numero[i] = numero[i-1] + numero[i-2];
    }

    cout<<"Primeros 50 numeros en la serie Fibonacci: \n\n";

    for (int i = 0; i < 50; i++){

        cout<<numero[i]<<" ";

        if(i%10 == 9){

            cout<<endl;
        }
    }

    cout<<endl<<endl;

    cout<<"Presione ENTER para finalizar...";
    cin.get();
    return 0;
}
