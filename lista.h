#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include <ListaGenerica.h>

using namespace std;

struct PRODUTO{
    string nome = " ";
    string descricao = " ";
    float preco = NULL;
};



struct Fitem{
    PRODUTO item;
    Fitem*proximo;
};

struct Flista{
    Fitem *inicio;
};


//void inicializaLista(Flista &l){
//    l.inicio=NULL;
//}







/*void adicionaItensCarrinho(Flista &l,CARDAPIO &cardapio,int pos){
    Fitem *novo=new Fitem;
    novo->item=cardapio.item[pos];
    novo->proximo=NULL;
    if(l.inicio==NULL){
        l.inicio=novo;
    }
    else{
       Fitem *nav=l.inicio;
       while(nav->proximo!=NULL){
           nav=nav->proximo;
       }
       nav->proximo=novo;
    }
}*/




























#endif // LISTA_H
