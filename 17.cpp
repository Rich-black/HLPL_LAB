#include "std_lib_facilities.h"
//1,4 This drill has two parts,The first builds your understanding of arrays and contrasts arrays with vectors:
void print_array10(ostream& os, int* a)
{
    for(int i = 0; i < 10; ++i)
        os<< a[i]<<" ";
    cout<<endl;
}
//1, 7Write a function print_array10(ostream& os, int* a) that prints out the 
void print_array(ostream& os, int* a, int n)
{
    for(int i = 0; i < n; ++i)
        os<< a[i]<<" ";
    cout<<endl;
}
//1,10
void print_vector(ostream& os, vector<int> v)
{
    for(int i = 0; i < v.size(); ++i)
        os<< v[i]<<" ";
    cout<<endl;
}


int main() {
    //1,1Allocate an array of ten ints on the free store using new.
 
    int* a1 =new int [10] {1,2,3,4,5,6,7,8,9,10};
    //1,2 Print the values of the ten ints to cout.
    for(int i=0;i<10; ++i)
        cout << a1[i]<<" ";
    cout<<endl;
    //1,3
    delete [] a1;
    //1,5
    int* a5 = new int[10];
    for(int i=0;i<10;++i)
        a5[i] = 100+i;
    print_array10 (cout, a5);
    delete [] a5;
    //1,6 Allocate an array of ten ints on the free store; initialize it with the values 
100, 101, 102, etc.; and print out its values.
    int* a6 = new int[11];
    for(int i=0;i<11;++i)
    {
        a6[i] = 100+i;
        cout<<a6[i]<<" ";
    }
    cout<<endl;
    delete [] a6;
    //1,8 Allocate an array of 20 ints on the free store; initialize it with the values 
100, 101, 102, etc.; and print out its values.
    int* a8 = new int[20];
    for(int i=0;i<20;++i)
        a8[i] = 100+i;
    print_array (cout, a8, 20);
    delete [] a8;
    //10 (vector 5,6,8)Do 5, 6, and 8 using a vector instead of an array and a print_vector()
    vector<int> v5;
    for(int i=0;i<10;++i)
        v5.push_back(100+i);
    print_vector(cout,v5);
    v5.clear();
    
    vector<int> v6;
    for(int i=0;i<11;++i)
        v6.push_back(100+i);
    print_vector(cout,v6);
    v6.clear();
    
    vector<int> v8;
    for(int i=0;i<20;++i)
        v8.push_back(100+i);
    print_vector(cout,v8);
    v8.clear();
//-------------second part-----------
    cout<<"-------------second part-----------"<<endl;
//2,1 Allocate an int, initialize it to 7, and assign its address to a variable p1.
    int b1 = 7;
    int* p1 = &b1;
//2,2Print out the value of p1 and of the int it points to.
    cout<<"*p1: "<<*p1<<endl;
    cout<<"p1: "<<p1<<endl;
//2,3 Allocate an array of seven ints; initialize it to 1, 2, 4, 8, etc.; 
    int* p2 = new int[7];
    for(int i = 0; i < 7; ++i)
        p2[i] = pow(2, i);
    delete [] p2;
//2,4Print out the value of p2 and of the array it points to.
    cout<<"p2: "<<p2<<endl;
    print_array(cout, p2, 7);
//2,5Declare an int* called p3 and initialize it with p2.
    int* p3 = p2;
//2,6 Assign p1 to p2.

    p2 = p1;
//2,7  Assign p3 to p2
    p2 = p3;
//2,8 Print out the values of p1 and p2 and of what they point to.
    cout<<"value of p1 and p2: ";
    cout<<p1<<" ";
    cout<<p2<<endl;
    cout<<"p1 and p2 point to ";
    cout<<*p1<<" ";
    cout<<*p2<<endl;
//2,9
   /*
    only delect[] p2
    because p1 and p3 are not allocated by the new
   */
//2,10
    p1 = new int[10];
    for(int i = 0; i < 10; ++i)
        p1[i] = pow(2, i);
//2,11
    p2 = new int[10];
//2,12
    p2 = p1;
    delete [] p1;
    cout<<*p2<<endl;
//2,13(10-12)
    vector<int> vb1;
    for(int i = 0; i < 10; ++i)
        vb1.push_back(pow(2, i));
    vector<int> vb2;
    vb2 = vb1;
    print_vector(cout, vb2);
    return 0;
    
}
