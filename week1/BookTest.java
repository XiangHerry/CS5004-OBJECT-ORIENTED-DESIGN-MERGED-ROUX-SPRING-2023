

/******
 Name: Chenyi XIANG
 Assignment: 5004 Lab 0
 Date: 01/11/2023
 Notes: ICE part 05
 ******/


/**
 * A JUnit test class for the Book class.
 */
import org.junit.Before;
import org.junit.Test;


import static org.junit.Assert.assertEquals;
public class BookTest {

    private Book Eddie;
    private Person john;

    @Before
    public void setUp() {
        john = new Person("john", "doe", 1989);

        Eddie = new Book("GoodBook", john,2000);
    }
    /**
     * A JUnit test class for the getPrice() method.
     */
    @Test
    public void getPrice() { assertEquals(2000.00, Eddie.getPrice(), 0.01);}

    /**
     A JUnit test class for the getPrice() method.
     */
    @Test
    public void testAuthor() {
        assertEquals(john, Eddie.getAuthor());
    }

    /**
     A JUnit test class for the getTitle() method.
     */
    @Test
    public void getTitle() {
        assertEquals("GoodBook", Eddie.getTitle());
    }

}
