/*
 * FUN_005ee7d0 (33 B) — __thiscall method (ECX = this), RET, returns AL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char __stdcall FUN_005ee7d0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x238]
        test    eax, eax
        jl      LE7E2
        cmp     eax, 0x12
        jg      LE7E2
        xor     al, al
        ret
LE7E2:
        cmp     eax, 0x33
        jl      LE7EE
        cmp     eax, 0x4e
        mov     al, 0x1
        jle     LE7F0
LE7EE:
        mov     al, 0x2
LE7F0:
        ret
    }
}
