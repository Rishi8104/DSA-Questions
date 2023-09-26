// Simple array sum  
// Hackar Rank very Simple Question of DSA
// So the  Question is you have arr[n] = [1,2,3,4,5] to sum this arr
// like 1+2+3+4+5 =15 
// bhiend the logic of this  problem statement


#include<bits/stdc++.h>
using namespace std;
vector<string> split(const string &);
int SimpleArray(vector<int>arr){
    int n = arr.size();
    int sum =0;
    for (int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    return sum;
}

//6
//[1 2 3 4 10 11]
// 1+2+3+4+10+11 =31 ans.