// #include <string>
// using namespace std;

// string greet(){
//   return "hello world!";
// }
// int main(){
// string greet();

// }
#include <string>
#include <iostream>
using namespace std;

string boolean_to_string(bool b){
  //Your code here
  if (b==1){
    cout<< "true"
  }
  else if(b==0){
    cout<<"false";
  }
  else{
    cout<<"Invalid entry";
  }
}
int main(){
	boolean_to_string(1);
}
