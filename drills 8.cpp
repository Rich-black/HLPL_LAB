#include "std_lib_facilities.h"  
//Write three function where d1 and d2 are the names of the arguments.
     void swap_v(int d1, int d2)  
 {  
 int temp = d1;  
 d1 = d2;  
 d2 = temp;  
 }  
   //this part is executable ,bec int type of variable  
   void swap_r(int& d1, int& d2)  
 {  
 int temp = d1;  
 d1 = d2;  
 d2 = temp;  
 }  
   void swap_c(int& d1, int& d2)  
 {  
 int temp = d1;  
 d1 = d2;  
 d2 = temp;  
 }  
   //this part is const valude, so we can not change the value of the variable where is bounded by const  
     int main()  
 {  
 int x = 7;  
 int y = 9;  
 swap_v(x, y);  
 swap_v(7, 9);  
   /*its excutable*/  
     double dx = 7.7;  
 double dy = 9.9;  
 swap_r(dx, dy);  
   ///*its not excutable, a reference of type 'int&' cannot initialized with a value of type double.  
   const int cx = 7;  
 const int cy = 9;  
 swap_c(cx, cy);  
   //qualifiers dropped in binding reference of type "int& to initializer of type "const int",  
 //and binded by const value cannot change the value,its already bounded  
   cout << " x= " << x << " y= " << y << endl;  
 swap(x, y);  
   cout << "x=" << dx << " y=" << dy << endl;  
 swap(x, y);  
   cout << "x=" << cx << " y=" << cy << endl;  
 swap(x, y);  
     return 0;  
   } 
