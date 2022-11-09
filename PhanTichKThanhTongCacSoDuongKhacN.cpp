#include<iostream>
#include<algorithm>

using namespace std;
void tinhtoanketqua(long long B[], int num);
void sinhToHop();
 
const int size = 128;
 
long long A[size];
int n;
int k = 2;
 
int result = 0;
 
 void sinhToHop()
{
    long long subA[size] = {1};
    for (int i=1;i<k;i++){
    	    subA[i]=i;
	}
    while (true)
    {	
        tinhtoanketqua(subA,k);
        int j;
        for (j=k-1;subA[j]==n-k+j && j>=0;j--);
        if (j>=0)
            subA[j]++;
        else return;
        for (int jj=j+1;jj<k;jj++)
            subA[jj]=subA[jj-1]+1;
    }
}
 
void tinhtoanketqua(long long B[], int num)
{
	sort(B,B+num);
	bool check = true;
	for(int i =0; i<num-1;i++){
		if(B[i]==B[i+1]){
			check=false;
		}
	}
	if(check==true){
		int count = 0;
    	for (int i=0;i<num;i++){
    		count = count + B[i];
		}
		if(count == n){
//			for (int i=0;i<num;i++){
//    			cout<<B[i] << " ";
//			}
//		cout<<endl;
		result++;
		}
	}
	
}
 
 
int main()
{
	cout<<"Nhap k = ";
    cin>>n;
    if(n>2){
    	for (int i=1;i<n;i++){
    		A[i]=i;
		}
		for(int i=2; i<n; i++){
			k=i;
			sinhToHop();
		}
	}
    cout<<"Co tat ca "<<result<<" cach phan tich.";
    return 0;
}
