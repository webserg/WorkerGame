#include "main.h"
#include "Worker.h"
int main() {
	Worker* worker1 = new Worker(1);
	worker1->Update();
	keep_window_open();
}