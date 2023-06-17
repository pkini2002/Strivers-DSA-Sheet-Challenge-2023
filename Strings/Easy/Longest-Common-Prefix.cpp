class Solution {
    public String longestCommonPrefix(String[] strs) {
        // Check if the i/p string is empty
        if(strs.length==0){
            return "";
        }
        
        // store 1st string in the array
        String prefix=strs[0];
        
        // Start a loop that iterates over the array starting from the second element 
        // (i=1) to compare each string with the current prefix
        
        for(int i=1;i<strs.length;i++){
            //  If prefix is not found at the beginning of arr[i], the indexOf
            // method will return a value other than 0.
            while(strs[i].indexOf(prefix)!=0){
                prefix=prefix.substring(0,prefix.length()-1);
            }
        }
        return prefix.isEmpty()?"":prefix;
    }
}
