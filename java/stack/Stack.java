package stack;

public class Stack{
    public ListNode top;
    public Stack(){
        top=null;
    }
    public void push(Object x){
        ListNode newNode = new ListNode(x,top);
        top=newNode;
    }
    public Object pop(){
        if(top==null)return null;
        Object t=top.getData();
        top=top.getLink();
        return t;
    }
    
}