#include <iostream>
#include <vector>//vector header file 
using namespace std;

int main(){
     vector<int> vec(5,0);//0 size
     cout<< vec[0]<<endl;
     cout<< vec[1]<<endl;
     cout<< vec[2]<<endl;
     cout<< vec[3]<<endl;
     cout<< vec[4]<<endl;
    
     return 0;
} 
//for each loop
#include <iostream>
#include <vector>//vector header file 
using namespace std;

int main(){
     vector<int> vec={'a','b','c','d','e'};
     for(char i:vec){//for each loop
          cout<<i<< endl;
     }
    
     return 0;
} 
//vector functions
#include <iostream>
#include <vector>//vector header file 
using namespace std;

int main(){
     vector<int> vec;
    cout<<"size="<<vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout<<"after push back size="<<vec.size()<<endl;

    vec.pop_back();//45
    
          cout<<vec.back()<< endl;
           cout<<vec.front()<< endl;
            cout<<vec.at(0)<< endl;

    
     return 0;
} 
//single number problem on leetcode
#include <iostream>
#include <vector>//vector header file 
using namespace std;

int main(){
     //single number
     int singleNumber (vector<int> & nums){
        int ans=0;
        for(int val : nums){
            ans =ans^ val;
        }
        return ans;
     }
    
    
} 