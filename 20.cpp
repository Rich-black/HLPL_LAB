// Chapter 20, 

#include "std_lib_facilities.h"

template<typename T>
void print(const T& t, const string& s = " ")
{
	cout << s << "\t";
	for (auto& i : t)
	{
		cout << i << ' ';
	}
	cout << endl;
}

template <typename C>
void inc(C& c, int n) {
	for (auto& i : c)
	{
		i += n;
	}
}

template<typename Iter1, typename Iter2>
Iter2 my_copy(Iter1 f1, Iter1 e1, Iter2 f2) {
	for (Iter1 p = f1; p != e1; ++p)
	{
		*f2++ = *p;
	}
	return f2;
}

int main() {

	constexpr int size = 10;
 //   Define an array of ints with the ten elements 
	int numbers[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	array<int, size> ai;
	copy(numbers, numbers + size, ai.begin());
	print(ai, "array:");
// Define a vector<int> with those ten elements.
	vector<int> vi(size);
	copy(numbers, numbers + size, vi.begin());
	print(vi, "vector:");
//Define a list<int> with those ten elements.
	list<int> li(size);
	copy(numbers, numbers + size, li.begin());
	print(li, "list:");
	cout << endl;
//Define a second array, vector, and list, each initialized as a copy of the first array, vector, and list, respectively.
	array<int, size> ai2 = ai;
	print(ai2, "Copy of array:");
	vector<int> vi2 = vi;
	print(vi2, "Copy of vector:");
	list<int> li2 = li;
	print(li2, "Copy of list:");
	cout << endl;
//Increase the value of each element in the array by 2; in the victor by 3,in the list by 5
	inc(ai2, 2);
	inc(vi2, 3);
	inc(li2, 5);
	print(ai2, "increased by 2:");
	print(vi2, "increased by 3:");
	print(li2, "increased by 5:");
	cout << endl;
// Write a simple copy operation,
	my_copy(ai2.begin(), ai2.end(), vi2.begin());
	my_copy(li2.begin(), li2.end(), ai2.begin());
	my_copy(vi2.begin(), vi2.end(), li2.begin());
	print(ai2, "copied array: ");
	print(vi2, "copied vector: ");
	print(li2, "copied list: ");
	cout << endl;
//Use the standard library find to see if the vector contains the value 3 
	vector<int>::iterator vit;
	vit = find(vi2.begin(), vi2.end(), 3);
    
	if (vit != vi2.end())
	{
		cout << "Found at: " << distance(vi2.begin(), vit) << endl;
	}
	else {
		cout << "Not found" << endl;
	}

	list<int>::iterator lit;
	lit = find(li2.begin(), li2.end(), 27);
	if (lit != li2.end())
	{
		cout << "Found at: " << distance(li2.begin(), lit) << endl;
	}
	else {
		cout << "Not found" << endl;
	}
}
