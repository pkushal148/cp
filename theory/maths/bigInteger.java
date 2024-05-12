import java.util.*;
import java.math.BigInteger;
public class bigInteger
{
	public static void main(String[] args)
	{
		int a,b;
		BigInteger A,B;
		A=BigInteger.valueOf(80);
		String s="123456789098765";
		BigInteger C=A.add(new BigInteger(s));
		if(A.compareTo(C)<0)
		{
			System.out.println(C);
		}
		if(A.equals(C))
		{
			System.out.println(A);
		}
	}

}
