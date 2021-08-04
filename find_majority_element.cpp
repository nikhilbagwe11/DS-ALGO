// Find the majority element i.e occurs more than n/2 times
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {0,0,1,1,1,1,2,2,2,2,2,2,2,2,2,2};
    int n = 16;
    
    // Simplest approach =================================================
    int ans =n/2;
    cout<<arr[ans];
    
    // BRUTE FORCE ======================================================
    int current = arr[0];
    int count = 1;
    
    for(int i=1; i<n; i++){
        if(arr[i] == arr[i+1]){
            count++;
        }
        else if(count > (n/2)){
            cout<<arr[i];
            break;
        }
        else{
            count = 1;
        }
        
    }
    
    //MOST EXPECTED SOLUTION === MOORE'S ALGORITHM=========================
    
    return 0;
}
