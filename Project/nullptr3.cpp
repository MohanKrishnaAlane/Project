#include <cstddef>
#include <iostream>

template<class P >
void functionTemplate(P p) {
	int* a = p;
}

int main() {
	int* a = 0;
	int* b = NULL;
	int* c = nullptr;

	//functionTemplate(0);   //cannot conver from P to int*
	functionTemplate(NULL);  //cannot conver from P to int*
	functionTemplate(nullptr);
}