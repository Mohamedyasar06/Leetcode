class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n = s.length();
        int maxlen = 0;
        TreeSet<Character> bucket = new TreeSet<>();
        for(int left = 0,right = 0;right < n;right++){
            char ch = s.charAt(right);
            while(bucket.contains(ch)){
                bucket.remove(s.charAt(left));
                left++;
            }
            bucket.add(ch);
            maxlen = Math.max(maxlen,right-left +1);
        }
        return maxlen;
    }
}