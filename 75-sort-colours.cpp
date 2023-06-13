class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        // int count0=0;
        // int count1=0;
        // int count2=0;
        
        // for(int i=0;i<nums.size();i++)
        // {
        //     if (nums[i]==0)
        //     {
        //         count0++;
        //     }
        //     else if(nums[i]==1)
        //     {
        //         count1++;
        //     }
        //     else if(nums[i]==2)
        //     {
        //         count2++;
        //     }
        // }
        // int i=0;
        // while(count0--)
        // {
        //     nums[i]=0;
        //     i++;
        // }
        // while(count1--)
        // {
        //     nums[i]=1;
        //     i++;
        // }
        // while(count2--)
        // {
        //     nums[i]=2;
        //     i++;
        // }
        int start=0;
        int mid=0;
        int end=nums.size()-1;
        while(mid<=end)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[start]);
                start++;
                mid++;        
            }
           else  if(nums[mid]==1)
            {
                mid++;        
            }
            else{
                swap(nums[end],nums[mid]);
                end--;
            }
            

        }
        
    }
};