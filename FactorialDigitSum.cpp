#include <iostream>

using namespace std;

static unsigned long long factorial( unsigned long long n )
{
	unsigned long long temp = n;
	for( unsigned long long x = n-1; x > 0; --x )
	{
		temp *= x;
	}

	//cout << "factorial result: " << temp << endl;

	return temp;
}

static unsigned long long Rn( unsigned long long n )
{
	int digits = 0;
	unsigned long long operatingNum = n;

	operatingNum = factorial( operatingNum );

	cout << "Post-factorial operatingNum: " << operatingNum << endl;

	for( int x = 0; operatingNum > 0; x++ )
	{
		//cout << "operatingNum: " << operatingNum << endl << "mod result: " << operatingNum%10 << endl << endl;
		digits += operatingNum % 10;
		operatingNum /= 10;
	}

	return digits;
}

int main()
{
	unsigned long long n = 1;

	while( n != 8001 )
	{
		cout << "**********Iteration " << n << "**********" << endl;
		cout << "result: " << Rn( n ) << endl;

		if( n % 10 == 0 )
			cin.get();

		n++;
	}

	return 0;
}