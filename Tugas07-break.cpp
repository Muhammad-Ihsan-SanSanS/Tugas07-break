#include <iostream>
using namespace std;

int main () {
	
	for ( int M = 10; M <= 100; M++ ) {
		if ( M > 50 ) break;
		cout << "\n|" << M << "|"<< "\n====";
	}
	return 0;
}
