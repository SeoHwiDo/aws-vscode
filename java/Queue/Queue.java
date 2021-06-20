package Queue;
public class Queue{
    private String[] items;
    int front,rear,max=10;
    public Queue(){
        items = new String[max];
        rear = 0;
        front = 0;
    }
    public void enqueue(String x){
        if((rear+1)%max==front)return;
        //else if(rear==max+1) 
        items[rear]=x;
        rear = (rear+1)%max;
    }
    public String dequeue(){
        if (front==rear)return null;
        else{
            String temp=items[front]; 
            front=(front+1)%max;
            return temp;
        } 
    }
}