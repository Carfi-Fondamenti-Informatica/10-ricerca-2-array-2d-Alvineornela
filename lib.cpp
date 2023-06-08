
#include <iostream>
#include "lib.h"
using namespace std;

void init(char mat[], int n){
    for(int i = 0; i < n; i++){
        mat[i]=' ';
    }
}

void init(char mat[5][15]){
    for(int i = 0; i < 5; i++){
        init(mat[i],15);
    }
}

void inserimento(char nomi[5][15], char cognomi[5][15]){
    for(int i = 0; i < 5; i++){
        inserimento(nomi[i],15);
        inserimento(cognomi[i],15);
    }
}

void inserimento(char nome[], int n){
    char cpynome[n];
    init(cpynome,n);
    cin>>cpynome;
    for(int i = 0; i < n; i++){
        nome[i] = cpynome[i];
    }
}

int ricerca(char nomi[5][15], char cognomi[5][15], char nome[15], char cognome[15]){
 int i = -1;

    for(int j = 0; j<5; j++){
        for(int k = 0; k<25; k++){
            if(nomi[j][k] == nome[k]){
                if(cognomi[j][k] == cognome[k]) {
                    i++;
                }
            }
        }

    }
    return i;
}
