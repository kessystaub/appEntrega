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

    for(int i=0;i<5;i++){
        InsereFimEnc(carrinho,cardapio.item[i].dado);
    }

    ElementoEncadeado<PRODUTO>*nav=carrinho.inicio;

    int i=0;
    for(ElementoEncadeado<PRODUTO>*nav=carrinho.inicio;nav!=NULL;nav=nav->proximo){
        std::cout << "Item[" << i++ << "]: " << nav->dado.nome
                  << " - descricao: " << nav->dado.descricao
                  << " - preco: " << nav->dado.preco <<endl;
    }



    return 0;
}
