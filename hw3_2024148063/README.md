# Poketmon Master Kiung
## 2024-02 OOP Assignment3 in Yonsei University

1. GUI 클래스
GUI 클래스는 게임 화면을 관리하는 클래스입니다. getGUI(int pokemon1, int pokemon2) 함수는 
두 포켓몬 번호를 입력받아 해당 포켓몬들의 정보를 화면에 표시하는 역할을 합니다. 
이 클래스는 사용자 인터페이스를 담당하는 클래스이고 안에 getgui로 규칙에 따라 인터페이스를
출력하도록 했습니다

2. Pokemon 클래스
Pokemon 클래스는 포켓몬의 여러 속성들을 관리하는 클래스입니다. 클래스 내부에는 
1포켓몬의 고유 번호(pokemon_num1, pokemon_num2), 이름(name1, name2), 타입(type1, type2)
기술(skill1_0, skill1_1, skill1_2, skill1_3, skill2_0, skill2_1, skill2_2, skill2_3),
효과(eff, eff1, eff2), HP(HP1, HP2), 그리고 기술 사용 횟수(count1_0, count1_1, count1_2,
count1_3, count2_0, count2_1, count2_2, count2_3) 등이 포함되어 있습니다. 
또한, 각 포켓몬은 damage1_0, damage1_1, damage1_2, damage1_3 등으로 기술의 
피해량을 저장합니다.

3. 기술 사용
use_skill() 함수는 포켓몬이 기술을 사용할 때 호출됩니다. 
포켓몬의 턴을 고려하여 해당 턴에 사용되는 기술을 출력하고, 
기술의 효과를 계산합니다. 만약 기술이 실패하면 실패 메시지가 출력됩니다. 
각 기술은 effect() 함수에서 효과가 적용되며, 이 함수는 기술의 종류에 따라 
피해량을 계산하고 그 효과를 다음 인터페이스 출력할 떄 고려합니다

5. 턴 관리
Pokemon 클래스 내에는 static int turn = 1;이라는 정적 변수가 있습니다. 
이 변수는 어떤 포켓몬이 턴을 수행할지를 나타내며, turn 값이 1이면 첫 번째 포켓몬이
-1이면 두 번째 포켓몬이 턴을 진행합니다. turn_check() 함수는 현재 턴에 따라
eff1 또는 eff2에 기술 효과를 저장합니다.

6. 게임 종료
end_game() 함수는 게임이 끝났을 때 승자를 출력하는 함수입니다. 
이 함수는 실제 게임에서 승자 결정 후 호출될 것입니다.

7. 출력 함수들
게임 진행 중 포켓몬의 정보를 출력하는 여러 함수들이 정의되어 있습니다:
line1()과 line2()는 GUI에서 출력할 첫 번째, 두 번째 줄을 담당합니다.
name_line()은 각 포켓몬의 이름을 출력하고,
type_line()은 포켓몬의 타입을 출력합니다.
HP_line()은 포켓몬의 HP 상태를 출력합니다.
latest_line()은 마지막 사용한 기술을 출력하며,
skill_line()은 포켓몬의 기술 이름, 타입, 사용 횟수를 출력합니다.

8. 메인 함수
메인 함수에서 사용자로부터 두 포켓몬의 번호를 입력받고, 
만약 두 포켓몬이 동일한 번호라면 게임이 종료됩니다.
이때, stop 변수는 두 포켓몬이 동일한 번호로 선택되었을 때 
오류 메시지를 출력하고 게임을 중지시키는 역할을 합니다. 
battle.getGUI(num_1, num_2)가 호출되면 선택된 두 포켓몬의 정보를 출력하는 GUI가 생성됩니다.  P o k e t m o n - M a s t e r  
 #   P o k e t m o n - M a s t e r  
 #   P o k e t m o n - M a s t e r  
 