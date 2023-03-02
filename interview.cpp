#include<bits/stdc++.h>
using namespace std;


int main()
{
    freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);

int n;
cin>>n;
int arr[n];
int hsh[9]={0};


for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
//precompute
for(int i=0;i<n;i++)
{
    hsh[arr[i]]+=1;
}

int q;
cin>>q;
while(q--)
{
    int number;
    cin>>number;
    cout<<hsh[number]<<endl;
}


}