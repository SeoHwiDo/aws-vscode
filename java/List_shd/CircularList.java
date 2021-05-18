package List_shd;

class CircularList {
    private int length;
	private ListNode tail;
	public CircularList() { 
        length=0;
        tail=null;
	}
	public int size() {
		return length;
	}
	public void addFirst(Object x){
        ListNode newNode=new ListNode(x);
        if(tail==null){
			newNode.link=newNode;
			tail=newNode;
		}else {
			newNode.link=tail.link;
			tail.link=newNode;		
		}
		length++;
	}
	public void insert(ListNode p, Object x) {
		ListNode newNode= new ListNode(x);
        if (tail==null){
            newNode.link=newNode;
        }else if(p==null){
            newNode.link=tail.link;
            tail.link=newNode;
        }else{
            newNode.link=p.link;
            p.link=newNode;
        }
        length++;
	}
	public void addLast(Object x) {
		ListNode newNode=new ListNode(x);
        if(tail==null){
            newNode.link=newNode;
			tail=newNode;
        }else{
			ListNode p= newNode;
			p=tail.link;//맨앞
        	tail.link=newNode;
			tail=tail.link;
			tail.link=p;
		}
        length++;
	}
	public void delete(ListNode p) {
		if(tail==null)return;
        else if(p==null)tail.link=tail.link.link;
        else p.link=p.link.link;
        length--;
	}
	public ListNode listSerch(Object x){
        ListNode p=tail;
        while(p.link.data!=tail.data){
            if(p.data.equals(x))return p;
            p=p.link;
        }
        return p;
    }
	public void print() {
		ListNode p=tail;
		System.out.print("(");
		while(true){
			if(p.link.data==tail.data){
				System.out.print(p.link.data);
				break;
			} 
			System.out.print(p.link.data+",");
			p=p.link;
		}System.out.print(")\n");
	}

}
