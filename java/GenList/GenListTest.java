package GenList;

public class GenListTest {
    public static void main(String[] args){
        GenList p = new GenList();
           p.insertData(82);
           p.insertData("Korea");
           GenList q = new GenList();
           q.insertData(p);
           q.insertData("Seoul");
           GenList r = new GenList();
           r.insertData("Busan");
           GenList L = new GenList();
           L.insertData(r);
           L.insertData(q);
           L.insertData("City");
           L.printGL();
           System.out.println();
         // end main()
      // 

    }
    
}
