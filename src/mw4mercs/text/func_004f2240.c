/*
 * FUN_004F2240 (6 B) — Return 8 (MOV EAX,8; RET).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004f2240(void)
{
    __asm {
        mov eax, 8
        ret
    }
}
