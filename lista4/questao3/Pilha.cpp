#include <iostream>
#include<string>
#include <vector>
#include "Pilha.hpp"
int n; 

Pilha:: Pilha(int max_chars){
    this -> max_chars = n;
    this -> dados = dados; 
}
void Pilha:: imprime(){
    for(int x = 0; x < dados.size(); x++ ){
        cout << "\n"<< dados[x] << endl;
    }
}

string Pilha::pop(){
    dados.pop_back();
    return(dados.back());
}

/*int Pilha:: qnt_max_chars(){
   int n;
   n = this-> max_chars;
    return n;
}*/

int Pilha::push(string *a, int n){
    if(a->size() > n){
        cout << "Quantidade de caracteres esgotados, o limite é "<< n << " caracteres.\n"<< endl;
        return 0;
    }
        dados.push_back(*a);
        return 1;
    
}