import java.util.*;
public class TernarySearchArray {
    static int ternarySearch(int left,int right, int key,int arr[]){
        if(right>=left){
            //Find the mid1 and mid2
            int mid1=left+(right-left)/3;
            int mid2=right-(right-left)/3;
            //Check if key is present at array mid
            if(arr[mid1]==key){
            return mid1;
        }
        if(arr[mid2]==key){
            return mid2;
        }
        if(key<arr[mid1]){
            return ternarySearch(left, mid1-1, key, arr);
        }else if(key>arr[mid2]){
            return ternarySearch( mid2+1,right, key, arr);
        }else{
            //the key present in between mid1 and mid2
            return ternarySearch(mid1+1,mid2-1,key, arr);
        }
    }
    return -1;
}
public static void main(String args[]){
   // int left,right,p,key;
    Scanner scan=new Scanner(System.in);
    System.out.print("Enetr the number of elements in the array :");
    int n=scan.nextInt();
    int arr[]=new int[n];
    System.out.println("Enter "+n+" sorted elements : ");
    for(int i=0;i<n;i++){
        arr[i]=scan.nextInt();
    }
    System.out.print("Enter the key to be searched :");
    int key=scan.nextInt();
    int left=0;
    int right=n-1;
    //search the key using ternarysearch.
    int p=ternarySearch(left, right, key, arr);
    //print the result
    if(p==-1){
        System.out.println("key "+key+" not found in the array:");
    }else{
        System.out.println("key " +key+" is found at index "+p);
    }
    scan.close();
}
}
