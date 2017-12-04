#include <stdio.h>
int dp[100000];
int fact(int n){
	if(dp[n]!=-1)
		return dp[n];
	dp[n] = fact(n-1)*n;
	return dp[n];
}
int main(void) {
	// your code goes here
	for(i=2;i<100000;i++){
		dp[i] = -1;
	}
	dp[0] = 1;
	dp[1] = 1;
	int n;
	scanf("%d\n",&n);
	printf("%d\n",fact(n));
	return 0;
}
