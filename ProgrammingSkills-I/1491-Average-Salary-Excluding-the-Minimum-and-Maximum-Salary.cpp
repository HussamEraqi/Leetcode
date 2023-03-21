class Solution {
public:
    double average(vector<int>& salary) {
        double ava = 0;
        int n = salary.size();
        sort(salary.begin(),salary.end());
        for(int i=1; i<n-1; i++){
            ava += salary[i];
        }

        return ava/(n-2);
    }
};
