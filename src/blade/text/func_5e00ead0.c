/*
 * FUN_5e00ead0 (38 B) — __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_5e00ead0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4840]
        dec     eax
        jz      L_f0
        sub     eax, 2
        jz      L_ed
        mov     edx, dword ptr [ecx + 0x4848]
        xor     eax, eax
        cmp     edx, 1
        setz    al
        ret
    L_ed:
        xor     eax, eax
        ret
    L_f0:
        mov     eax, 1
        ret
    }
}
