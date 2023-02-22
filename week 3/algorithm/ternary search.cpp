#include<iostream>
#include<algorithm>
using namespace std;
int a[10101], n, x;

int ternarySearch(int x, int a[]){
    int l = 0, r  = n - 1, index = -1;
    while(l <= r){
        int mid1 = l + (r - l)/3;
        int mid2 = r - (r - l)/3;
        if(a[mid1] == x) index = mid1;
        if(a[mid2] == x) index = mid2;
        if(x < a[mid1]){
            r = mid1 - 1;
        }
        else if(x > a[mid2]){
            l = mid2 + 1;
        }
        else{
            l = mid1 + 1; r = mid2 - 1;
        }
    }
    return index;
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> x;
    sort(a, a + n);
    int id = ternarySearch(x, a); cout << id;
}
