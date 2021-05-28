package GenList;

public class GenList {
    private ListNode head; // 리스트의 첫 번째 ListNode에 대한 참조를 저장

    void insertData(Object x) { // 리스트 head 다음에 새로운 ListNode를 삽입
        ListNode newNode = new ListNode(x, head);
        head = newNode;
    } // insertData()

    void printGL() { // 일반 리스트를 프린트
        ListNode p = head;
        System.out.print("("); 
        while (p != null) {
            if (p.data instanceof GenList) {
                ((GenList) p.data).printGL();
            } else {
                System.out.print(p.data); 
            }
            if ((p = p.link) != null) {
                System.out.print(", "); 

            }
        }
        System.out.print(")"); 
    } // printGL()

    public GenList copy() { // 공용 서브리스트가 없는 경우.
        GenList gl = new GenList();
        gl.head=theCopy(head);
        return gl;   
    }

    private ListNode theCopy(ListNode h){
        ListNode p=null;
        Object q;
        ListNode r;
        if(h!=null){
            if(!(h.data instanceof GenList)) q=h.data;
            else q=((GenList)h.data).copy();
            r=theCopy(h.link);
            p=new ListNode();
            p.data=q;
            p.link=r;
        }
        return p;
    }
    public boolean equal(GenList T) {
       return theEqual(this.head, T.head);
    }
    private boolean theEqual( ListNode h, ListNode t) {
        if(h==null&&t==null) return true;
        if((h==null&&t!=null)||(h!=null&&t==null)) return false;
        if(h.data instanceof GenList && t.data instanceof GenList){
            if(((GenList)h.data).equal((GenList)t.data)) return theEqual(h.link, t.link);
            else return false;
        }else if(!(h.data instanceof GenList) && !(t.data instanceof GenList)){
            if(h.data.equals(t.data)) return theEqual(h.link, t.link);
            else return false;
        }else return false;
    }
    

} // end GenList class