/*
 * FUN_10045cb6 (125 B) — __cdecl. Searches a string table (DAT_100754d4)
 * for a key prefix match; returns the value after '=' or NULL.
 *
 * CFLAGS: /O1
 */

extern int g_10076ba4;
extern int g_100754d4;
extern int g_100754dc;
extern void __cdecl FUN_10045e7d(void);
extern void __cdecl FUN_1003c5f0(void);
extern void __cdecl FUN_10045e3e(void);

__declspec(naked) void __cdecl FUN_10045cb6(void)
{
    __asm {
        cmp     dword ptr [g_10076ba4], 0
        push    ebx
        push    esi
        mov     esi, dword ptr [g_100754d4]
        push    edi
        jz      L_d2d
        test    esi, esi
        jnz     L_ce7
        cmp     dword ptr [g_100754dc], esi
        jz      L_d2d
        call    FUN_10045e7d
        test    eax, eax
        jnz     L_d2d
        mov     esi, dword ptr [g_100754d4]
        test    esi, esi
        jz      L_d2d
    L_ce7:
        mov     ebx, dword ptr [esp + 0x10]
        test    ebx, ebx
        jz      L_d2d
        push    ebx
        call    FUN_1003c5f0
        pop     ecx
        mov     edi, eax
    L_cf8:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_d2d
        push    eax
        call    FUN_1003c5f0
        cmp     eax, edi
        pop     ecx
        jbe     L_d20
        mov     eax, dword ptr [esi]
        cmp     byte ptr [eax + edi], 0x3d
        jnz     L_d20
        push    edi
        push    ebx
        push    eax
        call    FUN_10045e3e
        add     esp, 0xc
        test    eax, eax
        jz      L_d25
    L_d20:
        add     esi, 4
        jmp     L_cf8
    L_d25:
        mov     eax, dword ptr [esi]
        lea     eax, [eax + edi + 1]
        jmp     L_d2f
    L_d2d:
        xor     eax, eax
    L_d2f:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
