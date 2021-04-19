package week07;

class Term{
    private int coef;
    private int exp;
    public Term(int c,int e){
        this.coef=c;
        this.exp=e;
    }
    public int getCoef(){
        return this.coef;
    }
    public void setCoef(int c){
        this.coef=c;
    }
    public int getExp(){
        return this.exp;
    }
    public void setExp(int e){
        this.exp=e;
    }
}
public class Polynomial_2 {
    private Term[] terms;
    private int noOfTerms;
    public Polynomial_2 sMult(int c,int e){
        Polynomial_2 r= new Polynomial_2();
        int coef,exp;
        for(int i=0;i<this.noOfTerms;i++){
            coef=terms[i].getCoef()*c;
            exp=terms[i].getExp()+e;
            r.terms[i]=new Term(coef,exp);
        }
        r.noOfTerms=this.noOfTerms;
        return r;
    }
    public Polynomial_2 polyAdd(Polynomial_2 p){
        Polynomial_2 r=new Polynomial_2();
        int thisIndex=0,pIndex=0;
        while(thisIndex<noOfTerms&&pIndex<p.noOfTerms){
            if(this.terms[thisIndex].getExp()==p.terms[pIndex].getExp()){
                r.terms[thisIndex].setCoef(this);
            }
        }
    }
}