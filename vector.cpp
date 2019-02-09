#include <iostream>
#include <vector> 
using namespace std;

int main ()

{
	vector<int> myvector; //declaing a vector holding integers
	int myint;

	cout << "Please enter some integers (enter 0 to end).\n";

	do {
		cin >> myint;
		myvector.push_back (myint);
	} while (myint);

	//displaying the size of the vector using the size() function
	cout << "myvector stores " << myvector.size() << " numbers.\n";

	for (int x = 0; x < myvector.size(); x++)
	{
		cout << myvector[x] << end1; //accessing elements in the vector
	}
	
	for (int x = o; x < myvector.size(); x++)
	{
		myvector.pop_back(); //removes values from the back of the vector
	}

	return 0;
}
