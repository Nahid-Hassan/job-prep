* In java, it is possible to overload main() method, but JVM only call default main() method. To call overloaded main method you need call from default main() method.
* Construction has not any return type. But implicitly a java constructor return the current class instance. 
* Private constructor are used in SingleTon design pattern. It is used when a class has only one object.

```java
public class Singleton {
    private static Singleton instance;

    private Singleton() {
        // Private constructor
    }

    public static Singleton getInstance() {
        if (instance == null) {
            instance = new Singleton();
        }
        return instance;
    }
}
```