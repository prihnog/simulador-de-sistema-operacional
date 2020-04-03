#pragma once
#include <vector>
#include "Processo.h"
class Kernel
{
private:
	vector <Processo> process_control_table;
public:

	void run() {

	}
	void criadorDeProcessos(int id, int tempoT, int tempoR) {
		Processo* p = new Processo(id, tempoT, tempoR,"Pronto");
		process_control_table.push_back(*p);

	}
	void kill_process() {

	}
	void setProcess_control_table(vector<Processo> p) {
		process_control_table = p;
	}
	vector<Processo> getProcess_control_table() {
		return process_control_table;
	}
};

