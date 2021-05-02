package week07;

public class PolyTest {
    public static void main(String args[]){
        Polynomial pol1=new Polynomial();
        Polynomial pol2=new Polynomial();
        Polynomial_2 pol_2_1= new Polynomial_2();
        for(int i=0;i<4;i++){
            pol1.term(i+1, i);
        }
        for(int i=4;i<8;i++){
            pol2.term(i+1, i);
        }
        pol1.printPol1(pol1);
        pol1.printPol1(pol1.sMult(3, 2));
        pol1.printPol1(pol1.polyAdd(pol2));
        System.out.println(pol_2_1.sMult(1, 2));

        
    }
}
