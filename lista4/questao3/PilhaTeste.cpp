#include <iostream>
#include <string>
#include<vector>
#include "Pilha.hpp"

using namespace std;

int main(){
    int max;
    string dado;
    cout<<"insira numero maximo de caracteres:";
    cin>>  max;

    Pilha pilha(max);
    
    cout<< "Insira uma nova string:\n";
    cin>> dado;
    pilha.push(&dado, max);

    pilha.imprime();
    cout<< "Insira uma nova string:\n";
    cin>> dado;
    pilha.push(&dado, max);
    
    pilha.imprime();
    pilha.pop();
    pilha.imprime();


}