/*
 * FUN_0064fab0 (142 B) — Tokenizer/parser loop over a string pointer at
 * 0x00805918. Reads bytes, calls FUN_0064ea80 while the current byte != 0x37,
 * tracks iteration count vs 0x007b5a28, calls FUN_0064db40, and maintains a
 * stack pointer at 0x0080592c.
 *
 * __cdecl, no args, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_805918;            /* 0x00805918 */
extern int g_805908;              /* 0x00805908 */
extern char g_80d969;             /* 0x0080d969 */
extern int g_7b5a28;              /* 0x007b5a28 */
extern int *g_80592c;             /* 0x0080592c */

extern void __cdecl FUN_0064ea80(void);
extern void __cdecl FUN_00563060(int a);
extern void __cdecl FUN_0064db40(void);

__declspec(naked) void __cdecl FUN_0064fab0(void)
{
    __asm {
        mov     ecx, dword ptr [g_805918]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        xor     edi, edi
        mov     ebx, 0x37
    l_top:
        movsx   eax, byte ptr [ecx]
        inc     ecx
        cmp     eax, ebx
        mov     dword ptr [g_805908], eax
        mov     dword ptr [g_805918], ecx
        jz      l_37
    l_loop:
        call    FUN_0064ea80
        mov     al, byte ptr [g_80d969]
        test    al, al
        jnz     l_ret
        cmp     dword ptr [g_805908], ebx
        jnz     l_loop
    l_37:
        mov     eax, dword ptr [g_7b5a28]
        inc     edi
        cmp     edi, eax
        jnz     l_skip
        push    0x1
        call    FUN_00563060
        add     esp, 0x4
    l_skip:
        mov     eax, dword ptr [g_805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov     dword ptr [g_805908], ecx
        mov     dword ptr [g_805918], eax
        call    FUN_0064db40
        mov     edx, dword ptr [g_80592c]
        cmp     dword ptr [edx], 0x0
        jnz     l_norestore
        mov     dword ptr [g_805918], esi
    l_norestore:
        sub     dword ptr [g_80592c], 0x4
        mov     ecx, dword ptr [g_805918]
        cmp     ecx, esi
        jz      l_top
    l_ret:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
