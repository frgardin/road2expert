class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        return Arrays.stream(strs)
                    .collect(Collectors.groupingBy(Solution::sort))
                    .values()
                    .stream()
                    .toList();
    }

    private static String sort(String s) {
        var a = s.toCharArray();
        Arrays.sort(a);
        return new String(a);
    }
}
