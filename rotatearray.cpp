#include <iostream>
using namespace std;

int main() {
	long n, d;
	cin >> n >> d;
	long *a = new long[n]();
	for (int i = 0; i < n; i++)
		cin >> a[(i+n-d)%n];
 
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	
	return 0; 
}
