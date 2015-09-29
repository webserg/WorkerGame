#include "main.h"
#include "Worker.h"
#include "HouseWife.h"
int main() {
	Worker* worker1 = new Worker(1);
	HouseWife* houseWife = new HouseWife(2);
	for (int i = 0; i < 30; ++i)
	{
		worker1->Update();
		houseWife->Update();
		Sleep(500);
	}
	keep_window_open();
}