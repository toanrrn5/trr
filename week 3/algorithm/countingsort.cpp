#include <iostream>
using namespace std;
int a[100001], cnt[1000004], opt[1000004];

void countingSort(int n, int a[]){
    int mx = a[0];
    cnt[a[0]]++;
    for(int i = 1; i < n; i++){
        if(mx < a[i]) mx = a[i];
        cnt[a[i]]++;
    }
    for(int i = 1; i <= mx; i++){
        cnt[i] += cnt[i - 1];
        //cout << cnt[i] << ' ';
    }
    //cout << '\n';
    for(int i = 0; i < n; i++){
        opt[cnt[a[i]] - 1] = a[i]; cnt[a[i]]--;
    }
    for(int i = 0; i < n; i++){
        cout << opt[i] << ' ';
    }
}

int main() {
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    countingSort(n, a);

}
