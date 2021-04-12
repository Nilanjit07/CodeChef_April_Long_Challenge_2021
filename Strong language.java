import java.util.*;
class StrongLanguage 
{
	public static void main(String[] args) 
  {
	  Scanner scan = new Scanner(System.in);
		int t = Integer.parseInt(scan.next());
		while(t-->0) 
    {
			int N = Integer.parseInt(scan.next());
			int K = Integer.parseInt(scan.next());
			String S = scan.next();
			char c[] = S.toCharArray();
			int count=0;
			for(int i=0; i<c.length; i++) 
      {
				if(count!=K) 
        {	
					if(c[i]=='*')
						count++;
					else
						count=0;
				}
				else
					break;
			}
			if(count==K)
				System.out.println("YES");
			else
				System.out.println("NO");
		}
	}
}
