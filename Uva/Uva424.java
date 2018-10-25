import java.util.Scanner;
import java.math.BigInteger;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		BigInteger sum = BigInteger.ZERO;
		while(true){
			BigInteger z = BigInteger.ZERO;
			BigInteger a = sc.nextBigInteger();
			if(a.equals(z)) break;
			sum = sum.add(a); 
		}
		System.out.println(sum);
	}
	
}