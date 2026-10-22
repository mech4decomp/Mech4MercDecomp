/*
 * FUN_5e00eaa0 (38 B) — __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_5e00eaa0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4840]
        dec     eax
        jz      L_c0
        sub     eax, 2
        jz      L_bd
        mov     edx, dword ptr [ecx + 0x4844]
        xor     eax, eax
        cmp     edx, 1
        setz    al
        ret
    L_bd:
        xor     eax, eax
        ret
    L_c0:
        mov     eax, 1
        ret
    }
}
