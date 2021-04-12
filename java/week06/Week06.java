package week06;

public class Week06{
    public static int fib(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++{}
        }
    }
    public static int fBinserch(int a[],int key,int left,int right){
        while(left<=right){
            int mid=(left+right)/2;
            if(key==a[mid]) {
                return mid;
            }else if(key<a[mid]){
                right=mid-1;
                
            }else if(key>a[mid]){
                left=mid-1;
                
            }
        }return -1;
        
    }
    public static void main(String[] args) {
        //System.out.println(fib(3));
        int a[]={10,12,13,14,15,20};  
        System.out.println(fBinserch(a,13,a[0],a[5]));
    }
}
