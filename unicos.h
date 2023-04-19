//Remove valores repetidos em sequência
#include <iostream>
#include <list>
#include <vector>
using namespace std;
#ifndef REMOVE_REPETIDOS_UNICO_H
#define REMOVE_REPETIDOS_UNICO_H
void unicos(list<string> &l) {
    for (auto atual = l.begin(); atual !=l.end(); ) {
        auto proximo = atual;
        proximo++;
        
        while (proximo!=l.end() && *atual == *proximo) {
            proximo = l.erase(proximo);
        }

        atual = proximo;
    }

}
#endif //REMOVE_REPETIDOS_UNICO_H
