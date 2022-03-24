#include<iostream>

using namespace std;

int main(){

    system("cls");
    int lim, count;

    cout<<"Ingrese numero limite a mostrar: "<<endl;
    cin>>lim;
    
    for(int i = 1; i <= lim; i++){
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                count++;
            } 
        }
        if(count == 2){
            cout<<i<<", ";
        }
        count = 0;       
    }
    
}