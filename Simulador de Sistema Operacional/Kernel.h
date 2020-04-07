#pragma once
#include <vector>
#include <list>
#include "Processo.h"
#include "Escalonador.h"
class Kernel
{
private:
	list <Processo> process_control_table;
	//Escalonador* escalonador;
public:
	Kernel() {
		
	}

	void run() {
		
		while (true) {
			Sleep(1000);
			//escalonador = new Escalonador(process_control_table);

		}
		
	
	}
	void criadorDeProcessos(Processo *p) {
		process_control_table.push_back(*p);

	}
	void kill_process() {

	}
	void setProcess_control_table(list<Processo> p) {
		process_control_table = p;
	}
	list<Processo> getProcess_control_table() {
		return process_control_table;
	}
};

