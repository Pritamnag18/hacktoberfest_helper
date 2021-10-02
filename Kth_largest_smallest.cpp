#include<bits/stdc++.h>
using namespace std;


void kthSmallestLargest(int arr[], int n, int k) {
   sort(arr,arr+n);
   int a = 0;
   int ksmall=-1, klarge=-1;


   for(int i=0;i<n;i++){

       if(arr[i]!=arr[i+1]){

           a++;

       }

       if(a==(k-1)){

           ksmall = i+1;

           break;

       }

   }


   a=0;

   for(int i=n-1;i>=0;i--){

       if(arr[i]!=arr[i-1]){

           a++;

       }

       if(a==(k-1)){

           klarge = i-1;

           break;

       }

   }

   if(klarge==-1)

       cout<<"-1"<<" ";

   else

       cout<<arr[klarge]<<" ";

   if(ksmall==-1)

       cout<<"-1";

   else

       cout<<arr[ksmall];

   cout<<endl;

}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        kthSmallestLargest(arr, n, k);
        cout << endl;
        t--;
    }
    return 0;
}