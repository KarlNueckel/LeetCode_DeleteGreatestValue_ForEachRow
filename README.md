# LeetCode_DeleteGreatestValue_ForEachRow (Problem 2500)

![image](https://user-images.githubusercontent.com/87345979/210020669-b8ff3c91-61af-4ce3-be3d-a0d6832b27f8.png)
![image](https://user-images.githubusercontent.com/87345979/210020770-462a4990-ca4c-4e30-ada7-e56c7cbb5502.png)

# My Solution
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

# Runtime
![image](https://user-images.githubusercontent.com/87345979/210020979-412933b8-7a22-4114-a447-20ea454e75ae.png)

# Memory
