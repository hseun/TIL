# Java 식별자

<aside>
💡 프로그램에서의 기능과 데이터 저장 공간을 각각 구분하기 위해 개발자가 지어주는 이름

</aside>

- 프로그램의 기능 = 클래스  /  메서드
- 데이터 저장 공간 = 변수
- 변수
  
    <aside>
    💡 프로그램에서 사용하는 값을 담아 놓는 기억 공간
    
    </aside>
    
    - 이 공간에 접근하기 위해서는 이름이 있어야한다 = 변수의 식별자
- 클래스
  
    <aside>
    💡 프로그램 내에서 독립적인 기능의 단위
    
    </aside>
    
    - 클래스를 사용하기 위해서는 이름이 있어야한다
- 메서드
  
    <aside>
    💡 클래스 내부에 있는 기능 단위
    
    </aside>
    
    - 메서드에 접근하기 위해서는 이름이 있어야한다





## 이름 짓는 규칙

- 개발자가 자바의 식별자를 만들 때는 다음과 같은 규칙을 따른다
- 길이의 제한이 없다
-그러나 너무 길게 작성할 경우 기억 공간같은 기능을 사용할 때 그 문장을 다 적어야해서 오타가 날 가능성이 있기 때문
- 첫 글자는 반드시 영문자, _, $로 시작해야 한다
- 대 소문자를 구분한다
- 클래스 명을 작성할 때는 첫 글자를 대문자로 해주는 것이 관례이다
- 변수 명, 메서드 명을 작성할 때는 첫 글자를 소문자로 해주는 것이 관례이다
- 자바는 유니코드 기반의 언어이므로 식별자를 한글로 사용해도 된다
-권장하지 않는다
- 예약어는 식별자로 사용할 수 없다





## 예약어

<aside>
💡 자바에서 이미 사용하고 있는 단어들

</aside>

- 예약어는 단어 하나 하나가 이미 뜻이 정해져 있어서 식별자로 사용할 수 없다
- 예약어의 종류
    - 기본 데이터 타입 : boolean, byte, char, short, int, long, float, double
    - 접근 지정자 : private, protected, public
    - 클래스와 관련된 것 : class, abstract, interface, extends, implements, enum
    - 객체와 관련된 것 : new, instanceof, this, super, null
    - 메소드와 관련된 것 : void, return
    - 제어문과 관련된 것 : if, else, switch, case, default, for, do, while, break, continue
    - 논리값 : true, false
    - 예외 처리와 관련된 것 : try, catch, finally, throw, throws
    - 기타 : transient, volatile, package, import, synchronized, native, final, static, strictfp, assert

|     abstract |     boolean |      break |        byte |        case |       catch |        char |
| --- | --- | --- | --- | --- | --- | --- |
|       class |       const |    continue |      default |          do |      double |        else |
|     extends |        final |       finally |         float |         for |        goto |          if |
|  implements |      import |   instanceof |          int |     interface |        long |      native |
|        new |     package |      private |    protected |       public |       return |       short |
|       static |       super |      switch | synchronized |         this |      throws |       throw |
|    transient |         try |        void |      volatitle |       while |  |  |