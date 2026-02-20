#include <iostream>
using namespace std;

    //pass by refrence
    void changeArr(int arr[],int size){
        cout<<"in function\n";
        for (int i=0;i<size; i++) {
            arr[i]= 2* arr[i];
        } 
      }
      int main(){
     int arr[]={1,2,3};//2 4 6
     changeArr(arr,3);
    
    cout<<"inn main\n";
    for(int i=0;i<3;i++){
      cout<< arr[i]<< " ";
    }
    cout<< endl;

    return 0;

      }
      //linear search
      #include <iostream>
using namespace std;
int linearSearch(int arr[],int size,int target){
     for (int i=0;i<size; i++){
          if (arr[i]== target){
               return i;
          }

     }
     return -1;//npt found value

}
    int main(){
     //linear search
     int arr[]={4,2,7,8,1,2,5};
     int size = 7;
     int target=8;
     cout<<linearSearch(arr ,size,target)<< endl;
  return 0; 
}
//reverse of an array
#include <iostream>
using namespace std;//reverse an array
//using 2 pointer approch 
void reverseArray(int arr[], int size){
     int start =0; int end =size -1;//size 7-1=6
     while (start <end){
          swap(arr[start],arr[end]);
          start++;
          end--;
     }
}
    int main(){
     int arr[]={4,2,7,8,1,2,5};
     int size=7;
     reverseArray(arr, size);
     for (int i=0; i< size; i++)
{
     cout<<arr[i]<< " ";
}    
cout<< endl; 
  return 0; 
}
///sum and prodict of array elements '
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    int sum = 0;
    long long product = 1;

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        product *= arr[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;

    return 0;
}//
//swap max and min elements of array'#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int minIndex = 0, maxIndex = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[minIndex])
            minIndex = i;
        if(arr[i] > arr[maxIndex])
            maxIndex = i;
    }

    // Swapping min and max
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    cout << "Array after swapping min and max:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
//print unique values of array
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Unique elements are:\n";
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }
        if(count == 1)
            cout << arr[i] << " ";
    }

    return 0;
}
//intersection of 2 array
#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    int a[n1];

    cout << "Enter elements of first array:\n";
    for(int i = 0; i < n1; i++)
        cin >> a[i];

    cout << "Enter size of second array: ";
    cin >> n2;
    int b[n2];

    cout << "Enter elements of second array:\n";
    for(int i = 0; i < n2; i++)
        cin >> b[i];

    cout << "Intersection of arrays:\n";
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(a[i] == b[j]) {
                cout << a[i] << " ";
                break;
            }
        }
    }

    return 0;
}
//maximum subaaray brute force aproach
#include <iostream>
#include <vector>
using namespace std;

int main(){
     int n=5;
     int arr[5]={1,2,3,4,5};
      for(int st=0; st<n;st++){
         for(int end=st;end<n; end++) {
          for(int i=st; i<=end; i++){
               cout<< arr[i];
          }cout<<" ";
         }
         cout<<endl;
     }
     return 0;
     
} 
//max subarray sum by brute force approach
include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
     int n=5;
     int arr[5]={1,2,3,4,5};
     int maxSum=INT_MIN;
      for(int st=0; st<n;st++){
          int currSum=0;
         for(int end=st;end<n; end++) {
          currSum += arr[end];
          maxSum = max(currSum,maxSum);
          
         }
         
     }
     cout<<"max subarray sum="<<maxSum<<endl;
    
     return maxSum;
} 
//pair sum brute force approach 
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
vector<int> pairSum(vector<int> nums, int target){
     vector<int> ans;
     int n =nums.size();
     for (int i =0; i<n ; i++){
          for (int j = i+1; j< n; j++){
               if (nums[i]+ nums[j] == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
               }
          }
     }
}
int main(){
     vector<int> nums ={2,7,11,15};
     int target=13;
     vector <int> ans =pairSum(nums , target);
     cout<< ans[0]<<", "<< ans[1]<< endl;
     return 0;
} 
//by optimal appraoch using 2 pointers to solve pair sums
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
vector<int> pairSum(vector<int> nums, int target){
     vector<int> ans;
     int n =nums.size();
     int i=0, j=n-1;
     while(i<j){
          int pairSum =nums[i]+nums[j];
          if (pairSum> target){
               j--;
          }else if(pairSum< target){
               i++;
          }else {
               ans.push_back(i);
               ans.push_back(j);
               return ans;
          }
     }
}
int main(){
     vector<int> nums ={2,7,11,15};
     int target=26;
     vector <int> ans =pairSum(nums , target);
     cout<< ans[0]<<", "<< ans[1]<< endl;
     return 0;
} 

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
vector<int> pairSum(vector<int> nums, int target){
     vector<int> ans;
     int n =nums.size();
     int i=0, j=n-1;
     while(i<j){
          int pairSum =nums[i]+nums[j];
          if (pairSum> target){
               j--;
          }else if(pairSum< target){
               i++;
          }else {
               ans.push_back(i);
               ans.push_back(j);
               return ans;
          }
     }
}
int main(){
     vector<int> nums ={2,7,11,15};
     int target=26;
     vector <int> ans =pairSum(nums , target);
     cout<< ans[0]<<", "<< ans[1]<< endl;
     return 0;
} 