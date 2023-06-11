// User function Template for Java

class Solution{
    static double switchCase(int choice, List<Double> arr){
        // code here
        switch(choice){
            case 1: return Math.PI*arr.get(0)*arr.get(0);
            case 2: return arr.get(0)*arr.get(1);
        }
        return -1;
    }
}
