/*
 * FUN_1003bf84 (90 B) — __thiscall.
 * Char-class lookup: tests low byte via FUN_100399db / a table, else
 * maps through FUN_1003a6a8 with an offset.
 *
 * CFLAGS: /O1
 */

extern int g_10051b90;
extern char *g_10051984;
extern void __cdecl FUN_100399db(void);
extern void __cdecl FUN_1003a6a8(void);

__declspec(naked) void FUN_1003bf84(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        test    si, 0xff00
        jnz     L_1003bfc8
        cmp     dword ptr [g_10051b90], 0x1
        jle     L_1003bfac
        mov     eax, esi
        push    0x4
        and     eax, 0xff
        push    eax
        call    FUN_100399db
        pop     ecx
        pop     ecx
        jmp     L_1003bfbf
    L_1003bfac:
        mov     ecx, dword ptr [g_10051984]
        mov     eax, esi
        and     eax, 0xff
        mov     al, byte ptr [ecx + eax*2]
        and     eax, 0x4
    L_1003bfbf:
        test    eax, eax
        jz      L_1003bfc8
        mov     ax, si
        pop     esi
        ret
    L_1003bfc8:
        push    0x2
        push    esi
        call    FUN_1003a6a8
        pop     ecx
        test    eax, eax
        pop     ecx
        lea     eax, [esi - 0x27]
        jnz     L_1003bfdc
        lea     eax, [esi - 0x7]
    L_1003bfdc:
        pop     esi
        ret
    }
}
