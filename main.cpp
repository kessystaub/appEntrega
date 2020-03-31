#include <iostream>
#include "LISTA.h"
#include <ListaGenerica.h>
#include <CardapioEstatico.h>
using namespace std;


int main()
{
    ListaEstatica<PRODUTO,5>cardapio;
    CardapioEstatico(cardapio);

    ListaEncadeada<PRODUTO>carrinho;
    inicializaListaEnc(carrinho);

    /*for(int i=0;i<5;i++){
        InsereFimEnc(carrinho,cardapio.item[i].dado);
    }*/

    InsereFimEnc(carrinho,cardapio.item[2].dado);
    InsereFimEnc(carrinho,cardapio.item[4].dado);


    ElementoEncadeado<PRODUTO>*nav=carrinho.inicio;

    int i=0,contadorPreco=0;
    for(ElementoEncadeado<PRODUTO>*nav=carrinho.inicio;nav!=NULL;nav=nav->proximo){
        std::cout << "Item[" << i++ << "]: " << nav->dado.nome
                  << " - descricao: " << nav->dado.descricao
                  << " - preco: " << nav->dado.preco <<endl;

    }



    ListaDuplaEnc<PRODUTO>pedido;
    inicializaListaDuplaEnc(pedido);


    while(nav!=NULL){
           InsereDuplaEnc(pedido,nav->dado);
           nav=nav->proximo;
    }


    int j=0;
    ElementoDuplaEnc<PRODUTO>*nav2=pedido.inicio;
    for(ElementoDuplaEnc<PRODUTO>*nav2=pedido.inicio;nav2!=NULL;nav2=nav2->proximo){
        std::cout << "Item[" << j++ << "]: " << nav2->dado.nome
                  << " - descricao: " <<nav2->dado.descricao
                  << " - preco: " <<nav2->dado.preco<< endl;
                  contadorPreco+=nav2->dado.preco;
    }

    cout<< "preco total a pagar: R$"<<contadorPreco<<" reais"<<endl;








    return 0;
}
