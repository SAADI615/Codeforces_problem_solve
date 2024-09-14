import java.util.Objects;
import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int test = input.nextInt();
        int i,n=0;
        String x;
        while(test>=0){
            test--;
            x = input.nextLine();
            if(x.equalsIgnoreCase("x++")){
                n++;
            }
            else if(x.equalsIgnoreCase("x--")){
                n--;
            }
            else if(x.equalsIgnoreCase("++x")){
                ++n;
            }
            else if(x.equalsIgnoreCase("--x")){
                --n;
            }
            else{
                continue;
            }
        }
        System.out.println(n);
    }
}