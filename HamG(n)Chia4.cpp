#include <iostream>
#include <map>
using namespace std;

std::map<int, long long> nhapbai5;

long long fibo_g(long long N)
{
	long long chia2 = N / 2;
    long long chia4 = N / 4;
	if (N< 0)
	{
		return -1;
	}
	if (N == 1 || N == 3)
	{
		return N;
	}
	if (nhapbai5[(N)] == 0)
	{
		if (N % 2 == 0)
		{
			nhapbai5[(N)] = fibo_g(chia2);
		}
		else if (N % 4 == 1)
		{
			nhapbai5[(N)] = 2 * fibo_g(2 * chia4 + 1) - fibo_g(chia4);
		}
		else if (N % 4 == 3)
		{
			nhapbai5[(N)] = 3 * fibo_g(2 * chia4 + 1) - 2 * fibo_g(chia4);
		}
	}
	return nhapbai5[(N)];
}

int main()
{
	long long N;
	cout << "Nhap n = ";
	cin >> N;
	cout << "g(" << N << ") = " << fibo_g(N);
	
}
