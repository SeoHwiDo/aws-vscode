package Queue;

public class QueueTest {
    public static void main(String[] args) {
        Queue q1 = new Queue();
        NodeQueue nq1 = new NodeQueue();
        Degue d1 = new Degue();
        
        q1.enqueue("1");
        q1.enqueue("2");
        System.out.println(q1.dequeue());
        q1.enqueue("3");
        q1.enqueue("4");
        System.out.println(q1.dequeue());

    }
}
