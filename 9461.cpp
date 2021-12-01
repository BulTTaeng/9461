#include <iostream>
#include <vector>

using namespace std;

long long dp[101];

vector<int> num;

int main() {
  int t, input;
  int max =0;
  cin >> t;
  for(int i =0 ;i <t; i++){
    cin >> input;
    num.push_back(input);
    if(max < input){
      max = input;
    }
  }

  dp[0] = 1;
  dp[1] = 1;
  dp[2] = 1;
  dp[3] = 2;
  dp[4] = 2;

  for(int i =5; i<max; i++){
    dp[i] = dp[i-1] + dp[i-5];
  }

  for(int i =0; i<t; i++){
    cout<< dp[num[i]-1] << endl;
  }
  return 0;

}