public class Base
{
    public int A,B;

    public Base()
    {
        System.out.println("Inside Base class");

    }

  public void Fun()
  {
    System.out.println("Inside Base Fun");
  }

}

class Derived  extends Base
{

    public int x,y;

    public Derived ()
    {
        System.out.println("Inside Derived Constructor");

    }

    public void Gun()
    {
        System.out.println("Inside Derived Gun");
    }

}

class DerivedX extends Derived
{
    public int P,Q;

    public DerivedX()
    {
        System.out.println("Inside derivedx Constructor");
    }
    public void sun()
        {
            System.out.println("Inside derivedx Sun");
        }
    
}

public class Hiraracal
{

    public static void main(String[] args) {
        System.out.println("Inside main method");
        Derived dobj1=new Derived();
        
        DerivedX dobj2=new DerivedX();

        dobj1.Fun();
        dobj1.Gun();
        
        dobj2.Fun();
        dobj2.Gun();
    } 

}


