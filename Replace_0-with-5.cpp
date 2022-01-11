#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

 // } Driver Code Ends

class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
    //Your code here
    int res = 0;
    while(n){
        int temp = n % 10;
        if (temp==0)
        temp = 5;
        res = res * 10 + temp;
        n=n/10;
    }
    while(res){
        int temp = res%10;
        n = n * 10 + temp;
        res = res / 10;
    }
    return n;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}  // } Driver Code Ends