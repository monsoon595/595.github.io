#include <iostream> 
using namespace std;
int main() { 
 int a,b;
 cin>> a >> b ;
 if(b!=0){
 	cout<<"a/b="<<float(a)/float(b)<< endl; 
 }else{
 	 	cout<<"Divided by zero error" << endl;
 }
 
  return 0;
}

