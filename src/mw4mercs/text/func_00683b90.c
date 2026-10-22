/*
 * FUN_00683b90 (44 B) — HUD element list: pick a random element from the
 * list (count = (end-begin)/4), returns 0 if empty.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_007047f0(void);

__declspec(naked) int FUN_00683b90(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, dword ptr [eax + 0x4]
        push    edi
        mov     edi, dword ptr [eax]
        sub     esi, edi
        test    esi, 0xfffffffc
        jnz     L_683baa
        pop     edi
        xor     eax, eax
        pop     esi
        ret
L_683baa:
        call    FUN_007047f0
        sar     esi, 0x2
        xor     edx, edx
        div     esi
        mov     eax, dword ptr [edi + edx*4]
        pop     edi
        pop     esi
        ret
    }
}
