class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin() , meetings.end());

        int strt = meetings[0][0];
        int end = meetings[0][1];

        for(int i=1 ; i<meetings.size() ; i++){
            if(meetings[i][0] <= end){
                end = std::max(end,meetings[i][1]);
            }
            else{
                days -= end-strt+1;
                strt = meetings[i][0];
                end = meetings[i][1];
            }
        }
        days -= end-strt+1;

        return days;
        
    }
};