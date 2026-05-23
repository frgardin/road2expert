import java.util.*;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        var map = new HashMap<Integer, Integer>();
        return IntStream.range(0, nums.length)
              .filter(idx -> {
                    if (map.containsKey(target-nums[idx])) {
                        return true;
                    }
                    map.put(nums[idx], idx);
                    return false;
              })
              .mapToObj(a -> a)
              .findFirst()
              .map(idx -> new int[]{idx, map.get(target-nums[idx])})
              .orElse(new int[]{});
    }
}
