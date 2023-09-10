#include <iostream>
using namespace std;
bool xor(int a[n]);
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    long long c;
    cin>>t;
    c=t;
    while(t--){
        int n, k, a, b;
        cin >> n >> k >> a >> b; //n=n_ciudades; k=ciudades_prinpales
        //a=ciudades iniciales; b=ciudades finales
        
        //cordenadas inesima ciudad
        int x[n], y[n];
        int i=0;
        for(int i=0; i<k; i++){
            cin>>x[i]>>y[i];
        }
        for(int j=k;j<n;j++){
            cin>>x[j]>>y[j];
        }
        //punto de partida ciudad x[a] y[a]
        //punto de llegada ciudad x[b] y[b]
    }
    int price;
    while(c--){
        if(2<(a-1) && (a-1)<k && 2<(b-1) && (b-1)<k){
            price=0;
        }else{
            price=abs(x[a]-x[b])+abs(x[b]-y[b]);
            cout<<price;
        }
    }

    return 0;
}
