package week10;

import week10.ListNode;

class LinkedList{
    private int length;
    private ListNode firstNode;

    public LinkedList(){
        length=0;
        firstNode=null;
    }

    public int size(){
        return length;
    }

    public void addFirst(Object x){
        ListNode newNode = new ListNode(x,firstNode);
        firstNode=newNode;
        length++;
    }
    public void insert(ListNode p,Object x){
        ListNode newNode= new ListNode(x);
        if (firstNode==null){
            firstNode=newNode;
            newNode.link=null;
        }else if(p==null){
            newNode.link=firstNode;
            firstNode=newNode;
        }else{
            newNode.link=p.link;
            p.link=newNode;
        }
    }
    public

    public void delete(ListNode p){
        if(firstNode==null)return;
        if(p==null){
            firstNode=firstNode.link;
        }
        return;
    }
    public void reverse(){
       ListNode p=firstNode;
       ListNode q=null;
       ListNode r=null;
       while(p!=null){
           r=q;
           q=p;
           p=p.link;
           q.link=r;
       }
       first=q;
    }
    public static LinkedList connectList(LinkedList l1,LinkedList l2){
        LinkedList l= new LinkedList();
        l.length=l1.length+l2.length;
        if(l1.first==null){
            l.first=l2.first;
        }else if(l2.first==null){
            l.first=l1.first;
        }else{
            ListNode p=l1.first;
            while(p.link!=null)p=p.link;
            p.link=l2.first;
        }
        return l;
    }
    public ListNode intSerch(){}
    public void deleteLast() {    // 프로그램 4.2
        ListNode previousNode, currentNode;
        if (first == null) return;
        if (first.link == null) {
              first = null;
              return;
        }else {
            previousNode = first;
            currentNode = first.link;
            while (currentNode.link != null) {
                previousNode = currentNode;
                currentNode = currentNode.link;
            }
            previousNode.link = null;
         }
     } 
}