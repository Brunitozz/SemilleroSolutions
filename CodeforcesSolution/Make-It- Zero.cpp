#include <iostream>
using namespace std;
bool xor(int a[n]);
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    int c=t;
    while (c--) { 
        int n;
        cin >> n;
        int a[n]; 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
    }
    int cont=0;
    while(t--){

        xor(a[n]);
    }
    
    return 0;
}

int xor(int a[n]){
    int s = 0;
    for(int i=0; i<n; i++){
        s = s ^ a[i];
    }
    return s;     
}
