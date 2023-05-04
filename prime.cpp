#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n){
  if(n <= 1){
    return false;
  }

  for(int i=2; i <= sqrt(n); i++){ // since a number that has factors greater than its square root would also have factors less than square root
    if(n%i==0){
        return false;
    }
  }

  return true;
}

int main(){
 int t = 9999999;
 while(t--){
 int n;
 cout<<"enter a number \n";
 cin>>n;

 if(isPrime(n)){
    cout<<"Prime \n";
 }

 else{
    cout<<"Not a Prime \n";
 }
 }
 return 0;
}
