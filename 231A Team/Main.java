import java.util.Scanner;
 
public class Main{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int test = input.nextInt();
        int i,n=0;
        while(test>0){
            test--;
            int x= input.nextInt();
            int y= input.nextInt();
            int z= input.nextInt();
            if((x+y+z)>=2){
                n++;
            }
 
        }
        System.out.println(n);
    }
}