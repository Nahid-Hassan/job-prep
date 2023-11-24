
// spaceship bomb
#include<bits/stdc++.h>
using namespace std;
#define INT_MIN -1000007
int ans = INT_MIN;

void solve(int board[][5], int i, int j, bool bombUsed, int rowValid, int coins){
	if(i<0 || j<0 || j>=5){
    	ans = max(ans, coins);
    	return;
	}
	if(board[i][j] == 1 || board[i][j] == 0){
    	if(board[i][j] ==1){
        	coins++;
    	}
    	if(bombUsed){
        	rowValid--;
    	}
    	solve(board, i-1, j-1, bombUsed, rowValid, coins);
    	solve(board, i-1, j, bombUsed, rowValid, coins);
    	solve(board, i-1, j+1, bombUsed, rowValid, coins);
	}
	else if(board[i][j] ==2){
    	if(bombUsed && rowValid <= 0){
        	ans = max(ans, coins);
        	return;
    	}
    	else if(bombUsed && rowValid > 0){
        	rowValid--;
        	solve(board, i-1, j-1, bombUsed, rowValid, coins);
        	solve(board, i-1, j, bombUsed, rowValid, coins);
        	solve(board, i-1, j+1, bombUsed, rowValid, coins);
    	}
    	else{
        	bombUsed = true;
        	rowValid = 4;
        	solve(board, i-1, j-1, bombUsed, rowValid, coins);
        	solve(board, i-1, j, bombUsed, rowValid, coins);
        	solve(board, i-1, j+1, bombUsed, rowValid, coins);
    	}
	}
}

int main(){
	int n;
	cin>>n;
	int board[n][5];
	for(int i =0; i<n; i++){
    	for(int j = 0; j<5; j++){
        	cin>>board[i][j];
    	}
	}
	solve(board, n-1, 1, false, 0, 0);
	solve(board, n-1, 2, false, 0, 0);
	solve(board, n-1, 3, false, 0, 0);
	cout<<ans<<endl;
	return 0;
}
