import org.junit.Test;

import static org.junit.Assert.assertEquals;

public class BMICalculatorTest {
    /**
     * test 1 for adult BMI.
     */
    @Test
    public void testAdultBMI(){
        Adult adult = new Adult("Dosh", 30, 80, 1.8);
        double bmi = adult.calculateBMI();
        assertEquals(24.69, bmi, 0.01);
    }

    /**
     * test 2 for child BMI.
     */
    @Test
    public void testChildBMI(){
        Child child = new Child("Jane", 8, 35, 1.3);
        double bmi = child.calculateBMI();
        assertEquals(27.22, bmi, 0.01);
    }

}
