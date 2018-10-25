import java.util.Scanner;
import java.math.BigInteger;

class Main{
	public static void main(String[] args){
		BigInteger[] dp = new BigInteger[1005];
		dp[0] = new BigInteger("1");
		dp[1] = new BigInteger("2");
		dp[2] = new BigInteger("5");
		
		for(int i = 3; i <= 1002; i++) 
			dp[i] = dp[i - 1].add(dp[i - 1].add(dp[i - 2].add(dp[i - 3])));
		
		Scanner sc = new Scanner(System.in);
		while(sc.hasNext()){
			int a = sc.nextInt();
			System.out.println(dp[a]);
		}
	}
	
}