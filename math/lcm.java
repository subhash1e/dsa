class Tester {
	public static void main(String[] args) {
		// Implement your code here 
		int n;
		n = 1623;
		
		int tmp = n,sum = 0;
		boolean even = false;
		while(tmp!=0){
		    if(even){
		        int rem = tmp%10;
		        sum+= rem*rem;
		    }
		    
		    even = !even;
		    tmp/=10;
		}
		if(sum%3==0){
		    System.out.println("The number " + n + " is a lucky number");
		}else{
		      System.out.println("The number " + n + " is not a lucky number");
		}
	}
}
