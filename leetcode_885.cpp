class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rstart, int cstart) {
        vector<vector<int>>directions = {{0,1},{1,0},{0,-1},{-1,0}};

        vector<vector<int>>result;

        int steps = 0;
        int dir = 0;

        result.push_back({rstart,cstart});

        while(result.size()<rows*cols){
            if(dir==0 ||dir==2){
                steps++;
            }

            for(int count=0;count<steps;count++){
                rstart+=directions[dir][0];
                cstart+=directions[dir][1];

                if(rstart>=0 && rstart<rows &&cstart>=0 && cstart<cols){
                    result.push_back({rstart,cstart});
                }
            }
            dir = (dir+1)%4;
        }
        return result;

    }
};