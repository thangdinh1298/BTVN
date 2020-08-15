#include <iostream>
using namespace std;

template <class Number>
Number factorial(int n) {
	if (n == 1 || n == 0) {
		return static_cast<Number>(1);
	}
	return factorial<Number>(n - 1) * static_cast<Number>(n);
}

int main() {
	while(true){
		int n; cin >> n;
		if (n < 0) {
			cout << "Undefined\n";
		}
		else if (n <= 14) {
			cout << factorial<unsigned long long>(n) << endl;
		}
		else {
			cout << factorial<long double>(n) << endl;
		}	
	}
}


