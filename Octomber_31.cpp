// 766. Toeplitz Matrix
// https://leetcode.com/problems/toeplitz-matrix/description/

Method 1 
class Solution {
public:
    int row,col;

    bool check(vector<vector<int>>& matrix,int i,int j){
        int k = matrix[i][j];
        while(i<row and j<col){
            if(matrix[i++][j++]!=k){
                return false;
            }
        }
        return true;
    }
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        row = matrix.size();
        col = matrix[0].size();

        for(int i=0;i<col;i++){
            if(check(matrix,0,i) == false){
                return false;
            }
        }
        for(int i=1;i<row;i++){
            if(check(matrix,i,0) == false){
                return false;
            }
        }
        return true;
    }
};





Method 2 
class Solution {
public:

    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        for(int i=1;i<row;i++){
            for(int j=1;j<col;j++){
                if(matrix[i][j]!=matrix[i-1][j-1]) return false;
            }
        }
        return true;
    }
};
