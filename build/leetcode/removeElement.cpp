/*
    27.remove element
*/
/*
int removeElement(int* nums, int numsSize, int val){
    int t=numsSize-1;
    if(numsSize==1&&val==nums[0])return 0;
    if(numsSize==2&&nums[0]!=val&&nums[1]==val)return 1;
    for(int i=0;i<=t;i++)
    {
        if(t==i)return t+1;
        if(nums[i]==val)
        {
            while(t>=0&&nums[t]==val)t--;
            if(t<0)return 0;
            // else t++;
            int temp=nums[t];
            nums[t]=nums[i];
            nums[i]=temp;
            t--;
        }
    }
    return t+1;
}*/

//这个题目暴力的解法就是两层for循环，一个for循环遍历数组元素 ，第二个for循环更新数组
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            if (nums[i] == val) { // 发现需要移除的元素，就将数组集体向前移动一位
                for (int j = i + 1; j < size; j++) {
                    nums[j - 1] = nums[j];//后面的数覆盖前面的数即可，不需要交换
                }
                i--; // 因为下表i以后的数值都向前移动了一位，所以i也向前移动一位
                size--; // 此时数组的大小-1
            }
        }
        return size;
    }
};


//双指针解法，时间复杂度O(n)
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int left = 0;
        for (int right = 0; right < n; right++) {
            if (nums[right] != val) {
                nums[left] = nums[right];
                left++;
            }
        }
        return left;
    }
};



