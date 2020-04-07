// Simulador de Sistema Operacional.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include "Processo.h"
#include "Kernel.h"

using namespace std;
// Cria o processo de forma randomica, recebendo apenas o id
/*Processo criador_randomico_processos(int seq) {
    Processo *t = new Processo();
    return t;
}*/

int main()
{
    Kernel* k = new Kernel();
    int quantum = 5; // em segundos, dentro do escalonador ou kernel eu preciso ajustar o tempo
    int numero_cores = 3;
    int quantidade_processos = 1;
    int escalonador;
    cout << "Selecione o tipo de escalonador: "<< endl;
    cout << "1 -FIFO " << endl;
    cout << "1 -SJF " << endl;
    cout << "3 -RR " << endl;
    cin >> escalonador;
    // Criador de processos randomicos

    Processo *p = new Processo(1,2,"Ready");
    k->criadorDeProcessos(p);
    Processo **cores;
    cores = new Processo * [numero_cores];
    for (int i = 0; i < numero_cores; i++) {
        cores[i] = p;
    }
    cout << "Imprimindo Processo";
    for (int i = 0; i < numero_cores; i++) {
        cout << " ====================================== " << endl;
        cout << cores[i]->getId() << endl;
        cout << cores[i]->getEstado() << endl;
        cout << cores[i]->getTempoRestante() << endl;
        cout << cores[i]->getTempoTotal() << endl;

    }
    return 0;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
