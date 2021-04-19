package week07;

public class Polynomial {
    private int coef[];
    private int degree;
    public void term(int c,int e){
        this.coef[e]=c;
    }
    public Polynomial sMult(int c,int e){
       Polynomial r= new Polynomial();
       for(int i=0;i<=degree;i++){
           if(this.coef[i]!=0){
               r.coef[i+e]=c*this.coef[i];
           }
       } return r;
    }
    public Polynomial polyAdd(Polynomial p){
        Polynomial r= new Polynomial();
        for(int i=0;i<=degree;i++){
            r.coef[i]=this.coef[i]+p.coef[i];
        }
        return r;
    }
}