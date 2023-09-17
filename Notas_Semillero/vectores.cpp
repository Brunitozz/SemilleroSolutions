#include <vector>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*vector<int> arr;
    arr.push_back(5); //agregando un elemento al vector

    /*los vectores suelen ser mas dinamicos que los arreglos
        vector<int> arr(7); //vector con 7 elementos
    */
    /*Se tiene las edades de estudiantes
    de colegio y se desea contar la cantidad
    de estudiantes con edad par
    t total de casos
    n el numero de elementos del arr del caso 
    a0, a1, a2, ...*/
    int t, cin>> t; 
    while(t--){
        int n; cin>>n; 
        vector<int> arr(n);
        //entrada
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        //procesamiento
        int pares =0;
        for(int i=0; i<n; i++){
            if(arr[i]%2==0){
                pares++;
            }
        }
        //salida
        cout<<pares<<endl;
    }
    return 0;
}