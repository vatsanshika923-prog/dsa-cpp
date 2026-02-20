//iterative approach by using loops
#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>arr, int tar){
    int st=0 , end = arr.size()-1;

    while(st <=end){
     int mid = (st+ end) /2;// to optimize we can [st+(end-st)/2] 
     if(tar > arr[mid]){
          st = mid+1;//2nd half
     }else if(tar < arr[mid]){
          end = mid -1;//1st half
     }else {
          return mid;
     }
        
    }
    return -1;
}
int main(){
    vector<int> arr1={-1,0,3,4,5,9,12};//odd 
    int tar1 =12;
    cout<< binarySearch(arr1,tar1)<<endl;

    vector<int> arr2 ={-1,0,3,5,9,12};//even
    int tar2 =0;
    return 0;
}
//recuriave approach of binary search 
#include<iostream>
#include<vector>//recursive approach of binary search
using namespace std;
int recBinarySearch(vector<int>arr, int tar, int st, int end){
     if(st<= end){
          int mid = st+ (end-st)/2;
          if( tar > arr[mid]){//2nd half
               return recBinarySearch(Arr, tar, mid+1, end);
          }else if(tar <arr[mid]){//1st half
               return recBinarySearch(arr,tar,st,mid -1);
          }else {//mid=> ans
               return mid;
          }
     }
     return -1;
}
int main(){
    vector<int> arr1={-1,0,3,4,5,9,12};//odd 
    int tar1 =12;
    //cout<< binarySearch(arr1,tar1)<<endl;

    vector<int> arr2 ={-1,0,3,5,9,12};//even
    int tar2 =0;
      cout<< binarySearch(arr2,tar2)<<endl;
    return 0;
}
#include<iostream>
#include<vector>//recursive approach of binary search
using namespace std;
int recBinarySearch(vector<int>arr, int tar, int st, int end){
     if(st<= end){
          int mid = st+ (end-st)/2;
          if( tar > arr[mid]){//2nd half
               return recBinarySearch(Arr, tar, mid+1, end);
          }else if(tar <arr[mid]){//1st half
               return recBinarySearch(arr,tar,st,mid -1);
          }else {//mid=> ans
               return mid;
          }
     }
     return -1;
}
int main(){
    vector<int> arr1={-1,0,3,4,5,9,12};//odd 
    int tar1 =12;
    //cout<< binarySearch(arr1,tar1)<<endl;

    vector<int> arr2 ={-1,0,3,5,9,12};//even
    int tar2 =0;
      cout<< binarySearch(arr2,tar2)<<endl;
    return 0;
}
//Books allocation problem important hard level problem
#include<iostream>
#include<vector>
using namespace std;

bool isValid (vector <int> &arr, int n , int m, int maxAllowedPages){
     int students=1, pages= 0;
     for(int i=0 ; i< n ; i++){
          if (arr[i]> maxAllowedPages){
               return false;
          }
          if (pages + arr[i] <= maxAllowedPages){
               pages += arr[i];

          }else {
               students++;
               pages = arr[i];
          }
     }
      return students > m ? false :true;
}

int allocateBooks(vector<int> &arr, int n, int m){//o(logN +n)
     if (m> n){//edge case
          return -1;
     }
     int sum=0;
     for(int i=0; i<n; i++){//(o(n))
          sum += arr[i];
     }
     int ans= -1;
     int st=0, end = sum ;//range of possible ans
     while(st<= end){//(o(logRange)) binary search
          int mid = st+(end- st)/2;
          if(isValid (arr, n,m , mid)){//left
               ans = mid;
               
               end = mid -1;
          }else{//right
               st = mid +1;

          }
     }
     return ans;

}
int main(){
     vector<int> arr ={2,1,3,4};
     int n=4, m=2;
     cout<< allocateBooks(arr, n, m)<< endl;
     return 0;
}//o/p =6

//painters partition problem 
#include<iostream>
#include<vector>
#include <climits>

using namespace std;//o(log(sum)*n)
 
bool isPossible(vector <int> &arr, int n, int m, int maxAllowedTime){//o(n)
     int painters =1 , time =0;

     for (int i=0; i< n; i++ ){
          if (time + arr[i] <= maxAllowedTime){
               time += arr[i];
          }else{
               painters++;
               time = arr[i];
          }
     }
     return painters <= m;
}


int minTimeToPaint(vector<int> &arr, int n, int m){
     int sum =0,maxVal=INT_MIN;
     for(int i=0 ; i< n; i++){//o(n)
          sum += arr[i];
          maxVal = max(maxVal, arr[i]);
     }
     int st = maxVal, end = sum , ans = -1;
     while(st <= end){//o(log(sum)*n)
          int mid = st + (end - st)/2;

          if(isPossible(arr, n,m ,mid)){//left
               ans = mid;
              end = mid -1;
          }else{//right
               st = mid +1;
          }
     }
     return ans;
     
}
int main(){
     vector<int> arr ={40,30,10,20};//ans60
     int n=4, m=2;
     cout<< minTimeToPaint(arr, n, m)<<endl;
     return 0;
}
