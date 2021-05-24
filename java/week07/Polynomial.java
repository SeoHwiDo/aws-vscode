package week07;
public class Polynomial {
    private int coef[];
    private int degree;

    public Polynomial() {
        this.coef = new int[100];
    }

    public void term(int c, int e) {
        this.coef[e] = c;
        this.degree = coef.length - 1;
    }

    public Polynomial sMult(int c, int e) {
        Polynomial r = new Polynomial();
        for (int i = 0; i <= degree; i++) {
            if (this.coef[i] != 0) {
                r.coef[i + e] = c * this.coef[i];
            }
        }
        this.degree = coef.length - 1;
        return r;
    }

    public Polynomial polyAdd(Polynomial p) {
        Polynomial r = new Polynomial();
        for (int i = 0; i <= degree; i++) {
            r.coef[i] = this.coef[i] + p.coef[i];
        }
        this.degree = coef.length - 1;
        return r;
    }

    public void printPol1(Polynomial p) {
        String str = "";
        for (int i = degree; i >= 0; i--) {
            if (p.coef[i] != 0) {
                if (p.coef[i + 1] != 0)
                    str += "+";
                str += p.coef[i];
                if (i != 0)
                    str += "X^" + i;
            }
        }
        System.out.println(str);
    }
}