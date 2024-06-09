//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
	public static void main(String[] args) throws IOException
	{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim()); // Inputting the testcases
        while(t-- > 0)
        {
            int n = Integer.parseInt(br.readLine().trim());
            int[] a = new int[n];
            String[] inputLine = br.readLine().trim().split(" ");
            for (int i = 0; i < n; i++) {
                a[i] = Integer.parseInt(inputLine[i]);
            }
            
            Compute obj = new Compute();
            System.out.println(obj.findElement(a, n));
            
        }
	}
}
// } Driver Code Ends


//User function Template for Java

class Compute {
    public int findElement(int arr[], int n){
            int flag=0,i;
        for( i=1;i<n-1;i++)
        {
            int j=i+1;
            int k=i-1;
             flag=1;
            while(j<n || k>=0)
            {
                if(j<n && arr[i]>arr[j] )
                {
                    flag=0;
                    break;
                }
                if (k >= 0 && arr[i] < arr[k]) {
                    flag = 0;
                    break;
                }
                j++;
                k--;
            }
           if(flag==1)
            {
                return arr[i];
            }
        }
      return -1;
    
    }
}