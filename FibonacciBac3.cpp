#include <iostream>
#include <map>
using namespace std;

std::map<int, long long> nhap;
int dem = 0;

long long fibonaci(long long n)
{

	dem++;
	//	--------? cach binh thuong
	long long k = n / 3;
	if (n < 0)
	{
		return -1;
	}
	if (n == 1 || n == 0 || n == 2)
	{
		return n;
	}
	if (nhap[(n)] == 0)
	{
		if (n % 3 == 0)
		{
			nhap[(n)] = fibonaci(2 * k);
		}
		else if (n % 3 == 1)
		{
			nhap[(n)] = fibonaci(2 * k) + fibonaci(2 * k + 1);
		}
		else
		{
			nhap[(n)] = fibonaci(2 * k) + fibonaci(2 * k + 1) + fibonaci(2 * k + 2);
		}
	}
	return nhap[(n)];
}


int main()
{
	long long n;
	cout << "Nhap n = ";
	cin >> n;
	cout << "f(" << n << ") = " << fibonaci(n);

}
