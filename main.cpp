#include "main.h"
#include "Worker.h"
int main() {
	Worker* worker1 = new Worker(1);
	for (int i = 0; i < 30; ++i)
	{
		worker1->Update();
		Sleep(500);
	}
	keep_window_open();
}