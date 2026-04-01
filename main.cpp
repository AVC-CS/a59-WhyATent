
#include <iostream>
using namespace std;

int main()
{
	int prev, current;
	int flag = 1;
	cout << "Insert current value\n";
	cin >> current;
	while ((flag == 1) or (prev > current)){
		flag = 0;
		cout << current << " " << endl;
		prev = current;
		cout << "Next input: \n";
		cin >> current;
	}
	cout << "Input larger than previous value, program stopped." << endl;
}
