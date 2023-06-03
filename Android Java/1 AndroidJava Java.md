# Java 언어



## Java 언어의 탄생

- Green Project
    - 가전제품에 들어가는 소프트웨어를 개발할 수 있는 프로그래밍 언어를 개발하기 위해 시작된 프로젝트
    - 1991년 Sun사의 James Gosling에 의해 개발이 시작됨
    - Oak : Green Project를 통해 초기에 개발된 언어
- Java, Hot Java Project
    - 1994년 World Wide Web 등장
    - Oak에서 Java로 명칭 변경
    - Java, Hot Java Project 시작
- Java beta1, beta2
    - Netscape를 지원하기로 결정
    -Netscape : 웹브라우저
    - Java beta1, beta2 발표
- Java 정식 버전 발표
    - 1995년, Java 1.0 발표
    - 1997년, Java 1.1 발표
    - 1999년, Java 1.2 발표 → Java의 공식 명칭이 Java 2로 변경됨
    - 2000년, Java 1.3 발표 → Java 언어의 완성기
    - 2002년, Java 1.4 발표
    - 2004년, Java 5 발표 → Java 언어의 재 탄생기. 이때부터 버전 번호 체계가 변경됨
    - 2006년, Java 6 발표



## Java 언어의 종류

- Java 2 Platform, Standard Edition (J2SE)
    - 자바의 가장 기본이 되는 Edition
    - 모든 자바 프로그램은 J2SE에서 제공되는 컴파일러와 JRE를 사용한다
    - 용어
        - 컴파일러
          
            -개발자가 만든 소스코드를 실행 가능한 상태로 만들어준다
            
        - JRE (Java Runtime Environment)
          
            -Java 프로그램을 실행할 수 있는 실행 환경
            
    
- Java 2 Platform, Micro Edition (J2ME)
    - 모바일 장비를 위한 Edition
    - 휴대폰에 가장 적합한 버전
    - 개발 시 사용할 J2SE의 버전은 1.3이나 1.4버전이 가장 적합함
    - 사용하는 곳
        - LG U+ : J2ME의 라이선스를 구매해 탑제
        - SKT : J2ME의 상당 부분을 국내 시장에 맞게 재 프로그래밍하여 SK-VM이라는 이름으로 사용함
        - WIPI : Java 언어를 기반으로 만들어진 국내 이동통신 3사 통합 플랫폼
        -J2ME와 유사한 부분이 상당히 많지만 다른 점도 가지고 있다
        - Android : 스마트폰 전용 운영체제
        -J2ME 제품 군에는 속하지 않으며, Java 기반으로 만들어진 새로운 운영체제다
- Java 2 Platform, Enterprise Edition (J2EE)
    - 기업용 환경에서 서비스하기 위한 어플리케이션을 개발할 때 사용되는 버전
    - 기본 J2SE가 필요하며 최신 버전의 J2SE를 사용하는 것을 권장함
    - 주로 Web Application Sevice를 만들 때 사용됨
    - J2EE에서 제공하는 기술
        - Servlet : Web Service를 위해 제공되는 기술
        - JSP (Java Server Page) : Web Service를 위해 제공되는 기술
        -복잡한 Servlet 프로그래밍을 쉽게 할 수 있도록 각종 기술이 제공된다
        -내부적으로는 Servlet으로 변환되어 실행된다
        - EJB (Enterprise Java Beans) : Java에서 제공되는 분산 컴포넌트 기술로 비즈니스 로직이나 데이터, 메시지를 처리하는데 사용됨
        → 전체 프로그램 내에서의 작은 부품들로 생각하면 됨
        - RMI (Remote Method Invocation) : 프록시를 써서 원격에 있는 Java 객체의 메서드를 실행시키는 기술
        -Microsoft의 RPC와 유사한 기능
        - JNDI (Java Naming Directory Interface) : 자바 기술로 만들어진 객체에 이름으 붙여 찾을 수 있도록 단일 인터페이스를 제공
        - JDBC (Java Database Connector) : 여러 종류의 데이터베이스 시스템에 접근하는 단일 인터페이스를 제공
        - JCA (Java Connector Architecture) : 서로 다른 종류의 플랫폼을 통합할 수 있도록 독립적인 인터페이스를 제공
        - JMS (Java Message Service) : 여러가지 메시징 시스템에 대한 독립적인 인터페이스 제공



## Java 언어의 특징

- 단순성
    - C나 C++를 기반으로 탄생하여 기존의 개발자들에게 문법을 새로 공부하지 않고 접할 수 있다
    - C와 C++에서 사용하는 복잡한 부분을 제거하여 언어의 복잡성을 제거함
    - Garbage Collection을 제공하여 개발자로 하여금 메모리 관리에 대한 부분을 개발자가 직접하지 않아도 된다
- 객체 지향
    - 객체 지향 프로그래밍 기법(OOP)을 사용한다
    -OOP : Object Oriented Programming
    - 수 많은 객체들의 조합으로 하나의 프로그램이 만들어진다
    - 객체들은 서로 간에 독립적으로 동작하며 서로에게 명령을 주고 받을 수 있는 인터페이스를 두어 유기적으로 동작함
    - 유지 보수가 편하다
- 네트워크를 통한 분산 환경 시스템 개발 지원
    - 자바는 각종 네트워크에 관련된 라이브러리 지원함
    - 제공된 라이브러리를 통해 서버-클라이언트 구조의 서비스 개발 가능
    - 다른 컴퓨터에 있는 객체들을 원격으로 호출하여 사용할 수 있는 기능 지원
- Java Virtual Machine (JVM)
    - 자바 언어로 만들어진 프로그램은 운영체제와 직접적으로 동작하지 않고 중간에 JVM이라는 것을 통해 실행된다
    - 프로그램을 실해하는 프로그램(JVM)이 운영체제 별로 제공되고 개발자가 만든 프로그램은 JVM과의 연동을 통해 프로그램이 실행됨 → 개발자가 한 번 만든 프로그램은 서로 다른 운영체제에서도 실행 가능함
- 독립적인 플랫폼
    - 기존의 프로그래밍 방식에서는 개발자가 만든 프로그램은 각 운영체제에 맞게 각각의 제품을 만들어줘야하는 불편함이 있었다 → JVM을 통해 개발자는 한 번 만든 프로그램을 여러 운영체제에서 실행 시킬 수 있도록 제공됨
- 다중 쓰레딩
    - 하나의 프로그램에서 여러 개의 프로세서를 사용하여 동시에 여러 개의 작업을 수행할 수 있는 환경 제공
- 보안성
    - Applet과 같은 프로그래밍 방식을 이용하면 실행되는 프로그램의 코드들은 서버 컴퓨터에 있고 프로그램 실행 시 실행에 필요한 정보를 클라이언트 프로그램을 보내어 JVM을 통해 프로그램을 실행시킬 수 있는 환경 제공
    → 프로그램 실행에 필요한 정보와 이러한 정보를 바탕으로 실행을 시키는 JVM을 분리하여 보안성을 향상시킬 수 있다