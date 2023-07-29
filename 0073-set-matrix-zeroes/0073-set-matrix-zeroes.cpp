class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        vector<bool>r(n,false),c(m,false);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    r[i]=true;
                    c[j]=true;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(r[i]){
                for(int j=0;j<m;j++){
                    matrix[i][j]=0;
                }
            }
        }
        for(int j=0;j<m;j++){
            if(c[j]){
                for(int i=0;i<n;i++){
                    matrix[i][j]=0;
                }
            }
        }
    

        
        
    }
};