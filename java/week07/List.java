package week07;

public class List {
    private char[] array;
    private int size;
    private static final int MAX=100;
    public List(){
        this.size=0;
        this.array= new char[MAX];
    }
    public boolean isEmpty(){
        if(array[0]==0) return true;
        else return false;
    }
    public int length(){
        while(true){
            if(array[this.size]==0){
                return this.size;
            }
            this.size++;
        } 
    }
    public char retrive(int j){
        return array[j];
    } 
    public void replace(int j,char item){
        array[j]=item;
    }
    public void replaceByElem(char c,char c1){
        for(int i=0;i<this.size;i++){
            if(c==array[i]){
                array[i]=c1;
            }
        }
    }
    
    public void delete(int j){
        int i=j;
        do{
            array[i]=array[i+1];
            i++;
        }while(i<this.size);
        this.size--;
    }
    public void deleteByElem(char c){
        int i=0;
        for(;array[i]!=c;i++);
        do{
            array[i]=array[i+1];
            i++;
        }while(i<this.size);
        this.size--;
    }
    public void insert(int j,char k){
        for(int i=this.size;i>=j;i--){
            array[i+1]=array[i];
        }
        array[j]=k;
        this.size++;
    }
    
    public void print(){
        for(int i=0;i<this.size;i++){
            System.out.printf("%c",array[i]);
        }
        System.out.println();
    }
}