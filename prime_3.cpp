#include<iostream>
#include<math.h>
using namespace std;


bool isPrime(int n){
  if(n<=1){
    return false;
  }

  for(int i=2; i<= sqrt(n); i++){
    if(n%i == 0){
        return false;
    }
  }

  return true;
}

int nthPrime(int n){
   int count = 0;
   int num = 0;

   while(count<n){
    if (isPrime(num)){
        count ++;
    }

    if(count == n){
        break;
    }

    num++;
   }

   return num;
}

int main(){
 int t = 999999;
 while(t--){
    int n;
    cout<<"Enter a no \n";
    cin>>n;

    cout<<"nth + 1 prime no: "<< nthPrime(n+1)<<endl;
 }

 return 0;
}
