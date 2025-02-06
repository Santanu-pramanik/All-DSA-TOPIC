import java.util.*;
public class BinarySearchArray {
    int binarySearch(int arr[],int x){
        int low=0,high=arr.length-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            //check x is present of mid 
            if(arr[mid]==x){
            return mid;
            }
            else if(arr[mid]<x){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }
    public static void main(String args[]){
        Scanner scan=new Scanner(System.in);
        System.out.print("Enter the number of element in the array: ");
        int n=scan.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter "+n+" Sorted elements: ");
        for(int i=0;i<n;i++){
            arr[i]=scan.nextInt();
        }
        System.out.println("Enter the element to search for :");
        int x=scan.nextInt();
        BinarySearchArray ob=new BinarySearchArray();
        int result=ob.binarySearch(arr,x);
        if(result==-1){
            System.out.println("Element is not found in this array");
        }
        else{
            System.out.println("Element is present at index "+result);
        }
        scan.close();
    }
}
