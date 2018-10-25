import java.math.BigInteger;
import java.util.*;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		BigInteger Big = BigInteger.valueOf(Integer.MAX_VALUE);
		
		while(sc.hasNext()){
			String A = sc.next(), Sign = sc.next(), C = sc.next();
			BigInteger BI1 = new BigInteger(A);
			BigInteger BI2 = new BigInteger(C);
			BigInteger F;
			if(Sign.equals("+")){
				F = BI1.add(BI2);
			}
			else{
				F = BI1.multiply(BI2);
			}
			System.out.println(A + " " + Sign + " " + C);
			if(BI1.compareTo(Big) > 0){
				System.out.println("first number too big");
			}
			if(BI2.compareTo(Big) > 0){
				System.out.println("second number too big");
			}
			if(F.compareTo(Big) > 0){
				System.out.println("result too big");
			}
		}
	}
	
}