#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int minNumOfJumps(int* nums, int numsSize) {
    if (numsSize <= 1) return 0; // No jumps needed if there's one or no element
    int jumps = 0;
    int currentEnd = 0;
    int farthest = 0;

    for (int i = 0; i < numsSize - 1; i++) {
        farthest = (farthest > i + nums[i]) ? farthest : (i + nums[i]);
        if (i == currentEnd) {
            jumps++;
            currentEnd = farthest;
            if (currentEnd >= numsSize - 1) {
                break; // We can reach the last index
            }
        }
    }
    return jumps;
}
int main(){
    int nums[] = {2,3,1,1,4}; // Example input
    int numsSize = sizeof(nums) / sizeof(nums[0]);  
    printf("Minimum number of jumps: %d\n", minNumOfJumps(nums, numsSize));
    
    return 0;
}