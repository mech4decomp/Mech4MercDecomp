/*
 * FUN_10043e10 (127 B) — __cdecl. Handle-table closer: validates index,
 * marks the slot free (0xffffffff), optionally SetStdHandle(NULL).
 *
 * CFLAGS: /O1
 */

extern int g_10076ba0;
extern int g_10076aa0;
extern int g_100754a8;
extern void *g_10049184;              /* IAT: SetStdHandle */
extern void __cdecl FUN_1004277d(void);
extern void __cdecl FUN_10042786(void);

__declspec(naked) void __cdecl FUN_10043e10(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        push    esi
        cmp     ecx, dword ptr [g_10076ba0]
        push    edi
        jnc     L_e76
        mov     eax, ecx
        sar     eax, 5
        lea     edi, [eax*4 + g_10076aa0]
        mov     eax, ecx
        and     eax, 0x1f
        lea     esi, [eax + eax*8]
        mov     eax, dword ptr [edi]
        shl     esi, 2
        add     eax, esi
        test    byte ptr [eax + 4], 1
        jz      L_e76
        cmp     dword ptr [eax], -1
        jz      L_e76
        cmp     dword ptr [g_100754a8], 1
        jnz     L_e6c
        xor     eax, eax
        sub     ecx, eax
        jz      L_e63
        dec     ecx
        jz      L_e5e
        dec     ecx
        jnz     L_e6c
        push    eax
        push    -0xc
        jmp     L_e66
    L_e5e:
        push    eax
        push    -0xb
        jmp     L_e66
    L_e63:
        push    eax
        push    -0xa
    L_e66:
        call    dword ptr [g_10049184]
    L_e6c:
        mov     eax, dword ptr [edi]
        or      dword ptr [eax + esi], 0xffffffff
        xor     eax, eax
        jmp     L_e8c
    L_e76:
        call    FUN_1004277d
        mov     dword ptr [eax], 9
        call    FUN_10042786
        and     dword ptr [eax], 0
        or      eax, 0xffffffff
    L_e8c:
        pop     edi
        pop     esi
        ret
    }
}
