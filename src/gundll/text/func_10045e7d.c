/*
 * FUN_10045e7d (110 B) — __stdcall, RET.
 * Iterates a wide-string table at 0x100754dc, converting each entry to
 * multibyte via WideCharToMultiByte (0x100490fc) and processing with
 * FUN_10046193. Returns 0 on success, -1 on failure.
 *
 * CFLAGS: /O1
 */

extern unsigned long g_100754dc;   /* wide-string table ptr */
extern unsigned long g_100490fc;   /* WideCharToMultiByte fn ptr */
extern void FUN_1003c3c5(void);    /* malloc */
extern void FUN_10046193(void);

__declspec(naked) void __stdcall FUN_10045e7d(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [g_100754dc]
        push    edi
        xor     edi, edi
        mov     eax, dword ptr [esi]
        cmp     eax, edi
        jz      L_ede
        mov     ebx, dword ptr [g_100490fc]
    L_e96:
        push    edi
        push    edi
        push    edi
        push    edi
        push    -1
        push    eax
        push    edi
        push    1
        call    ebx
        mov     ebp, eax
        cmp     ebp, edi
        jz      L_ee6
        push    ebp
        call    FUN_1003c3c5
        cmp     eax, edi
        pop     ecx
        mov     dword ptr [esp + 0x10], eax
        jz      L_ee6
        push    edi
        push    edi
        push    ebp
        push    eax
        push    -1
        push    dword ptr [esi]
        push    edi
        push    1
        call    ebx
        test    eax, eax
        jz      L_ee6
        push    edi
        push    dword ptr [esp + 0x14]
        call    FUN_10046193
        mov     eax, dword ptr [esi + 4]
        add     esi, 4
        pop     ecx
        cmp     eax, edi
        pop     ecx
        jnz     L_e96
    L_ede:
        xor     eax, eax
    L_ee0:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    L_ee6:
        or      eax, 0FFFFFFFFh
        jmp     L_ee0
    }
}
