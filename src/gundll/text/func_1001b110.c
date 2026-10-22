/*
 * FUN_1001b110 (57 B) — __thiscall, RET 0x4. Scans a 0xb8-entry table
 * calling FUN_10037bf0; returns matching entry or 0.
 */

extern int g_10050654;
extern int g_10050650;
extern void __cdecl FUN_10037bf0(void);

__declspec(naked) void FUN_1001b110(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0xc]
        xor     esi, esi
L_loop:
        mov     eax, dword ptr [esi*8 + g_10050654]
        push    eax
        push    edi
        call    FUN_10037bf0
        add     esp, 8
        test    eax, eax
        jz      L_found
        inc     esi
        cmp     esi, 0xb8
        jc      L_loop
        pop     edi
        xor     eax, eax
        pop     esi
        ret     4
L_found:
        mov     eax, dword ptr [esi*8 + g_10050650]
        pop     edi
        pop     esi
        ret     4
    }
}
