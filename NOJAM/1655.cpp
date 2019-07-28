#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, less<int>> maxHeap;
priority_queue<int, vector<int>, greater<int>> minHeap;
int N;
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N;
  while(N--) {
    int t; cin >> t;
    maxHeap.size() <= minHeap.size() ? maxHeap.push(t) : minHeap.push(t);
    if(!(maxHeap.empty() || minHeap.empty())) {
      int maxTop = maxHeap.top();
      int minTop = minHeap.top();
      if(maxTop > minTop) {
        maxHeap.pop();
        minHeap.pop();
        maxHeap.push(minTop);
        minHeap.push(maxTop);
      }
    }
    cout << maxHeap.top() << '\n';
  }
  return 0;
}