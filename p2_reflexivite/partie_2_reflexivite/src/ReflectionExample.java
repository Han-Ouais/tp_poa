public class ReflectionExample {

    private String attribute = "Initial Value";

    public void showAttribute() {
        System.out.println(attribute);
    }

    public void changeAttribute(String newValue) {
        attribute = newValue;
    }

}
