/*
 * FUN_0062ba00 (21 B) — ABL/game-logic index helper. Computes
 * [ECX] + (index*8 - index)*4 = [ECX] + index*28 (0x1c-byte stride).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0062ba00(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        lea     edx, [eax*0x8 + 0x0]
        sub     edx, eax
        mov     eax, dword ptr [ecx]
        lea     eax, [eax + edx*0x4]
        ret     0x4
    }
}
