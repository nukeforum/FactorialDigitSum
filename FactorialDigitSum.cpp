#include <iostream>
using namespace std;

static unsigned long long factorial( unsigned long long n ) {
	unsigned long long temp = n;
	for( unsigned long long x = n-1; x > 0; --x ){ temp *= x; }
	return temp;
}

static unsigned long long Rn( unsigned long long n ) {
	int digits = 0;
	unsigned long long operatingNum = factorial( n );
	for( int x = 0; operatingNum > 0; x++ )	{
		digits += operatingNum % 10;
		operatingNum /= 10;
	}
	return digits;
}

int main() {
	for( unsigned long long n = 1; n != 0; n++ )	{
		cout << "**********Iteration " << n << "**********" << endl << "result: " << Rn( n ) << endl;
	}
	return 0;
}