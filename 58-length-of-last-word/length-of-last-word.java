class Solution {
    public int lengthOfLastWord(String s) {
        s=s.trim();

        String[] parts=s.split(" ");
        int lenOfParts=parts.length;
        String ans=parts[lenOfParts-1];

        return ans.length();
    }
}