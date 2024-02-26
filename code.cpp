#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;
// RANDOM_HENTAI by Maciekhidegger 

int main() { 

	fstream file;

	int numerator=1;

	string *file_text;

	 file_text = new string [1000];
	string line, *indicator=file_text;



	//RANDOMIZE
	file.open("HENTAI_BASE.txt", ios::in);

	while(!file.eof()) {
	getline(file, line);
	*indicator=line;
		indicator++; numerator++;

	}

	file.close(); 

	srand(time(NULL));

	int random=rand()%numerator;

	for(int i=random; i>=1; i--) {
	indicator--; 
	}

	system("clear");
	cout << "HENTAI TODAY: " << *indicator << endl; getchar();

	delete [] file_text;

	return 0;
}
