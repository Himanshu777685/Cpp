#include <iostream>
using namespace std;

bool check( string s ){
  int n = s.length();
  if(n<=1){
    return true;
  }else{
    if(s.front() != s.back()){
      return false;
    }else{
      return check(s.substr(1,s.length()-2));
    }
  }




    

}

int main()
{
   string s = "hahahah";
   if(check(s)){
    cout<<"palindrome string"<<endl;
   }else{
    cout<<"not palindrome string"<<endl;
   }
// cout<<s+1;


    
}