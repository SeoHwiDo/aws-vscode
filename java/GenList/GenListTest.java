package GenList;

public class GenListTest {
    public static void main(String[] args) {
        GenList me = new GenList();
        me.insertData(20205188);
        me.insertData("서휘도");
        me.printGL();
        System.out.println();
        GenList univ = new GenList();
        univ.insertData(me);
        univ.insertData("hallym");
        univ.printGL();
        System.out.println();
        GenList city = new GenList();
        city.insertData(univ);
        city.insertData("ChunChun");
        city.printGL();
        System.out.println();
        GenList copy_city = city.copy();
        copy_city.printGL();
        System.out.println();
        System.out.println(copy_city.equal(city));

    }

}
