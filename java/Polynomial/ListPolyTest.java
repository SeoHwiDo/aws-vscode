package Polynomial;

public class ListPolyTest {
    public static void main(String args[]) {
        ListPolynomial f_x = new ListPolynomial();
        System.out.println("F(x)ispZero : " + f_x.ispZero());
        f_x.addTerm(4, 0);
        f_x.addTerm(1, 1);
        f_x.addTerm(2, 2);
        f_x.addTerm(3, 3);
        System.out.print("F(x) = ");
        f_x.print();
        System.out.println("F(x)ispZero : " + f_x.ispZero());
        ListPolynomial g_x = new ListPolynomial();
        g_x.addTerm(4, 3);
        g_x.addTerm(3, 2);
        g_x.addTerm(2, 1);
        g_x.addTerm(1, 0);
        System.out.print("G(x) = ");
        g_x.print();
        System.out.println("G(x)의 지수가 2인 항의 계수 : " + g_x.coef(2));
        System.out.println("G(x)의 차수 : " + g_x.maxExp());
        f_x.delTerm(3);
        System.out.print("F(x) = ");
        f_x.print();
        g_x = g_x.sMult(5, 1);
        System.out.print("G(x) = ");
        g_x.print();
        ListPolynomial fg_x = f_x.polyMult(g_x);
        System.out.print("FG(x) = ");
        fg_x.print();
        ListPolynomial fgg_x = fg_x.polyAdd(g_x);
        System.out.print("FGG(x) = ");
        fgg_x.print();
    }
}
