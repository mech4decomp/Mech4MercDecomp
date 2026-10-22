/*
 * FUN_5e0346de (88 B) — searches the global string table (g_5e77a8a4) for an
 * entry whose key matches the input string; returns the negated index of the
 * matching entry, or the negated count of entries if not found.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a8a4;                 /* string table ptr */
extern void __cdecl FUN_5e034202(void);

__declspec(naked) void FUN_5e0346de(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_5e77a8a4]
        push    edi
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_719
        mov     edi, dword ptr [esp + 0x10]
    L_6f0:
        push    edi
        push    eax
        push    dword ptr [esp + 0x14]
        call    FUN_5e034202
        add     esp, 0xc
        test    eax, eax
        jnz     L_70f
        mov     eax, dword ptr [esi]
        mov     al, byte ptr [eax + edi]
        cmp     al, 0x3d
        jz      L_729
        test    al, al
        jz      L_729
    L_70f:
        mov     eax, dword ptr [esi + 4]
        add     esi, 4
        test    eax, eax
        jnz     L_6f0
    L_719:
        mov     eax, esi
        sub     eax, dword ptr [g_5e77a8a4]
        sar     eax, 2
        neg     eax
    L_726:
        pop     edi
        pop     esi
        ret
    L_729:
        mov     eax, esi
        sub     eax, dword ptr [g_5e77a8a4]
        sar     eax, 2
        jmp     L_726
    }
}
