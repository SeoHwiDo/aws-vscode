import java.util.LinkedList;

class LinkedList{
    private int length;
    private ListNode first;

    public void delete(ListNode p){
        if(first==null)return;
        if(p==null){
            first=first.link;
        }
        return;
    }
    public void reverse(){
       ListNode p=first;
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