class Base
{
    public int i,j;

    public Base()
    {
        System.out.println("Inside base Constructor");
    }

    public void fun()
    {
        System.out.println("Inside Base Fun");

    }
}

class Derived extends Base
{
    public int x,y;  

    public Derived()
    {
        System.out.println("Inside Derived Constructor");
    }

    public void sun()
    {
        System.out.println("Inside Derived sun");
    }
}

class DerivedX extends Base
{
    public int a;

    public DerivedX()
    {
        System.out.println("Inside DerivedX Constructor");
    }

    public void funx()
    {
        System.out.println("Inside DerivedX funx");
    }
}
class Hierarchical
{
    public static void main(String A[])
    {
      //  DerivedX dobj1=new DerivedX();
        Derived dobj2=new Derived();

    }
}