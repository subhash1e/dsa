#include<iostream>
using namespace std;


int C(int n, int k){




	int dp[n+1][k+1];
	for (int i = 0; i < n+1; ++i)
	{
		for (int j = 0; j < k+1; ++j)
		{
			dp[i][j] = 1;
		}
	}
	// vector<vector<int>> array(ROW, vector<int>(COLUMN, 1));





	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i-1; ++j)
		{
			dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
			if(i==n&&j==k)break;
		}
	}

	return dp[n][k];
}


int main(int argc, char const *argv[]){

	printf("%d\n",C(5,3) );
	
	return 0;
}


//output is 10
