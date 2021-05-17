package java.List;

class CircularList {
    private int length;
	private ListNode tail;
	//private ListNode head; *use head 
	
	public CircularList() { 
        length=0;
        tail=null;
		//head=new ListNode();
		//head.link=head;
	}

	public int size() {
		return length;
	}
	
	public void addFirst(Object x){
        ListNode newNode=new ListNode();
        newNode.data=x;
        if(tail==null)newNode.link=newNode;
        newNode.link=tail.link;
        tail.link=newNode;
    }

public void insert(ListNode p, Object x) {
		
	}
	
	public void addLast(Object x) {
	}

	public void delete(ListNode p) {
	}

public void print() {
}

    
        
}
