package Polynomial;

public class ListPolynomial {
    private PolyNode firstNode;
    private PolyNode lastNode;

    public ListPolynomial() {
        firstNode = null;
        lastNode = null;
    }

    public boolean ispZero() {
        if (firstNode == null)
            return true;
        else
            return false;
    }

    public int coef(int e) {
        PolyNode p = firstNode;
        while (p.getExp() != e) {
            p = p.link;
        }
        return p.coef;
    }

    public int maxExp() {
        return firstNode.getExp();
    }

    public void addTerm(int c, int e) {
        PolyNode newNode = new PolyNode(c, e);
        if (firstNode == null) {
            firstNode = newNode;
            lastNode = newNode;
            return;
        }
        if (e > firstNode.exp) {
            newNode.link = firstNode;
            firstNode=newNode;
        } else {
            PolyNode p = firstNode;
            while (p.link != null) {
                if (e > p.link.exp) {
                    newNode.link = p.link;
                    p.link = newNode;
                    return;
                }
                p = p.link;
            }
            p.link = newNode;
            lastNode = newNode;
        }
    }

    public void delTerm(int e) {
        PolyNode p = firstNode;
        if (p == null)
            return;
        if (p.link == null)
            p = null;
        else {
            while (p.link.link != null) {
                if(p.exp==e){
                    p.link = p.link.link;
                    return;
                }
                p = p.link;
            }
        }
    }

    public ListPolynomial sMult(int c, int e) {
        PolyNode p = firstNode;
        ListPolynomial r = new ListPolynomial();
        while (p != null) {
            r.appendTerm(c*p.coef, e + p.exp);
            p = p.link;
        }
        return r;
    }

    public ListPolynomial polyMult(ListPolynomial p) {
       ListPolynomial r = new ListPolynomial();
       ListPolynomial s, t;
       PolyNode q = p.firstNode;
       while(q!=null){
           s=r;
           
           t=sMult(q.coef,q.exp);
           
           r = s.polyAdd(t);
           
           q=q.link;
           
       }
       return r;
    }

    public void print() {
        PolyNode p = firstNode; 
        String str = "";
        while (p != null) {
            str += p.coef;
            if (p.exp != 0) {
                str+="X^"+p.exp;
            }
            if(p.link!=null){
                str+=" + ";
            }
            p=p.link;
        }
         System.out.println(str);  
    }

    private void appendTerm(int c, int e) {
        PolyNode newNode = new PolyNode(c, e);
        if (firstNode == null) {
            firstNode = newNode;
            lastNode = newNode;
        } else {
            lastNode.link = newNode;
            lastNode = newNode;
        }
    }

    public ListPolynomial polyAdd(ListPolynomial poly) {
        ListPolynomial r = new ListPolynomial();
        PolyNode p = firstNode;
        PolyNode q = poly.firstNode;
        while (p != null && q != null) {
            if (p.exp == q.exp) {
                r.appendTerm(p.coef + q.coef, p.exp);
                q = q.link;
                p = p.link;
            } else if (p.exp < q.exp) {
                r.appendTerm(q.coef, q.exp);
                q = q.link;
            } else {
                r.appendTerm(p.coef, p.exp);
                p = p.link;
            }
        }
        while (q != null) {
            r.appendTerm(q.coef, q.exp);
            q = q.link;
        }
        while (p != null) {
            r.appendTerm(p.coef, p.exp);
            p = p.link;
        }
        return r;
    }
}
