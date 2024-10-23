
#include <bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t--){

int n;
cin>>n;
vector<int>v(n);
for(auto &i: v)cin>>i;
long long sum=0;
long long  start=0;
while(start < n){
 long long  end = start;
 while( end < n && v[end] == v[start] )end++;
 
 long long  len = end - start;
 sum+=(len*(len+1))/2;
 start= end;


}


cout<<sum<<endl;
}



    return 0;
}