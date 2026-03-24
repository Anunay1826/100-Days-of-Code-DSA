/*Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.*/


int removeElement(int* nums, int numsSize, int val) {
    int i = 0;
    int n = numsSize;

    while(i < n) {
        if(nums[i] == val) {
            nums[i] = nums[n - 1];
            n--;
        } else {
            i++;
        }
    }

    return n;
}
