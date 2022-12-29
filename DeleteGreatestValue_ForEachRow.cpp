class Solution {
public:

    int deleteGreatestValue(vector<vector<int>>& grid) {
        int solution = 0;
        vector<int> max; 

        for(int i = 0; i < grid.size(); i++){
            if(grid[i].empty()){
                return solution;
            }

            max.push_back(*max_element(grid[i].begin(),grid[i].end()));
            grid[i].erase(max_element(grid[i].begin(),grid[i].end()));        
        }
        solution = *max_element(max.begin(), max.end());

        return solution+deleteGreatestValue(grid);
    }
};
