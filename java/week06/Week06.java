package week06;

public class Week06{
    public static int fib(int n){
        if(n<=2)return 1;
        int one=0,two=1,sum=1;
        for(int i=1;i<n;i++){
            sum=one+two;
            one=two;
            two=sum;
        }return sum;
        
    }
    public static int fBinserch(int a[],int key,int left,int right){
        while(left<right){
            int mid=(left+right)/2;
            if(key==a[mid]) {
                return mid;
            }else if(key<a[mid]){
                right=mid;
                
            }else if(key>a[mid]){
                left=mid+1;
                
            }else return -1;
        }return -1;
        
    }
    public static void main(String[] args) {
        //System.out.println(fib(3));
        int a[]={10,12,13,14,15,20};  
        System.out.println(fBinserch(a,14,0,a.length-1));
        System.out.println(fib(10));
    }
}
