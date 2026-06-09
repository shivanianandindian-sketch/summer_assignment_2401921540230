interface LibraryUser{
     void registerAccount();
     void requestBook();
};

class kidUser implements LibraryUser{
    int age;
    String bookType;
    public void registerAccount()
    {
       if(age<12){
          System.out.println("You have successfully registered under a kids account.");
        }
        if(age>12){
           System.out.println("Sorry,Age must be less than 12 to register as a kid.");
        }
    }
    public void requestBook(){
        if("Kids".equalsIgnoreCase(bookType)){
            System.out.println("Book issued successfully, please return the book within 10 days.");
        }
        else{
            System.out.println("Oops , you are allowed to take only kids book."); 
        }
    }

}

class AdultUser implements  LibraryUser{
    int age;
    String bookType;
    public void registerAccount()
    {
       if(age>12){
          System.out.println("You have successfully registered under an Adult account.");
        }
        if(age<12){
           System.out.println("Sorry,Age must be more than 12 to register as an adult.");
        }
    }
    public void requestBook(){
        if("Fiction".equalsIgnoreCase(bookType)){
            System.out.println("Book issued successfully, please return the book within 7 days.");
        }
        else{
            System.out.println("Oops , you are allowed to take only adult fiction book.");
        }
    }

}
public class LibraryInterfaceDemo{
    public static void main(String[] args) {
        kidUser child = new kidUser();
        AdultUser mature = new AdultUser();

        //Test case #1
        System.out.println("******Kiduser account test case******");
        child.age=10;
        child.registerAccount();
        child.age=18;
        child.registerAccount();

        System.out.println("");
        child.bookType="Kids";
        child.requestBook();
        child.bookType="Fiction";
        child.requestBook();


        //Test case #2
        System.out.println("");
        System.out.println("");
        System.out.println("******AdultUser account test case");
        mature.age=5;
        mature.registerAccount();
        mature.age=23;
        mature.registerAccount();

        System.out.println("");
        mature.bookType="Kids";
        mature.requestBook();
        mature.bookType="Fiction";
        mature.requestBook();
    }  
}
