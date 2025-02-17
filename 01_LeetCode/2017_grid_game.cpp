#include<bits/stdc++.h>
using namespace std;

pair<int, int> maxsum(vector<vector<int>>& grid) {
        vector<int> sums;
        int col = grid[1].size();
        for (int i = 0; i < col; i++) {
            int sum = 0;
            for (int j = 0; j <= i; j++) {
                if (i == j) {
                    sum = sum + grid[0][j];
                    for (int k = j; k < col; k++) {
                        sum = sum + grid[1][k];
                    }
                } else {
                    sum = sum + grid[0][j];
                }
            }
           
            sums.push_back(sum);
          
            
        }

        pair<int, int> maximum_sum;
        maximum_sum.first = 0;
        maximum_sum.second = sums[0];
        for (int i = 0; i < col - 1; i++) {
            if (sums[i + 1] > maximum_sum.second) {
                maximum_sum.second = sums[i + 1];
                maximum_sum.first = i + 1;
            }
        }
    return maximum_sum;
}

    long long gridGame(vector<vector<int>>& grid) {
        pair<int,int> first_robot_path = maxsum(grid);
        int col = grid[1].size();
        for(int i=0;i<=first_robot_path.first;i++){
            if(i == first_robot_path.first){
                grid[0][i]=0;
                for(int j =i;j<col;j++){
                    grid[1][j]=0;
                }
            }
            else{
                grid[0][i]=0;
            }
        }
       

        pair<int,int> second_robot_path = maxsum(grid); 

        return second_robot_path.second;

}

int main(){
   vector<vector<int>> grid = {
       
{20,3,20,17,2,12,15,17,4,15},
{20,10,13,14,15,5,2,3,14,3}
    }; 
// answer 63;
// [[20,3,20,17,2,12,15,17,4,15],[20,10,13,14,15,5,2,3,14,3]]
    int n = gridGame(grid);
    cout<<n;
    return 0;
}