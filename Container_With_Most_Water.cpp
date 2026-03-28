#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxWater = 0;
        while (left < right) {
            int currentArea = std::min(height[left], height[right]) * (right - left);
            maxWater = std::max(maxWater, currentArea);
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxWater;
    }
};


int main() {
    Solution sol;
    std::vector<int> test = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    std::cout << "Result: " << sol.maxArea(test) << std::endl;
    return 0;
}
