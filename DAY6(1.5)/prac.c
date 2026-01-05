#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));

    int speed[100];
    int count = sizeof(speed) / sizeof(speed[0]);

    int dir = 0;     // +1: 증가, -1: 감소 (처음엔 0 = 아직 방향 미정)
    int hold = 0;    // 방향 전환 후 10회 강제 유지 카운트

    speed[0] = rand() % 30;

    for (int i = 1; i < count; i++)
    {
        int candidate, diff, newDir;

        while (1)
        {
            candidate = rand() % 30;          // 0~29 중 하나 뽑기
            diff = candidate - speed[i - 1];  // 변화량

            // diff의 부호로 newDir 결정
            if (diff > 0) newDir = 1;
            else if (diff < 0) newDir = -1;
            else newDir = 0; // 변화 없음

            // 1) 아직 방향이 없으면(처음) 방향을 처음 나온 부호로 결정
            if (dir == 0)
            {
                // 변화가 없으면 그냥 다시 뽑아도 되고, 받아도 되는데
                // 여기서는 "처음 방향"을 빨리 정하려고 0이면 다시 뽑습니다.
                if (newDir == 0) continue;

                dir = newDir;   // 첫 방향 확정
                hold = 10;      // 방향 확정되면 10회 강제 유지 시작
                break;          // candidate 채택
            }

            // 2) 강제 유지 중(hold > 0)이면 반대 방향 금지
            if (hold > 0)
            {
                // newDir이 0(변화 없음)이거나 현재 dir과 같으면 OK
                if (newDir == 0 || newDir == dir) break;

                // 반대 방향이면 버리고 다시 뽑기
                continue;
            }

            // 3) hold == 0이면, 반대 방향이 "나오는 순간" 전환
            if (newDir != 0 && newDir != dir)
            {
                dir = newDir;  // 방향 전환
                hold = 10;     // 전환되면 다시 10회 강제 유지
                break;         // candidate 채택
            }

            // 같은 방향이거나 변화 없음이면 그냥 채택
            break;
        }

        // 값 저장
        speed[i] = candidate;

        // 이번 스텝이 강제유지 기간에 포함되도록 감소
        if (hold > 0) hold--;
    }

    // 출력(10개씩)
    for (int i = 0; i < count; i++) {
        printf("%2d ", speed[i]);
        if (i % 10 == 9) printf("\n");
    }

    return 0;
}