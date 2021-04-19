package week07;

public class ListTest {
    public static void main(String args[]){
        List list=new List();
        System.out.printf("Empty:%b\n",list.isEmpty());
        char[] lst={'a','b','c','d','e','f','g','h','i','j'};
        for(int i=0;i<lst.length;i++){
            list.insert(i, lst[i]);  
        }
        System.out.printf("Empty:%b \nlength:%d\n",list.isEmpty(),list.length());
        list.print();
        list.insert(1, 'k');
        list.print();
        System.out.printf("length:%d \nindex 1:%c\n",list.length(),list.retrive(1));
        list.replace(2, 'l');
        list.print();
        list.replaceByElem('a','m');
        list.print();
        System.out.printf("length:%d\n",list.length());
        list.delete(10);
        list.print();
        System.out.printf("length:%d\n",list.length());
        list.deleteByElem('e');
        list.print();
        System.out.printf("length:%d\n",list.length());
    }
}
