//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include <string>
//using namespace std;
//#define ll long long
//int func(string &str, vector <ll >& dp, ll index)
//{
//	if (index == 0)
//		return 1;
//	if (dp[index])
//		return dp[index];
//	if (str[index - 1] >= '1' && str[index - 1] <= '9')
//		dp[index] = func(str, dp, index - 1);
//	if (index >= 2 && stoi(str.substr(index - 2, 2)) <= 26 && stoi(str.substr(index - 2, 2)) >= 10)
//		dp[index] += func(str, dp, index - 2);
//	return dp[index];
//}
//int func(string& str, vector <ll >& dp, ll index)
//{
//	dp[0] = 1;
//	int temp = 0;
//	for (ll i = 0; i < str.size(); i++)
//	{
//		if (str[i] <= '9' && str[i] >= '0')
//			dp[i + 1] = dp[i];
//		temp = stoi(str.substr(i, 2));
//		if (temp >= 10 && temp <= 26)
//			dp[i + 1] += dp[i - 2];
//	}
//	return dp[index];
//}
//int main()
//{
//	string input;
//	while (1)
//	{
//		cin >> input;
//		vector<ll> dp(input.size() + 1, 0);
//		if (input == "0")
//			break;
//		cout << func(input, dp, input.size()) << endl;
//	}
//	return 0;
//}