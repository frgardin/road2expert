class Solution {
    public int[] productExceptSelf(int[] nums) {
        int p = 1;
        boolean containsOneZero = false;
        for (var num : nums) {
            if (num == 0 && containsOneZero) {
                return new int[nums.length];
            }
            if (num == 0) {
                containsOneZero = true;
            } else {
                p *= num;
            }

        }
        ;
        for (int i = 0; i < nums.length; i++) {
            if (containsOneZero && nums[i] != 0) {
                nums[i] = 0;
            } else if (containsOneZero && nums[i] == 0) {
                nums[i] = p;
            } else {
                nums[i] = p / nums[i];
            }
        }
        return nums;
    }
}