#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool func (int a, int b){
	return a > b;
}

int main(){
	int arrInt[6] = {1,3,5,6,3,2};
	int sizeOfArr = sizeof(arrInt) / sizeof(arrInt[0]);
	sort(arrInt, arrInt + sizeOfArr,func);
	for(int i =0; i< sizeOfArr; i++){
		cout<< arrInt[i] << endl;
	}
	return 0;
}
