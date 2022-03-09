package pjava;

public class asig {
    
    private int temas, curso;

    public asig(){}

    public asig (int temas, int curso){
        this.temas=temas;
        this.curso=curso;
    }

    public int getCurso(){
        return this.curso;
    }

    public int getTemas(){
        return this.temas;
    }


}
