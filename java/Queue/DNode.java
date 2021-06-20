package Queue;

public class DNode {
    Object data;
    DNode rlink;
    DNode llink;
    public DNode() {
         data = null;
         rlink = null;
         llink = null;
    }
    public DNode(Object n) {
         data = n;
         rlink = null;
         llink = null;
    }
    public DNode(Object n, DNode r) {
         data = n;
         rlink = r;
         llink = null;
    }
    public DNode(Object n, DNode r, DNode l) {
        data = n;
        rlink = r;
        llink = l;
   }
    public void putData(Object n){
         data=n;
    }
    public Object getData(){
         return data;
    }
} 
