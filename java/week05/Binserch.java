package week05;
import java.util.*;
public class Binserch {
    public static int binserch_1(int a[], int n, int l, int r) {
        while(l<r){
            int mid=(l+r)/2;
            if(a[mid]==n){
                return mid;
            }else if(a[mid]>n){
                return binserch_1(a,n,l,mid);
            }else if(a[mid]<n){
                return binserch_1(a,n,mid+1,r);
            }
            else return -1;
        }return -1;
    }

    public static void main(String args[]){
        Scanner scan=new Scanner(System.in);
        int a[]={1,14,25,43,56, 68, 97};
        int key=scan.nextInt();
        System.out.println(binserch_1(a,key,0,a.length-1));
    }
}