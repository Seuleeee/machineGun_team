# 구조체를 활용한 정렬 프로그램

## 1. 요구사항 분석
* 주어진 팀의 정보(팀아이디, 팀이름, 회사명)를 활용하여, 각각의 조건에 맞게 정렬한다.
* 구조체를 활용하여 팀 정보를 구조체 변수로 선언한다.
* 프로그램 실행시 숫자를 활용해 메뉴를 선택하며, 종료를 선택할 때 까지 반복 실행한다.
  
## 2. 구조설계
* 구조체 선언 (typedef 사용)
* 팀 정보(팀아이디, 팀이름, 회사명)를 배열로 저장
* 팀아이디, 팀이름, 회사명 각각의 조건으로 정렬하는 함수 선언
* 정렬시, 버블정렬 활용
  * 숫자는 단순 크기비교, 문자는 strcmp() 활용
* 