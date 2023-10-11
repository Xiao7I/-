#include<iostream>
using namespace std;

int sum_function(int a, int b)
{
	return a + b;
}

int main()
{
	int a, b;
	cin >> a >> b;
	int sum = sum_function(a, b);
	cout << sum << endl;
	cout << "hello" << endl;
	system("pause");
	return 0;
}