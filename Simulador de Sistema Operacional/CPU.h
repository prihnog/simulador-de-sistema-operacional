#pragma once
#include <list> 
#include "Processo.h"

using namespace std;
class CPU
{
private:
	Processo **cores;
public:
	CPU(int tamanho) {
		cores = new Processo*[tamanho];
	}
};

