#pragma once
#include"HashNode.h"
#include<fstream>
const int TABLE_SIZE = 200000;
class HashMap
{
private:

	HashNode* htable[TABLE_SIZE];

public:
	HashMap();
	~HashMap();
	/*
	* Hash Function
	*/

	int HashFunc(string key);
	/***********************************************************/
	string To_lower(string s);
	int getMax(int arr[], int n);
	void radixsort(int arr[], int n);
	void countSort(int arr[], int n, int exp);
	void convertToString(char* arry, int arr[], int len);
	void convertToASCII(string letter, int arr[]);
	string SortWord(string w);
	void Insert(string key, string word);
	void search(string key, string word, ofstream&);
	void Display(string word);
	bool isWord(string s);
};
