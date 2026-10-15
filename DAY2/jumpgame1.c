#include<stdio.h>
#include<stdbool.h>
//implement the jump game 1 problem in c language
bool canJump(int* nums, int numsSize) {
    int maxReach = 0;
    for (int i = 0; i < numsSize; i++) {
        if (i > maxReach) {
            return false; // If we can't reach this index, return false
        }
        maxReach = (maxReach > i + nums[i]) ? maxReach : (i + nums[i]);
        if (maxReach >= numsSize - 1) {
            return true; // We can reach the last index
        }
    }
    return false; // If we finish the loop without reaching the last index
}
int main(){
    int nums[] = {2,3,1,1,4}; // Example input
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    if (canJump(nums, numsSize)) {
        printf("Can jump to the last index.\n");
    } else {
        printf("Cannot jump to the last index.\n");
    }
    return 0;
}