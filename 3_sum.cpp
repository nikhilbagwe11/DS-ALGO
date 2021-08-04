#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = { 1, 4, 45, 6, 10, 8 };
    //int arr[]={-1,0,1,2,-1,-4};
    int target=22, n=6;
    int s=0, e=n-1;
    
    for(int i=0; i<n-1; i++){
        // Fix the 1st value and then apply the two pointer approach starting from i+1 element to last element i.e e
        int val = i;
        s=i+1;
        
        sort(arr, arr+n);
        
        while(s<e){
            int sum = arr[s] + arr[e]+arr[val];
            //cout<<sum<<endl;
            
            if(sum == target){
                cout<<arr[val]<<" "<<arr[s]<<" "<<arr[e]<<endl;
                break;
            }
            else if(sum > target)
                e--;
            else
                s++;
        }
    }

    return 0;
}
