class Demo
{
    public Demo()
    {
        System.out.println("Inside Default Constructor");
    }

     public Demo(int i,int j)
    {
        System.out.println("Inside parametrised Constructor");
    }

}


class Constructor_Demo
{
    public static void main(String A[])
    {

        Demo dobj=new Demo();
        Demo dobj2=new Demo(11,21);
        

    }

}