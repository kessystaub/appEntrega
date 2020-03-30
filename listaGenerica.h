#ifndef LISTAGENERICA_H
#define LISTAGENERICA_H
#include <iostream>
using namespace std;

template<typename TIPO>
struct Titem{
    TIPO dado;
};

template<typename TIPO, int MAX>
struct ListaEstatica{

  Titem<TIPO> item[MAX];
  int qtd;
};

template <typename TIPO>
struct ElementoEncadeado{
    ElementoEncadeado<TIPO> *proximo;
    TIPO dado;

};



template <typename TIPO>
struct ListaDuplaEnc{
    ListaDuplaEnc *anterior;
    TIPO dado;
    ListaDuplaEnc *proximo;

};

template<typename TIPO>
struct ListaEncadeada{
    ElementoEncadeado<TIPO> *inicio;
};

template<typename TIPO,int MAX>
void Insere_P_Estatica(ListaEstatica<TIPO,MAX> &L, TIPO dado, int pos){
    L.item[pos].dado=dado;
    L.qtd++;
}


template<typename TIPO>
void InsereFimEnc(ListaEncadeada<TIPO>&L,TIPO dado){
   ElementoEncadeado<TIPO>*novo=new ElementoEncadeado<TIPO>;
   novo->dado=dado;
   if(L.inicio == NULL){
       novo->proximo=NULL;
       L.inicio=novo;
   }else{
       ElementoEncadeado<TIPO>*nav=L.inicio;
       while(nav->proximo!=NULL){
           nav=nav->proximo;
       }
       nav->proximo=novo;
       novo->proximo=NULL;
   }
}


template<typename TIPO>
void inicializaListaEnc(ListaEncadeada<TIPO>&l){
    l.inicio=NULL;
}










/*template <typename TIPO>
void PedidoEfetuado (ListaDuplaEnc<TIPO>&L,){
   TIPO *novo=new TIPO;
}
*/









#endif // LISTAGENERICA_H
