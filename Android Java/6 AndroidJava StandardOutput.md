# Java 기본 출력



## 출력문

- 콘솔 기반의 프로그램에서는 수행된 결과가 콘솔로 출력된다
콘솔 기반의 프로그램 = J2SE 기반 프로그램
- 출력하고 싶은 내용은 제공되어지는 기본 출력문을 통해 출력할 수 있다
- 컴퓨터가 수행한 결과를 사용자에게 보여주는 역할을 하는 중요한 요소

<aside>
💡 System.out.println( )

</aside>

- ( ) 안의 내용을 출력하고 한 줄 내려준다

<aside>
💡 System.out.print( )

</aside>

- ( ) 안의 내용을 출려갛고 한 줄 내려주지 않는다



### 자바의 표준 출력문

```java
public class print {

	public static void main(string[] args) {
		// ( ) 안의 내용을 출력하고 한 줄 내려준다
		System.out.println("Hello");
		// ( ) 안의 내용을 출력하고 한 줄 내려주지 않는다
		System.out.print("World");
		System.out.print("!");
		// System.out.println을 사용할 때 ( ) 안에 아무런 내용도 적지 않으면
		// 아무런 내용을 출력하지 않고 밑으로 내려준다 (c언어의 '\n')
		System.out.println();
		System.out.print("Android");
		// 숫자를 출력한다
		System.out.println(100); // ""로 묶지 않는 것은 숫자만 가능
	}
}
```

- 출력결과
  
    Hello
    
    World!
    
    Android100