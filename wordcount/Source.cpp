#include <iostream>
using namespace std;
int countWords(char phrase[]);

int main()
{
	char myphrase[100];
	int count;
	cout << "enter phrase" << endl;
	cin.getline(myphrase, 100);
	count = countWords(myphrase);
	cout << "thats " << count << " words" << endl;

	system("pause");
	return 0;
}

int countWords(char phrase[])
{
	int i;
	bool inWord = false;
	int sumWords = 0;
	for (i = 0; i < strlen(phrase); i++)
	{
		if (phrase[i] != ' ')
			inWord = true;
		if (inWord == true && phrase[i] == ' ')
		{
			sumWords += 1;
			inWord = false;
		}
	}
	if (inWord == true)
		sumWords++;
	return sumWords;
}