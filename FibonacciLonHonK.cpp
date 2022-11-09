#include<iostream>
#include<algorithm>

using namespace std;

int main(int k){
	k=1000;
	int i = 2;
	int f0 = i-2;
	int f1 = i-1;
	int fn = f0 + f1;
	int result = 0;
	while(i>0){
		if(fn>k){
			result = fn;
			break;
		}
		f0 = f1;
		f1 = fn;
		fn = f0 + f1;
		i++;
	}
	cout<<result;
	return result;
}






