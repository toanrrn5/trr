#include<iostream>
using namespace std;
int a[10101], n, x;

int binarySearch(int x, int a[], int st, int ed){
    int l = st, r = ed;
    while(l <= r){
        int mid = l + (r - l) / 2;
        if(a[mid] == x){
            return mid + 1;
        }
        if(x > a[mid]){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    return l;
}

void insertionSort(int a[], int n){
    for(int i = 1; i < n; i++){
        int j = i - 1;
        int new_id = binarySearch(a[i], a, 0, j); int tmp = a[i];
        while(j >= new_id){
            a[j + 1] = a[j]; j--;
        }
        a[new_id] = tmp;
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    insertionSort(a, n);
}
