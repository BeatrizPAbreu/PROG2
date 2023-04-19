#include <iostream>
#include <string>
#include <list>
#ifndef QUESTAO_H
#define QUESTAO_H
using namespace std;
list<string> separa(const string &texto, const string & sep) {
    list<string> sequencia;

    int pos1 = texto.find_first_not_of(sep);
    while (pos1 != string::npos) {
        int pos2 = texto.find(sep, pos1+1);

        if(pos2!=string::npos) {
            string trecho = texto .substr(pos1, pos2 - pos1);
            sequencia.push_back(trecho);
        }
        else {
            string trecho = texto.substr(pos1);
            sequencia.push_back(trecho);
            break;
        }
        pos1 = texto.find_first_not_of(sep,pos2+1);
    }
    return sequencia;
}
#endif
