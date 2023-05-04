#include<iostream>
#include<string>

using namespace std;

string conv_base(int num,int base){
  string res = "";
  while(num != 0){
    int rem = num % base;
    char digit;
    if(rem < 10){
        digit = rem + '0';
    }
    else{
        digit = rem - 10 + 'A';
    }
    res = digit + res;
    num /= base;
  }
  return res;
}


int main(){
 int t = 999999;
 while(t--){
 int num, b1, b2;
 cout<<"enter the no. \n";
 cin>>num;
 cout<<"enter b1"<<endl; //original base
 cin>>b1;
 cout<<"enter b2"<<endl; //base to be changed into
 cin>>b2;

 string result="";
 if(b1 != 10)
 {
     int temp = num;
     int power = 1;
     while(temp != 0){
        int digit = temp%10;
        int next_num = stoi(result);  //result string converted into an integer
        result = to_string(digit*power + next_num);
        temp /= 10;
        power *= b1;
     }

     num = stoi(result);
     result = "";

 }

 result = conv_base(num,b2);
 cout<<"converted"<<result<<endl;
 }
 return 0;
}
