/*//Arreglos
int edad;
edad=15;

//Declaración de tipo
int arr_enteros[n] //Dice la dimesion*/

//Existe valores BAsurita
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Arreglo de enteros
    int arr_enteros[10];
    for(int i=0; i<10; i++){
        cout<<i<<", "<<arr_enteros[i]<<", "<<&arr_enteros<<endl;
    }
    //Arreglo de booleanos
    int arr_bool[10];
    for(int i=0; i<10; i++){
        cout<<i<<", "<<arr_bool[i]<<", "<<&arr_bool<<endl;
    }

    //Arreglo dinamico de enteros
    int *arr_din; // inicializacion de puntero
    arr_din = new int[5]; //Dimensionamiento
    //Asignacion de valores de al arreglo
    delete [] arr_din; //Liberacion de memoria
    return 0;
}