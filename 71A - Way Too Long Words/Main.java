
import java.util.Scanner;
 
public class Main{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int test = input.nextInt();
        int i,n;
        while(test>0){
            test--;
            String word = input.next();
            char one = word.charAt(0);
            n = (word.length()-1);
            char last = word.charAt(n);
 
            if(word.length()>10){
                System.out.println(one +""+ (word.length() - 2) + last);
            }
            else {
                System.out.println(word);
            }
        }
    }
}