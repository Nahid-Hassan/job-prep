- Samsung 5 Problems
  - MenRestroom - Done
  - RockClimbing
  - SumOfNodesInKthLevel
  - TravelingSalesmanProblem
  - Warmwholes
- Enosis BFS and DFS
  - 2D DFS and BFS
  - Some problem from Leetcode and Enosis


## MenRestRoom

Given number of rooms and number of persons. তোমাকে প্রতিটা ব্যক্তিকে এমন ভাবে কক্ষ দিতে হবে যেন, তাদের মাঝে দূরত্ব ম্যাক্সিমাম হয়। 

**ইনপুট ও আউটপুটঃ** 

```
Input:
4            testCase
5 3
10 4
23 4
33 25

Output:
10110
0100100110
00000100000100000100100
010101010101011011111111111111111
```

**Explain**:

```
5, 3 # input
[0, 0, 0, 0, 0]
#p1
[0, 0, 1, 0, 0]
#p2
[0, 0, 1, 0, 1] # we accept prev       or [1, 0, 1, 0, 0]
#p3
[1, 0, 1, 1, 0]
```

```c++
#include <iostream>

using namespace std;


class Solution{
    public:

    int L[1000], R[1000], leaf[1000];
    int num_stalls, num_men;
    char stalls[50];
    
    Solution(){
        for(int i=0; i<1000; i++){
            this->L[i]=-1;
            this->R[i]=-1;
            this->leaf[i]=-1;
        }
        for(int i=0; i<50; i++){
            stalls[i]='_';
        }
        this->num_stalls=0;
        this->num_men=0;
        this->leaf[0]=0;
    }

    int candidate_node(){
        int idx=0, maxDiff=-1;
        for(int i=0; i<50; i++){
            if(this->leaf[i]!=-1){
                int diff = R[this->leaf[i]]-L[this->leaf[i]];
                if(diff>maxDiff){
                    idx=i;
                    maxDiff=diff;
                }
            }
        }
        int result = this->leaf[idx];
        this->leaf[idx]=-1;
        return result;
    }

    void split(int idx_to_split){
        int left_idx = (2*idx_to_split)+1;//Since 0 indexed
        int right_idx = (2*idx_to_split)+2;
        int mid = (this->L[idx_to_split]+this->R[idx_to_split])/2;
        // mid+=1;
        //cout<<"\nLeft : "<<left_idx<<"\tRight : "<<right_idx<<"\tMid : "<<mid<<"\n";
        this->L[left_idx]=this->L[idx_to_split];
        this->R[left_idx]=mid-1;

        this->L[right_idx]=mid+1;
        this->R[right_idx]=this->R[idx_to_split];

        update_leaf(left_idx, right_idx);

        this->stalls[mid]='X';
    }

    void update_leaf(int x, int y){
        for(int i=0; i<50; i++){
            if(this->leaf[i]==-1){
                this->leaf[i]=x;
                break;
            }
        }
        for(int i=0; i<50; i++){
            if(this->leaf[i]==-1){
                this->leaf[i]=y;
                break;
            }
        }
    }

    void print_stalls(){
        for(int i=0; i<this->num_stalls; i++){
            cout<<this->stalls[i]<<" ";
        }
        cout<<"\n";
    }

    int driver(){
        this->L[0]=0;
        this->R[0]=this->num_stalls-1;
        for(int i=0; (i<this->num_men) && (i<this->num_stalls); i++){
            int idx = candidate_node();
            //cout<<"Index_to_split : "<<idx<<"\n";
            split(idx);
            print_stalls();
        }
        return 1;
    }

};


int main(){
    int T;
    cin>>T;
    while(T>0){
        T--;
        int x, y;
        Solution obj;
        cin>>x>>y;
        obj.num_stalls = x;
        obj.num_men = y;
        cout<<"\n***********************************************************************\n";
        obj.driver();
        cout<<"\n***********************************************************************\n";
    }
    return 0;
}
```

```
2
5 3

***********************************************************************
_ _ X _ _ 
X _ X _ _ 
X _ X X _ 

***********************************************************************
10 4

***********************************************************************
_ _ _ _ X _ _ _ _ _ 
_ _ _ _ X _ _ X _ _ 
_ X _ _ X _ _ X _ _ 
_ X _ _ X X _ X _ _ 

***********************************************************************
```

## 



```
5 8
1 1 1 1 0 0 0 0
0 0 0 3 0 1 1 1
1 1 1 0 0 1 0 0
0 0 0 0 0 0 1 0
1 1 1 1 1 1 1 1
```

```c++
#include <cstring>
#include <iostream>
using namespace std;

#define len 20
int cell[len][len];
int viz[len][len];
int m, n;
int k;
bool flag;

bool isValid(int x, int y) {
    return (x >= 0 and y >= 0 and x < m and y < n and cell[x][y] != 0 and !viz[x][y]);
}

void solve(int x, int y) {
    viz[x][y] = 1;

    if (cell[x][y] == 3) {
        flag = true;
        return;
    }

    if (isValid(x, y + 1)) {
        solve(x, y + 1);
    }

    if (isValid(x, y - 1)) {
        solve(x, y - 1);
    }


    for (int i = 1; i <= k; i++) {
        if (isValid(x - i, y)) {
            solve(x - i, y);
        }
    }

    for (int i = 1; i <= k; i++) {
        if (isValid(x + i, y)) {
            solve(x + i, y);
        }
    }
}

int main() {
    freopen("rockIn.txt", "r", stdin);
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> cell[i][j];
        }
    }

    flag = false;
    for (k = 0; k <= m; k++) {
        memset(viz, 0, sizeof(viz));
        solve(m - 1, 0);

        if (flag) {
            cout << k << endl;
            break;
        }
    }
}
```