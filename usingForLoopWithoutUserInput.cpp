
#include <iostream>
using namespace std;

int main()
{
	char poop[] = { 'p', 'o', 'o', 'p'};

	int size = sizeof(poop);

	for (int i = 0; i < size; i++)
	{
		cout << poop[i];
	}
	cout << endl;
	system("pause");
	return 0;
}
