import java.util.Scanner;
import java.math.BigInteger;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for(int tes = 1; tes <= t; tes++){
			int x = sc.nextInt();
			int y = sc.nextInt();
			if(x > 0){
				String z = Integer.toString(x);
				BigInteger b = new BigInteger(z, y);
				while(true){
					--x;
					if(x <= 0) break;
					z = Integer.toString(x);
					BigInteger c = new BigInteger(z, y);
					b = b.multiply(c);
					System.out.println(x);
				}
				System.out.println(b.toString(y));
				String val = b.toString(y);
				
				System.out.println(val.length());
			}
			else System.out.println("1");
		}
	}
	
}