class Solution {
    public boolean isPalindrome(String s) {
        int n=s.length();
        StringBuilder res=new StringBuilder();
        for(int i=0;i<n;i++){
            if(Character.isLetterOrDigit(s.charAt(i))){
                res.append(Character.toLowerCase(s.charAt(i)));
            }
            
        }
        String str=res.toString();
        String rev=new StringBuilder(str).reverse().toString();
        return str.equals(rev);
        
    }
}