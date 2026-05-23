import java.util.*;

class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        var map = new HashMap<Integer, Integer>();
        
        for (int num : nums) {
            map.put(num, map.getOrDefault(num, 0)+1);
        }

        return map.entrySet()
                .stream()
                .sorted(Comparator.comparingInt(Map.Entry<Integer,Integer>::getValue).reversed())
                .limit(k)
                .mapToInt(Map.Entry::getKey)
                .toArray();        
    }
}