package hola;



public class prueba{ 

    static void iii(){
        int x=0;
        while (x<2){
            for(int i=0;i<10;i++){
                System.out.print("I");
            }
            System.out.println();
            x++;
        }
        x=0;
        while (x<4){
            
            System.out.println("    II");
            
           // System.out.println();
            x++;
        }  
        x=0;
        while (x<2){
            for(int i=0;i<10;i++){
                System.out.print("I");
            }
            System.out.println();
            x++;
        }    
    }
    static void pp(){
        for(int i=0;i<8;i++){
            System.out.println("PP");
        }
    }
public static void main(String[] args) {
iii();
pp();
System.out.println("holaa");

}
}