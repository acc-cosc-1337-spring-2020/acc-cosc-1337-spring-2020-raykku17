#include "dna.h"
#include <iostream>
#include<vector>

using std::cout; 
using std::cin;
using namespace std;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string& dna)
{
	int count = 0;
	double gc = 0;
	double dnalength = dna.length();
	for (int i = 0; i < dna.length(); i++)
	{
		if (dna.at(i) == 'G')
		{
			count++;
		}
		else if (dna.at(i) == 'C')
		{
			count++;
		}
	}
	gc = count / dnalength;

	return gc;
}





/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(string dna)
{
	string rev;
	for (int i = dna.size() - 1; i >= 0; i--)
	{
		rev = rev.append(1, dna[i]);
	}
	return rev;


}




/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

string get_dna_complement(string dna)
{
	string A;
	string T;
	string G;
	string C;

	do
	{
		string dna;
		cout << "Enter dna sequence: ";
		cin >> dna;
		cout << (get_reverse_string(dna));

		cout << "complement is: ";
		cin >> A; T; C; G;
	} while ((string(A) == T)); (string(T) == A); (string(G) == C); (string(C) == G);

	return string();
}