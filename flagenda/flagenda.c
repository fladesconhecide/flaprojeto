#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"flagenda.h"

#define MAX_CHAR 100

struct flacontato{
    char flanome[MAX_CHAR];
    int idade;
    int tel;
    char email[MAX_CHAR];
};

struct flagenda{
    char nome[MAX_CHAR];
    int cod;
    int num;
    flacontatos contato;
};

struct flano{
    flacontatos dado;
    no *prox;
};

struct lista{
    no * inicio;
};

void criar_inicio(flalista *lista, flacontatos dado){
    no * novo = (no*) malloc (sizeof(no));
    novo->dado = dado;
    novo->prox = lista->inicio;
    lista->inicio = novo;
}

void fladiciona(){
    
}