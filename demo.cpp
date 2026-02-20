#include <iostream>
using namespace std;

int main() {
    cout << "Hello, world!" << endl;
    return 0;
}
//sum of 2 nos
#include <iostream>
using namespace std;
int main(){
  int a,b;
  cout<<"Enter a:";
  cin>>a;
  cout<<"Enter b:";
  cin>>b;
  int sum=a+b;
  cout<<"sum="<<(a+b)<<endl;

return 0;
}

//vote or not
#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter ur age:";
    cin>>age;

    if(age>=18){
        cout<<"yes u can vote\n";

    }else{
        cout<<"u cant vote\n";
    }
return 0;
}
//even or odd
#include <iostream>
using namespace std;
int main(){
 int n;
    cout<<"enter any number n:";
    cin>> n;
    if (n%2==0){
        cout<<"Number is even\n";
    }
    else{
        cout<<"Number is odd\n";
    }
    return 0;
}
//print 1 to 5 using while loop
#include <iostream>
using namespace std;
int main(){
   int count=1;
   while(count<=5){
    cout<<count<<" ";
    count++;
   }
   cout<<endl;
return 0;
}
//for loop
 //for(int i=1; i<=6;i++){
  // cout<<i;
  
 // cout<<endl;
 //odd numbers sum 1 to n
 #include <iostream>
using namespace std;
int main(){
  int n=50;int oddSum=0;
  for(int i=1;i<=n;i++){
   if(i%2 !=0){
     oddSum +=i;
   }
  }
  cout<<"oddSum="<<oddSum<<endl;
return 0;
}
// prime or not prime
#include <iostream>
using namespace std;
int main(){
  int n=9 ;

  bool isPrime =true;
  for(int i=2;i<=n-1;i++){
   if (n%i==0)//non prime
  { isPrime=false;
   break;
  }
}
if (isPrime ==true){
   cout<<"prime no\n";
}else{
   cout<<"non prime no\n";
}
//isPrime -> true -> prime
//isPrime -> false ->non prime
return 0;
}
// n=lines m=stars
#include <iostream>
using namespace std;
int main(){
   int n=5; 
   for (int i=1; i<=5; i++){// line
    int m=10;
   for (int i=1; i<=m;i++){
   cout<<"*";
  }
 cout<<endl;
}
return 0;
}//n lines and m stars
//star pattern
#include <iostream>
using namespace std;
int main(){
   int n=4;
    for (int i=0; i<n;i++){
      for (int j=0;j<i+1;j++){
         cout<<"*";

      }cout<< endl;
    }
return 0;
}
//reverzse traingle pattern 
#include <iostream>
using namespace std;
int main(){
   int n=4;
    for(int i=0;i<n;i++){//outer loop
     for(int j=i+1;j>0;j--){
          cout<< j<<" ";
     } 
      
         cout<<endl;

      
    }
return 0;
}
//floyd's triangle
#include <iostream>
using namespace std;
int main(){
   int n=4;
   int num=1;

    for(int i=0;i<n;i++){//outer loop
     for(int j=i+1;j>0;j--){
          cout<< num<<" ";
          num++;
     } 
         cout<<endl;
    }
return 0;
}
//pyramid
#include <iostream>
using namespace std;
int main(){
   int n=4;
   int num=1;

    for(int i=0;i<n;i++){//outer loop
     for(int j=i+1;j>0;j--){
          cout<< num<<" ";
          num++;
     } 
         cout<<endl;
    }
return 0;
}
//hollow daimond
#include <iostream>
using namespace std;
int main(){
   int n=4;
  //top
  for(int i=0;i<n;i++){
     //spaces
     for(int j=0;j<n-i-1;j++){
     cout<<"  ";
     }
     cout<<"*";
     
     if(i !=0){
          //spaces
          for(int j=0;j<2*i-1;j++){
               cout<<" ";
          }
          cout<<"*";
     }
     cout<<endl;
  }
  //bottam
  for (int i=0;i<n-1;i++){
     //spaces
     for(int j=0;j<i+1;j++){
          cout<<" ";

     }
     cout<<"*";
     if(i != n-2){
          //spaces
          for(int j=0; j<2*(n-i)-5;j++){
               cout<<" ";

          }      
              cout<<"*";
     }
     cout<<endl;
  }

return 0;
}
//functions
#include <iostream>
using namespace std;
//function definition
void printHello(){
     cout<<"hello\n";
}
int main(){//function call/invoke
 printHello();
return 0;
}
//basics of functions
#include <iostream>
using namespace std;
//sum of 2 num
int sum(int a,int b){
     int s=a+b;
     return s;
}
//min of 2 num
int minOfTwo(int a,int b ){//parameters
     if(a< b ){
          return a;
     }else{
          return b;
     }
}
int main(){//function call/invoke
  cout<<"min="<<minOfTwo(5,3)<<endl;//arguments
return 0;
}
//sum of 1 to n
#include <iostream>
using namespace std;
int sumN(int n){//function define
     int sum=0;
     for(int i=0;i<=n;i++){
          sum +=i;
     }
     return sum;
} 
int main(){//fnctojn call
     cout<<sumN(5)<<endl;
     cout<<sumN(10)<<endl;

return 0;

}
//sum fo digits of a number
#include <iostream>
using namespace std;
int sumOfDigits(int num){
     int digSum=0;
     while(num>0){
     int lastDig =num%10;
     num=num/10;
     digSum +=lastDig;
}
return digSum;
}
int main(){
   cout<<"sum= "<<sumOfDigits(2356)<<endl;
return 0;
}
//ncr
#include <iostream>
using namespace std;
int factorial(int n){//fcatorial function
     int fact=1;
     for(int i=1;i<=n;i++){
          fact=fact*i;//fact *=i
     }
     return fact;
}
int nCr(int n,int r){//bionomial coefiicient nCr
     int fact_n=factorial(n);
      int fact_r=factorial(r);
       int fact_nmr=factorial(n-r);
       return fact_n/(fact_r * fact_nmr);
}
int main(){
     int n=8,r=2;
     nCr(n,r);
     cout<<nCr(n,r)<<endl;
  
return 0;
}
//dec to binary
#include <iostream>
using namespace std;
int decToBinary(int decNum){
     int ans=0,pow=1;
     while(decNum>0){
          int rem= decNum%2;
          decNum/=2;//decnum=decNum/2

          ans +=(rem*pow);
          pow=pow*10;//pow *=10
     }
     return ans;
}
    int main(){
     int decNum =5;
     cout<<decToBinary(decNum)<<endl;
  return 0;
}
//binary to deciimal
#include <iostream>
using namespace std;
int decToBinary(int decNum){
     int ans=0,pow=1;
     while(decNum>0){
          int rem= decNum%2;
          decNum/=2;//decnum=decNum/2

          ans +=(rem*pow);
          pow=pow*10;//pow *=10
     }
     return ans;
}
    int main(){
     int decNum =5;
     cout<<decToBinary(decNum)<<endl;
  return 0;
}