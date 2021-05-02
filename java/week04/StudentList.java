package week04;

class Student {
    private int id;
    private String name;
    private int score;
    
    public int getScore(){
        return score;
    }
    public int getId(){
        return id;
    }
    public String getName(){
        return name;
    }
    

}
public class StudentList{
    private final Student[] sts;
    private int size;
    public StudentList(){
        sts=new Student[100];
        size=0;
    }
public void add(final Student s){
    sts[size]=s;
    size++;
}
public Student getById(int id){
    boolean flag=true;
    for(int i=0;i<size;i++){
        if(sts[i].getId()==sts[id].getId()){
            flag=false;
            return sts[i];
        }
    }return -1;
    
}
}