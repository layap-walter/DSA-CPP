class Solution {
public:

   int findKey_leftmost(vector<int>& nums, int target){

       int start = 0;
       int end = (int)nums.size()-1;
       int ans = -1;
       int mid = start + ((end - start) / 2);
        while(start<=end){

            if(nums[mid] == target){
                ans = mid;
                end = mid -1;
            }
            else if(target>nums[mid]){
                start = mid +1;
            }
            else{
                end = mid-1;
            }
            mid = start + ((end - start) / 2);
        }
        return ans;
}

int findKey_rightmost(vector<int>& nums, int target){

       int start = 0;
       int end = (int)nums.size() - 1;
       int ans = -1;
       int mid = start + ((end - start) / 2);
        while(start<=end){

            if(nums[mid] == target){
                ans = mid;
                start = mid +1;
            }
            else if(target>nums[mid]){
                start = mid +1;
            }
            else{
                end = mid-1;
            }
            mid = start + ((end - start) / 2);
        }
        return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = findKey_leftmost(nums , target);
        int right = findKey_rightmost(nums , target);

        return{left , right};
    }
};
