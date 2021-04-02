package week05;
import java.util.*;
public class Palindrome {
    public static boolean palindrome(String s){
        return determinePalindrome(s,0,s.length()-1);
    }
    public static boolean determinePalindrome(String s,int i,int j){
        if(s.length()%2==0){
            if(i-j==1){
                if(s.charAt(i)!=s.charAt(j)) return false;
                else{
                    return true;
                }
            }else if(s.charAt(i)!=s.charAt(j)) return false;
            else{
                return determinePalindrome(s, i+1, j-1);
            }
        }else{
            if(i==j) return true;
            else if(s.charAt(i)!=s.charAt(j)) return false;
            else{
                return determinePalindrome(s, i+1, j-1);
            }
        }
    }
    public static void main(String args[]){
        Scanner scan= new Scanner(System.in);
        String s= scan.nextLine();
        System.out.println(palindrome(s));
    }
}