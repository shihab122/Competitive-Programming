import java.util.Scanner;
import java.math.BigInteger;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		while(sc.hasNextBigInteger()){
			BigInteger a = sc.nextBigInteger();
			BigInteger b = sc.nextBigInteger();
			a = a.multiply(b);
			System.out.println(a);
		}
	}
	
}