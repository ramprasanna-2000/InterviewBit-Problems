class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int sum = 0;
        for(int i = 1 ; i < points.size();i++)
        {
            int left_sum = abs(points[i][0] - points[i-1][0]);
            int right_sum = abs(points[i][1] - points[i-1][1]);
            sum += max(left_sum,right_sum);
        }
        return sum;
    }
};