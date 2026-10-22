/*
 * FUN_004d8cf0 (128 B) — iterates over players (param_1+0x17bc count),
 * sprintf'ing a "player" entry into a local buffer and strncat'ing onto
 * param_2. __stdcall RET 0x10 (3 args: param_1, param_2, param_3).
 * sprintf via IAT 0x0076b420; strncat via IAT 0x0076b2f8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_76b420)(void);   /* IAT: sprintf */
extern int (__cdecl *g_76b2f8)(void);   /* IAT: strncat */

__declspec(naked) void FUN_004d8cf0(void)
{
    __asm {
        sub     esp, 0xa0
        push    ebx
        mov     ebx, dword ptr [esp+0xa8]   /* param_1 */
        mov     eax, dword ptr [ebx+0x17bc]
        push    esi
        xor     esi, esi
        test    eax, eax
        jle     epilogue
        push    ebp
        mov     ebp, dword ptr [esp+0xb8]   /* param_3 */
        push    edi
        lea     edi, [ebx+0x158]
loop_start:
        lea     eax, [edi+0x50]
        push    eax
        push    esi
        push    0x771c7c                    /* &DAT_00771c7c */
        push    edi
        push    esi
        push    0x771c74                    /* "player" */
        lea     ecx, [esp+0x28]
        push    0x7730a0                    /* "\\%s_%d\\%s\\%s_%d\\%s" */
        push    ecx
        call    dword ptr [g_76b420]        /* sprintf */
        mov     eax, dword ptr [esp+0xd8]   /* param_2 */
        push    ebp
        lea     edx, [esp+0x34]
        push    edx
        push    eax
        call    dword ptr [g_76b2f8]        /* strncat */
        mov     eax, dword ptr [ebx+0x17bc]
        add     esp, 0x2c
        inc     esi
        add     edi, 0xa4
        cmp     esi, eax
        jl      loop_start
        pop     edi
        pop     ebp
epilogue:
        pop     esi
        pop     ebx
        add     esp, 0xa0
        ret     0x10
    }
}
