import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class Main {
	public static void main (String[] args) {
                      // Your code here
		Scanner sc = new Scanner(System.in);
		int buld=sc.nextInt();
		int a[]=new int[buld];
		for(int i=0;i<buld;i++){
			a[i]=sc.nextInt();
		}
		//Arrays.sort()
		int count=1;
		int max=a[0];
		for(int i=1;i<buld;i++){
			
				if(max<a[i]){
					count++;
					max=a[i];
				}
		}
       System.out.print(count);	}
}