#include <iostream>
#include<string>
#include <vector>
using namespace std ;

class Pilha{
    public:
    
    Pilha(int max_chars);
   
    void imprime();
    int push( string *novastr, int n);
    string pop();
    int qnt_chars();
    int qnt_max_chars();


    private:
    int max_chars; 
    vector<string> dados; 
};