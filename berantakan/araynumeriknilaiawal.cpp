#include <iostream>
using namespace std;

int main(){

	int i;
	int A[5] = {12,13,14,15,16};

	for (i=0; i<=5; i++){
		cout<< i << " = " << &A[i] << "==>" << A[i] << endl;
	}
}
