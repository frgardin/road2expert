class Solution {
    public boolean isAnagram(String s, String t) {
        return Arrays.equals(sort(s), sort(t));
    }

    public static char[] sort(String s) {
        var a = s.toCharArray();
        Arrays.sort(a);
        return a;
    }
}
