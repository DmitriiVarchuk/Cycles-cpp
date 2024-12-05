#include <iostream>


using namespace std;	

int main() {
    int sum=0;
	for (int i = 0; i <= 1000; i++) {
		sum += i;	

	}

	cout << "The sum of the numbers from 0 to 1000 is: " << sum / 1000 << endl;

 
    return 0;
}


