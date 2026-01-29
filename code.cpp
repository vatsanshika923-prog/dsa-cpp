#include <iostream>
#include <climits>//for infifnity limist
using namespace std;
    int main(){
     int nums[]={5,15,22,1,-15,24};
     int size=6;
    // int smallest=INT_MAX;//postive infinity
     int largest=INT_MIN;
      for(int i=0;i<size;i++){
          if(nums[i]>largest){
               largest=nums[i];
          }
      }
      cout<<"largest= "<<largest<<endl;
  return 0;
}