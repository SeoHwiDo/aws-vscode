package List_shd;

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
        length++;
    }
    public void addLast(Object x){
        ListNode newNode=new ListNode(x);
        if(firstNode==null){
            firstNode=newNode;
        }
        ListNode p = firstNode;
        while(p.link!=null){
            p=p.link; 
        }
        p.link=newNode;
        length++;
    }

    public void delete(ListNode p){
        if(firstNode==null)return;
        else if(p==null)firstNode=firstNode.link;
        else p.link=p.link.link;
        length--;
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
       firstNode=q;
    }
    public static LinkedList concatList(LinkedList l1,LinkedList l2){
        LinkedList l= new LinkedList();
        l.length=l1.length+l2.length;
        if(l1.firstNode==null){
            l.firstNode=l2.firstNode;
        }else if(l2.firstNode==null){
            l.firstNode=l1.firstNode;
        }else{
            ListNode p=l1.firstNode;
            while(p.link!=null){
                p=p.link; 
            }
        l.firstNode=l1.firstNode;
        p.link=l2.firstNode;
        
        }
        return l;
        
    }
    public ListNode listSerch(Object x){
        ListNode p=firstNode;
        while(p!=null){
            if(p.data.equals(x))return p;
            p=p.link;
        }
        return p;
    }
    public void deleteLastNode() {    
        ListNode previousNode, currentNode;
        if (firstNode == null) return;
        if (firstNode.link == null) {
            firstNode = null;
            length--;
            return;
        }else {
            previousNode = firstNode;
            currentNode = firstNode.link;
            while (currentNode.link != null) {
                previousNode = currentNode;
                currentNode = currentNode.link;
            }
            previousNode.link = null;
            length--;
         }
     } 
     public void print(){
        ListNode p = firstNode; 
        System.out.print("(");
        while (p != null) {
            System.out.print(p.data);
            p = p.link;
            if (p != null) {
                 System.out.print(",");
            }
        }
        System.out.print(")\n");   
     }
}