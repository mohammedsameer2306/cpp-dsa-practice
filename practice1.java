
import java.util.Scanner;
public class practice1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int range = sc.nextInt();
        int max = 0;
        for(int n = 0; n < 5; n++){
         for (int i = 0; i < range; i++) {
            System.out.print("*");
         }
         
         
         for(int j = 0; j < max; j++){
            System.out.print(" ");
        }
         for (int k = 0; k < range; k++) {
            System.out.print("*");
         }
         range--;
         max+=2;
         System.out.println();
        }
        range = 1;
        max = 8;
        for(int n = 0; n < 5; n++){
         for (int i = 0; i < range; i++) {
            System.out.print("*");
         }
         
         
         for(int j = 0; j < max; j++){
            System.out.print(" ");
        }
         for (int k = 0; k < range; k++) {
            System.out.print("*");
         }
         range++;
         max-=2;
         System.out.println();
        }

    }


}


