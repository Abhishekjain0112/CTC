
import java.util.*;
public class ArraylistRemove
{
	public static void main(String[] args) {
   ArrayList<Integer>Al=new ArrayList<Integer>(5);

     System.out.println("Size :" + Al.size());
	
	for(int i=1;i<=10;i++){
	    Al.add(i);
	}
	
	
	    for(int i:Al)   
		    System.out.print("  "+i);
	
		System.out.println();
		Al.remove(new Integer(5));//remove the value 
	//	Al.remove(5);// remove the value at index number  5
	  for(int i:Al)   
	        System.out.print("  "+i);
		
		
	}
}
