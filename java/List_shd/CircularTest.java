package List_shd;

public class CircularTest {
    public static void main(final String args[]) {
        CircularList c1 = new CircularList();
        c1.addFirst("test2");
        c1.print();
        c1.addFirst("test1");
        c1.print();
        c1.addLast("test3");
        c1.print();
        c1.addLast("test4");
        c1.print();
        System.out.print(c1.size()+"\n");
        ListNode l1= c1.listSerch("test2");
        c1.insert(l1, "test_mid");
        c1.print();
        System.out.print(c1.size()+"\n");
        c1.delete(l1);
        c1.print();
        System.out.print(c1.size()+"\n");
    }
}