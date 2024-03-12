import java.lang.reflect.Field;
import java.lang.reflect.Method;

public class Main {
    public static void main(String[] args) {
        try {
            ReflectionExample example = new ReflectionExample();

            /* Accès à la méthode et exécution */
            Method showMethod = ReflectionExample.class.getMethod("showAttribute");
            showMethod.invoke(example);

            /* Modification d'un attribut */
            Field field = ReflectionExample.class.getDeclaredField("attribute");
            field.setAccessible(true);
            field.set(example, "Modified Value");

            /* Vérification de la modification */
            showMethod.invoke(example);

            /* Invocation d'une méthode avec des paramètres */
            Method changeMethod = ReflectionExample.class.getMethod("changeAttribute", String.class);
            changeMethod.invoke(example, "Changed Again");

            /* Vérification de la modification */
            showMethod.invoke(example);

        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}