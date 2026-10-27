import java.util.*;

class Demo
{
    public static int divistion(int No1,int No2)
    {
        return No1/No2;
    }
}

class ExceptionDemo3
{
    public static void main(String A[])
    {
        Scanner sobj=new Scanner(System.in);

        int No1=0, No2=0, Ans=0;
        
        System.out.println("Enter First Number");
        No1= sobj.nextInt();

        System.out.println("Enter Second Number");
        No2= sobj.nextInt();

        Ans=Demo.divistion(No1, No2);  
        
        //Exception prone Code    
        System.out.println("Divison is: "+Ans);
    }
}