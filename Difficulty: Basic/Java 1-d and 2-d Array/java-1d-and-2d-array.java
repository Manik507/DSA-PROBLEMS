import java.util.*;
class Complete {
    public static ArrayList<Integer> array(int a[][], int b[], int n) {
        // Complete the function
        ArrayList<Integer> ans=new ArrayList<>();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i][i];
        }
        ans.add(sum);
        int max=b[0];
        for(int i=1;i<n;i++)
        {
            if(b[i]>max)
            max=b[i];
        }
        ans.add(max);
        return ans;
    }
}
