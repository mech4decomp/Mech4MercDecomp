/*
 * FUN_00650530 (69 B) - ABL syntax error recorder.
 *
 * __cdecl, one param. Increments DAT_008058c0; if it reaches 3, calls
 * FUN_006fab90("ABL syntax error #%d", 0x11) and asserts. Stores param
 * into DAT_0080da24[] indexed by the counter.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_008058c0;
extern int DAT_0080da24;
extern int FUN_006fab90(const char *, int);

__declspec(naked) void __cdecl FUN_00650530(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [DAT_008058c0]
        inc     eax
        cmp     eax, 3
        mov     dword ptr [DAT_008058c0], eax
        jl      L_569
        push    0x11
        push    0x792f24
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        jz      L_557
        int     3
L_557:
        mov     eax, dword ptr [ebp + 8]
        mov     ecx, dword ptr [DAT_008058c0]
        mov     dword ptr [ecx*4 + DAT_0080da24], eax
        pop     ebp
        ret
L_569:
        mov     edx, dword ptr [ebp + 8]
        mov     dword ptr [eax*4 + DAT_0080da24], edx
        pop     ebp
        ret
    }
}
