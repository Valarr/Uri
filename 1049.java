import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        String A,B,C;
        Scanner input =new Scanner(System.in);
        A = input.next();
        B = input.next();
        C = input.next();
        
        if("vertebrado".equals(A)){
            if("ave".equals(B)){
                if("carnivoro".equals(C)){
                    System.out.println("aguia");
                }
                else System.out.println("pomba");
            }
            else{
                if("onivoro".equals(C)){
                    System.out.println("homem");
                }
                else System.out.println("vaca");
            }
        }
        else{
            if("inseto".equals(B)){
                if("hematofago".equals(C)){
                    System.out.println("pulga");
                }
                else System.out.println("lagarta");
            }
            else{
                if("hematofago".equals(C)){
                    System.out.println("sanguessuga");
                }
                else System.out.println("minhoca");
            }
        }
    }
    
}
