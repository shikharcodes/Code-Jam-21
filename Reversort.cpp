#include<bits/stdc++.h>
using namespace std;
void reverse(int i, int j, int* a) {
    int x=i;
    int y=j;
    while(x<=y) {
        swap(a[x], a[y]);
        x++;
        y--;
    }
}
int main() {
    int t;
    cin>>t;
    int cn=0;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) 
            cin>>a[i];
        long long cost = 0;
        for(int i=0; i<n-1; i++) {
            int mindex = n-1;
            int mterm = INT_MAX;
            for(int j=n-1; j>=i; j--) {
                if(a[j]<mterm) {
                    mterm = a[j];
                    mindex = j;
                }
            }
            reverse(i, mindex, a);
            cost += mindex-i+1;
        }
        cn++;
        cout<<"Case #"<<cn<<": "<<cost<<endl;
    }
    return 0;
}