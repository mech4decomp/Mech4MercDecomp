/*
 * FUN_006490e0 (107 B) — Lowercase-copy string helper.
 *
 * Copies the string at 0x007F3A54 into the buffer at 0x007F3254,
 * converting 'A'-'Z' to lowercase. If either source string exceeds
 * 0x800 chars, calls FUN_00562f10(-1, " Boy did Glenn screw the pooch here!! ").
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00562f10(int a, const char *s);

extern char g_7f3254[];   /* 0x007F3254 */
extern char g_7f3a54[];   /* 0x007F3A54 */
extern char g_7929ac[];   /* 0x007929AC */

__declspec(naked) void FUN_006490e0(void)
{
    __asm {
        push    ebx
        push    esi
        or      ecx, 0xffffffff
        push    edi
        mov     esi, offset g_7f3254
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0x800
        mov     ebx, offset g_7f3a54
        jge     l_113
        or      ecx, 0xffffffff
        mov     edi, ebx
        repne   scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0x800
        jl      l_122
    l_113:
        push    offset g_7929ac
        push    -1
        call    FUN_00562f10
        add     esp, 8
    l_122:
        mov     al, byte ptr [g_7f3a54]
    l_127:
        cmp     al, 0x41
        jl      l_137
        cmp     al, 0x5a
        jg      l_137
        movsx   eax, al
        add     eax, 0x20
        jmp     l_13a
    l_137:
        movsx   eax, al
    l_13a:
        mov     byte ptr [esi], al
        mov     al, byte ptr [ebx + 1]
        inc     esi
        inc     ebx
        test    al, al
        jnz     l_127
        pop     edi
        mov     byte ptr [esi], al
        pop     esi
        pop     ebx
        ret
    }
}
