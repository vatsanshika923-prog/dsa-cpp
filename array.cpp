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

