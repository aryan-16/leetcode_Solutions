class Solution {
public:

/*int nCr(int n, int r) {
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return (int)(res);
}*/

    vector<int> generateRow(int row){
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for(int col=1; col<row;col++){
            ans = ans*(row-col);
            ans = ans/col;
            ansRow.push_back(ans);
        }
        return ansRow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int n = numRows;
        for(int i=1;i<=n;i++){
                vector<int> temp = generateRow(i);
                ans.push_back(temp);
        }
        return ans;
        
           
    }
};