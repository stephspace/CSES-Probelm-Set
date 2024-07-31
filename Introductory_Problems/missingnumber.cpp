#include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long nums, sum = 0;

    for(int i = 1; i <= n - 1; i++){
        cin >> nums;
        sum += nums;
    }
    cout << (n*(n+1))/2 - sum << '\n';

}