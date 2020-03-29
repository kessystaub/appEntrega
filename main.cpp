#include <iostream>
#include "LISTA.h"

using namespace std;











void cardapioEstatico(CARDAPIO &cardapio){
    cardapio.item[0].nome = "Hamburguer de siri";
    cardapio.item[0].descricao = "Bob esponja calca quadrada";
    cardapio.item[0].preco = 500.00;
    cardapio.item[1].nome = "Hamburguer de carne";
    cardapio.item[1].descricao = "Carne e ervilhas";
    cardapio.item[1].preco = 1.50;
    cardapio.item[2].nome = "Hamburguer de salame";
    cardapio.item[2].descricao=".i.";
    cardapio.item[2].preco = 80.00;
    cardapio.item[3].nome = "Misto quente";
    cardapio.item[3].descricao = "torra na torrada";
    cardapio.item[3].preco = 5.00;
    cardapio.item[4].nome = "batatatAS";
    cardapio.item[4].descricao = "fritas";
    cardapio.item[4].preco = 20.00;
}




int main()
{

    Tlista carrinho;
    inicializaListaec(carrinho);

    CARDAPIO cardapio;
    cardapioEstatico(cardapio);
    for(int i=0;i<5;i++){
        cout<< cardapio.item[i].nome<<endl<<
               cardapio.item[i].preco<<endl<<
               cardapio.item[i].descricao<<endl;
    }

    adicionaItensCarrinho(carrinho,cardapio,2);
    adicionaItensCarrinho(carrinho,cardapio,3);

int i=0;

    for(Titem *nav=carrinho.inicio;nav!=NULL;nav=nav->proximo){
        cout<<"comprado........"<<nav->item.nome<<endl;

    }






    return 0;
}
