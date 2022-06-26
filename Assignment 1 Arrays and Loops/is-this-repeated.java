import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class Main {
	public static void main (String[] args) {
                      // Your code here
					  
	 Scanner sc=new Scanner(System.in);
        int n= sc.nextInt();
        int arr[]=new int[n];
        String ans="No";
        for (int i =0;i<n;i++)
        {
            arr[i]= sc.nextInt();
        }
        for (int i=0;i<arr.length-2;i++){
            if (arr[i]==arr[i+1]){
                if (arr[i+1]==arr[i+2]){
                    ans = "Yes";
                }
            }
        }
        System.out.println(ans);
	}
}