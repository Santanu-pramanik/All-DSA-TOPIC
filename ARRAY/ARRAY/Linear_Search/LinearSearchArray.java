import java.util.*;
public class LinearSearchArray{
    public static int search(int arr[],int N,int x){
        for(int i=0;i<N;i++){
            if(arr[i]==x)
            return i;//Return if element is found
        }
        return -1;//Return -1 if element is not found 
    }
    public static void main(String args[]){
        Scanner scan=new Scanner(System.in);
        System.out.print("Enter the size of the array:");
        int N=scan.nextInt();
        //Declare the array
        int[] arr=new int[N];
        //Input array element
        System.out.println("Enter "+N+" element :");
        for(int i=0;i<N;i++){
            arr[i]=scan.nextInt();
        }
        //Input the target value to search
        System.out.print("Enter the target element to Search :");
        int x=scan.nextInt();
        //Function call
        int result=search(arr,N,x);
        //Output the result
        if(result==-1){
        System.out.println("Element is not present in array");
        }
        else{
        System.out.println("Element search in "+result +"index");
        }
        scan.close();
    }
    
}