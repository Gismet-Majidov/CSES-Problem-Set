import java.util.Scanner;

public class WeirdAlgorithm {
    public static void main(String[] args){
        int n = new Scanner(System.in).nextInt();
        while(n > 1){
            System.out.print(n + " ");
            if(n%2 == 0) n/=2;
            else n = n*3 + 1;
        }
        System.out.print(1);
    }
}
