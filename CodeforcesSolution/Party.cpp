/*
n personas en la fiesta
i-nesima persona tiene ai caramelos

- elegir numero entero entre 1<p<n
-  " numero entero x>0
- entregar x^2 a p-inesima persona, no excederse
con los el numero de caramelos que se tinee
 no dar dulces asi mismo

todas las personas se dan dulces entre si
que todos las personas tengan la misma cantidad de dulces
*/
#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, m=0; //cantidad de personas
    cin>>t;
    while(m<t){
        cin>>n;
        int a[m][n]; //cantidad de dulces de personas
        for(int i=0; i<n; i++){
            cin>>a[m][i];
        }
        m++;
    }
    while(t--){
        
    }

    return 0;
}
