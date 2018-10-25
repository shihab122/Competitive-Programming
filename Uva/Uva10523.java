import java.util.Scanner;
import java.math.BigInteger;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		while(sc.hasNextInt()){
			int n, a;
			n = sc.nextInt();
			a = sc.nextInt();
			BigInteger b = BigInteger.valueOf(a);
			BigInteger sum = BigInteger.ZERO;
			
			for(int i = 1; i <= n; i++){
				BigInteger c = BigInteger.valueOf(i);
				c = b.pow(i);
				c = c.multiply(BigInteger.valueOf(i));
				sum = sum.add(c);
			}
			System.out.println(sum);
		}
	}
	
}