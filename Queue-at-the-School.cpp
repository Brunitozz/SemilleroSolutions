#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n, t;
    cin>>n>>t;
    string s;
    cin>>s;
    //
    char* char_array = new char[n+1];
    strcpy(char_array, s.c_str());
    //char_array[i]
    do{
        for(int i=0; i<n; i++){
        if(char_array[i]=='B'){
            if(char_array[i+1]=='G'){
                char_array[i]='G';
                char_array[i+1]='B';
            }
        }else if(char_array[i]=='G' && i==0){
            //La puta madre no se me ocurre nada
            //a veces deseo que la programacion sea un poco facil 
        }
    }
    t--;
    }while(t>0);
    
    return 0;
}