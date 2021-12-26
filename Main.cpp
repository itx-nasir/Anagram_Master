
#include"HashMap.h"
void FileReading()
{
	HashMap H;

	string word, sortedword;
	ifstream Read;
	Read.open("words.txt");
	if (!Read) {
		cout << "Unable to open file input.txt";
		exit(1);
	}
	cout << "Reading Word.txt...";
	while (!Read.eof()) {
		Read >> word;
		sortedword = H.SortWord(word);
		H.Insert(sortedword, word);

	}
	cout << "Done" << endl;

	Read.close();

	ofstream Write;
	Write.open("output.txt");
	if (!Write) {
		cerr << "Unable to open file output.txt";
		exit(1);
	}


	string Word;
	Read.open("input.txt");
	if (!Read) {
		cerr << "Unable to open file input.txt";
		exit(1);
	}

	while (!Read.eof()) {
		getline(Read, Word);
		sortedword = H.SortWord(Word);
		Write << endl << Word << ": ";
		cout << endl;
		H.search(sortedword, Word, Write);
		Write << endl;
	}
	Write.close();



}
int main() {

	FileReading();
	return 0;
}