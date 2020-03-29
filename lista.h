#ifndef LISTA_H
#define LISTA_H
#include <iostream>
using namespace std;

struct PRODUTO{
    string nome = " ";
    string descricao = " ";
    float preco = NULL;
};

struct CARDAPIO{
    PRODUTO item[5];
};

struct Titem{
    PRODUTO item;
    Titem*proximo;
};

struct Tlista{
    Titem *inicio;
};

void inicializaListaec(Tlista &l){
    l.inicio=NULL;
}

void adicionaItensCarrinho(Tlista &l,CARDAPIO &cardapio,int pos){
    Titem *novo=new Titem;
    novo->item=cardapio.item[pos];
    novo->proximo=NULL;
    if(l.inicio==NULL){
        l.inicio=novo;

    }

    else{


       Titem *nav=l.inicio;
       while(nav->proximo!=NULL){
           nav=nav->proximo;
       }
       nav->proximo=novo;
    }


}

#endif // LISTA_H
