/*
 * FUN_0068d600 (18 B) — __thiscall: sets two dwords at +0xa8 and +0xac
 * to 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0068d600(void)
{
    __asm {
        mov     eax, 0x1
        mov     dword ptr [ecx + 0xa8], eax
        mov     dword ptr [ecx + 0xac], eax
        ret
    }
}
