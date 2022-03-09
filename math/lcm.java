class Tester {
	public static void main(String[] args) {
		// Implement your code here 
		int num1,num2;
		num1 =5;
		num2 =10;
		if(num2>num1){
		    int tmp = num2;
		    num2 = num1;
		    num1 = tmp;
		}
		int temp = num1;
		while(temp%num2!=0){
		    temp+=num1;
		}
		System.out.println(temp);
	}
}

