#include <iostream>
#include<fstream>
#include<string>
using namespace std;
void main()
{
	ifstream fin;
	ofstream fout;
	string string;
	int i, k;
	char incsmall;
	char incap;
	int if26 = 0;
	int flag_seen_one_char = 0;
	int ctpan = 0;
	fin.open("text.txt");
	fout.open("output.txt");


	while (getline(fin, string))
	{
		incap = 'A';
		incsmall = 'a';

		for (i = 0; i < 26; i++)
		{
			for (k = 0; k < string.length(); k++)
			{
				if ((incsmall == string[k] || incap == string[k]))
				{
					if26++;
					break;
				}
			}
			incap++;
			incsmall++;
		}
		if (if26 != 26)
		{
			cout << "not panagram" << endl;
			fout << "not panagram" << endl;
			if26 = 0;
		}
		else
		{

			cout << "panagram" << endl;
			fout << "panagram" << endl;
			if26 = 0;
		}
	}
}