import java.util.Scanner;
import java.math.BigInteger;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		while(true){
			BigInteger a = sc.nextBigInteger();
			BigInteger z = BigInteger.ZERO;
			if(z.equals(a)) break;
			BigInteger b = a.mod(BigInteger.valueOf(10));
			a = a.divide(BigInteger.valueOf(10));
			b = b.multiply(BigInteger.valueOf(5));
			a = a.subtract(b);
			if(z.equals(a.mod(BigInteger.valueOf(17)))) System.out.println("1");
			else System.out.println("0");
		}
	}
	
}