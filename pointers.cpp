#include<iostream>
#include<vector>
using namespace std;//pointer to pointer
int main(){
    int a = 10;
    int *ptr= &a;
    int** parPtr = &ptr;
    cout<< &ptr << endl;
    cout<<parPtr<< endl;
    return 0;
}
//defrencing operator
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a = 10;
    int* ptr = &a;
    cout<<*(&a)<< endl;// defrence operator
    return 0;
}
//null pointers
#include<iostream>
#include<vector>
using namespace std;
int main(){
   int** ptr= NULL;
   cout<< ptr << endl;
    return 0;
}
//predict output
#include<iostream>
#include<vector>
using namespace std;
int main(){
  int a=5;
  int *p = &a;
  int **q =&p;
  cout<< *p<<endl;
  cout<<**q<<endl;
  cout<<p<<endl;
  cout<<*q<<endl;
    return 0;
}
//pass by value to pas by refrence using pointers
#include<iostream>
#include<vector>
using namespace std;
void changeA(int *ptr){//pass by value
     *ptr= 20;
}
int main(){
     int a = 10;
     changeA(&a);
     cout<< "inside main fnx :"<< a<< endl;// 20
    return 0;
}
//paas by refrence using alias
#include<iostream>
#include<vector>
using namespace std;
void changeA(int &b){//pass by refrence using alias

     b= 20;
}
int main(){
     int a = 10;
     changeA(a);
     cout<< "inside main fnx :"<< a<< endl;// 20
    return 0;
}
//output questions
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {10,20,30,40};
    int *ptr = arr;
    cout<< *(ptr +1)<< endl;
    cout<<*(ptr +3)<< endl;
    ptr++;
    cout<<*(ptr)<<endl;
   
    return 0;
}



