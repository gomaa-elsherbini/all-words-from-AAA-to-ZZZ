#include <iostream>
#include <string>
using namespace std;




char getLetter(int num)
{
	return char(num + 64);
}

void printInvertedPattern()
{
	for (int i = 1; i <= 26; i++)
	{
		cout << "==============\n";
		cout << getLetter(i);
		cout << "==============\n";

		for (int x = 1; x <= 26; x++)
		{
			cout << "==============\n";
			cout << getLetter(x);
			cout << "==============\n";

			for (int y = 1; y <= 26; y++)
			{
				cout << getLetter(i)<< getLetter(x)<< getLetter(y)<<endl;
			}
			
		}
		
	}
}

int main()
{
    printInvertedPattern();

    return 0;
}


/*
void printLetterPattern(int num)
{
	for (int i = 1; i <= num; i++)
	{
		for (int x = 1; x <= i; x++)
		{
			cout << getLetter(i);
		}
		cout << endl;
	}
}

int main()
{
	printLetterPattern(readNumber("Enter number?"));

	return 0;
}*/