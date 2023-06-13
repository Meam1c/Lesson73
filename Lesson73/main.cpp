#include "main.h"

int main() {
	string file_name = "text.txt";
	string s = "dima_pedro";

	ofstream fout;

	fout.open(file_name);

	if (fout.is_open()) {
		fout << s;


		fout.close();
	}


	ifstream fin;

	fin.open(file_name);

	if (fin.is_open()) {
		string buf;
		fin >> buf;

		cout << buf << endl;

		fin.close();
	}

	return 0;
}