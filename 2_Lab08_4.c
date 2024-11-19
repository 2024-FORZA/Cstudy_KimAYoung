#include <stdio.h>

int main() {
    int N, L, D;
    scanf("%d %d %d", &N, &L, &D);

    int songDuration = N * L + (N - 1) * 5; // 전체 재생 시간 (곡과 중간 휴식)
    int ringTime = D; // 벨소리가 처음 울리는 시간

    while (ringTime <= songDuration) {
        int timeInSong = ringTime % (L + 5);
        if (timeInSong >= L) { // 벨소리가 곡이 아닌 휴식 시간에 울림
            printf("%d\n", ringTime);
            return 0;
        }
        ringTime += D; // 다음 벨소리 시점으로 이동
    }

    // 벨소리가 끝난 후 처음 울림
    printf("%d\n", ringTime);
    return 0;
}
