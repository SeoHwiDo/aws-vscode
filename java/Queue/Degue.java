package Queue;
public class Degue{
    DNode head,tail;
    public Degue(){
        head=new DNode();
        tail=new DNode();
        head.rlink=tail;
        tail.llink=head;
    }
    public void insertFirst(String x){
        DNode newNode= new DNode(x,head.rlink,head);
        head.rlink.llink=newNode;
        head.rlink=newNode;
    }
    public String deleteFirst(){
            Object temp=head.rlink.data;
            head.rlink.rlink.llink=head;
            head.rlink=head.rlink.rlink;
            return (String) temp;
    }
}