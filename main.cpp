#include <iostream>


using namespace std;	

int main() {
    int x;
	int y;
	cout << "Enter x number: ";
    cin >> x;
	cout << "Enter y number: ";
	cin >> y; 
    int result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    cout << x << " to the power " << y << " is " << result << endl;
    return 0;
    

    return 0;
}


