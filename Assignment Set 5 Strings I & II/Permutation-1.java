import java.io.*;
import java.util.*;
class Main
{
	public static void main(String[] args) throws IOException
	{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = 1;
        while(t-->0)
        {
            String S = br.readLine().trim();
            Solution obj = new Solution();
            List<String> ans = obj.find_permutation(S);
            for( int i = 0; i < ans.size(); i++)
            {
                System.out.print(ans.get(i)+" ");
            }
            System.out.println();
                        
        }
	}
}



class Solution {
   public List<String> find_permutation(String S) {   
       List<String> arr = new ArrayList<>();
       printPerm(0, S.length()-1, S, arr);
       
       HashSet<String> h1 = new HashSet<>(arr);
       List<String> arr1 = new ArrayList<>(h1);
       Collections.sort(arr1);
       
       return arr1;
       
   }
   public static void printPerm(int l, int r, String S, List<String> arr){
       if(l == r){
           arr.add(S);
           return;
       }
       for(int i = l; i <= r; i++){
           S = swap(S.toCharArray(),l,i);
           printPerm(l+1,r,S,arr);
           S = swap(S.toCharArray(),l,i);
       }
   }
   public static String swap(char[] strArr, int i, int j) {
 char temp = strArr[i];
 strArr[i] = strArr[j];
 strArr[j] = temp;
 return new String(strArr);
}
}