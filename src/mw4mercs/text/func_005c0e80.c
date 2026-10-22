/*
 * FUN_005c0e80 (29 B) — __thiscall (ECX = this). Decrements counters at
 * this+8 and this+4, returns 0 if this+4 was positive, else 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005c0e80(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x8]
        cmp     eax, 0x1
        jle     L1
        dec     eax
        mov     dword ptr [ecx + 0x8], eax
L1:
        mov     eax, dword ptr [ecx + 0x4]
        test    eax, eax
        jle     L2
        dec     eax
        mov     dword ptr [ecx + 0x4], eax
        xor     al, al
        ret
L2:
        mov     al, 0x1
        ret
    }
}
