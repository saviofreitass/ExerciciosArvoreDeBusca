//Bibliotecas necess�rias
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinariaBusca.h"

using namespace std;


//Fun��o principal para demonstrar o uso da �rvore Bin�ria de Busca
int main() {

    int x; //Vari�vel utilizada para receber o valor digitado do usu�rio e colocar na �rvore Bin�ria de Busca
    int opcao; //vari�vel utilizada no Menu para testar a �rvore
    int modo; //vari�vel utilizada na escolha do percurso na �rvore

    ArvoreBinariaBusca_Construtor();  //para iniciar a �rvore



    do {  //menu com op��es para testar a implementa��o da �rvore


        system("cls");

        cout << "Programa para uso da Arvore Binaria de Busca\n\n";
        cout << "Escolha uma das opcoes a seguir:";
        cout << "\n\n\nMenu: \n";
        cout << "\n1 - Inserir";
        cout << "\n2 - Pesquisar";
        cout << "\n3 - Numero de elementos na arvore";
        cout << "\n4 - Vazia";
        cout << "\n5 - Percurso";
        cout << "\n6 - Imprimir por nivel";
        cout << "\n7 - Sair\n";
        cout << "\nOpcao: ";
        cin >> opcao;

        system("cls");

        switch (opcao) {

            case 1:
                cout << "\n\nDigite o dado: ";
                setbuf(stdin, NULL);
                cin >> x;

                if (ArvoreBinariaBusca_Inserir(x))
                    cout << "Elemento inserido\n\n";
                else cout << "Erro ao inserir elemento.\n\n";

                system("pause");
                break;


            case 2:
                cout << "\nDigite o elemento para pesquisa: ";
                setbuf(stdin, NULL);
                cin >> x;

                if (ArvoreBinariaBusca_Pesquisar(x))
                    cout << "Elemento encontrado.\n\n";
                else cout << "Elemento nao encontrado.\n\n";

                system("pause");
                break;

            case 3:
                cout << "\n\nNumero de elementos na arvore: " << ArvoreBinariaBusca_Tamanho() << "\n\n";
                system("pause");
                break;

            case 4:
                if (ArvoreBinariaBusca_Vazia())
                    cout << "Arvore vazia.\n\n";
                else cout << "A arvore nao esta vazia.\n\n";

                system("pause");
                break;

            case 5:
                cout << "\n\n\nMenu: \n";
                cout << "\n1 - Pre-ordem";
                cout << "\n2 - Em-ordem";
                cout << "\n3 - Pos-ordem\n";
                cout << "\nOpcao: ";
                cin >> modo;
                ArvoreBinariaBusca_Percurso(modo);
                break;

            case 6:
                int nivel;
                cout << "Qual nivel deseja buscar? ";
                cin >> nivel;
                ArvoreBinariaBusca_Imprimir_Por_Nivel(nivel);
                cout << "\n\n";
                system("pause");
                break;

            case 7:
                ArvoreBinariaBusca_Destrutor();
                break;

            default:
                cout << "\n\nOpcao invalida\n\n";
                system("pause");
        }
    } while (opcao != 7);


    return 0;
}
