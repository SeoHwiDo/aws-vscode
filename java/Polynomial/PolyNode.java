package Polynomial;

public class PolyNode {
    int coef;
    int exp;
    PolyNode link;
    
    public PolyNode(){
        this.coef=0;
        this.exp=0;
        this.link=null;
    }

    public PolyNode(int coef, int exp) {
        this.coef=coef;
        this.exp=exp;
        this.link=null;
    }
    public PolyNode(int coef, int exp, PolyNode link){
        this.coef = coef;
        this.exp = exp;
        this.link = link;
    }
    
    public int getCoef() {
        return this.coef;
    }
    
    public int getExp() {
        return this.exp;
    }


}
