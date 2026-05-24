class Solution {
    public int longestConsecutive(int[] nums) {
        if (nums.length == 0) return 0;
        HashSet<Integer> set = new HashSet<>();
        for (var num : nums) set.add(num);
        int max = 1;
        for (var num : set) {
            if (!set.contains(num-1) && set.contains(num+1)) {
                int count = 2;
                int cur = num+1; 
                while (set.contains(cur+1)) {
                    cur++;
                    count++;
                }
                max = Math.max(count, max);
            }
        }
        return max;
    }
} 