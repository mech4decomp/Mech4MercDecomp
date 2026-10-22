/*
 * FUN_10035E90 (73 B) - __stdcall, RET 0xc.  Dispatches on arg0->[0] (a
 * type tag): if ==4 returns E_FAIL; if ==5 calls FUN_10036a30 (thiscall)
 * on arg1-8 and frees via FUN_10001d60; otherwise frees via FUN_10001d60.
 * Returns an HRESULT.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10036a30(void);   /* rel32 call (thiscall, this=ecx) */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_10035E90(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi]
        sub     eax, 4
        mov     esi, 0x80004005
        je      L_1
        dec     eax
        jne     L_2
        mov     eax, dword ptr [esp + 0xc]
        push    edi
        lea     ecx, [eax - 8]
        call    FUN_10036a30
        push    edi
        mov     esi, eax
        call    FUN_10001d60
        add     esp, 4
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0xc
    L_1:
        mov     esi, 0x80004005
    L_2:
        push    edi
        call    FUN_10001d60
        add     esp, 4
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0xc
    }
}
