# #include<bits/stdc++.h>

# using namespace std;
# int main() {
#     int n ;
#     cin >> n;
#     vector<int> arr(n+1,0);
#     for(int i = 1 ; i <= n; i ++) {
#         cin >> arr[i];
#     }
#     for(int i = 1 ; i <= n; i ++) {
#         cout <<  arr[i] << " ";
#     }
# }
n = int(input())
arr = []
for _ in range(n):
    arr.append(int(input()))
flag = False
for i in range(1,arr[len(arr)-1]+1,1):
    if i not in arr:
        flag =True
        print(i)
if not flag:
    print('good job')