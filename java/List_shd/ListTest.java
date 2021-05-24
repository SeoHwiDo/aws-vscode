package List_shd;

public class ListTest {
    public static void main(String args[]) {
        LinkedList L1 = new LinkedList(),
                    L2 = new LinkedList();

        L1.addFirst("node01");
        L1.addLast("node03");
        ListNode node01 = L1.listSerch("node01");
        L1.insert(node01,"node02");
        L1.print();

        L2.addFirst("node04");
        L2.addLast("node06");
        ListNode node04 = L2.listSerch("node04");
        L2.insert(node04,"node05");
        L2.print();

        L1.addLast("nodeX"); 
        L1.print();
        L2.addLast("nodeY");
        L2.print();
        L1.delete(node01);
        L1.print();
        L1.print();
        L2.reverse(); 
        L2.print();    
        L2.deleteLastNode();     
        L2.print();
        LinkedList L3=LinkedList.concatList(L1,L2);    
        L3.print();
        
        System.out.println("L1.length:"+L1.size());
        System.out.println("L2.length:"+L2.size());
        System.out.println("L3.length:"+L3.size());
          
    }
} // end LinkedListTest class

