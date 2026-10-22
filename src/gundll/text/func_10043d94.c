/*
 * FUN_10043d94 (124 B) — __cdecl. Handle-table setter: validates index
 * against DAT_10076ba0, stores param_2 into the table at
 * DAT_10076aa0[idx>>5][(idx&0x1f)*0x24], optionally SetStdHandle.
 *
 * CFLAGS: /O1
 */

extern int g_10076ba0;
extern int g_10076aa0;
extern int g_100754a8;
extern void *g_10049184;              /* IAT: SetStdHandle */
extern void __cdecl FUN_1004277d(void);
extern void __cdecl FUN_10042786(void);

__declspec(naked) void __cdecl FUN_10043d94(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        push    esi
        cmp     ecx, dword ptr [g_10076ba0]
        push    edi
        jnc     L_df7
        mov     eax, ecx
        sar     eax, 5
        lea     edi, [eax*4 + g_10076aa0]
        mov     eax, ecx
        and     eax, 0x1f
        lea     esi, [eax + eax*8]
        mov     eax, dword ptr [edi]
        shl     esi, 2
        cmp     dword ptr [eax + esi], -1
        jnz     L_df7
        cmp     dword ptr [g_100754a8], 1
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        jnz     L_ded
        sub     ecx, 0
        jz      L_de4
        dec     ecx
        jz      L_ddf
        dec     ecx
        jnz     L_ded
        push    ebx
        push    -0xc
        jmp     L_de7
    L_ddf:
        push    ebx
        push    -0xb
        jmp     L_de7
    L_de4:
        push    ebx
        push    -0xa
    L_de7:
        call    dword ptr [g_10049184]
    L_ded:
        mov     eax, dword ptr [edi]
        mov     dword ptr [eax + esi], ebx
        xor     eax, eax
        pop     ebx
        jmp     L_e0d
    L_df7:
        call    FUN_1004277d
        mov     dword ptr [eax], 9
        call    FUN_10042786
        and     dword ptr [eax], 0
        or      eax, 0xffffffff
    L_e0d:
        pop     edi
        pop     esi
        ret
    }
}
