/*
 * FUN_0072ce60 (166 B) — guarded per-frame driver/device update. If a
 * global flag is set and a device handle is valid, sends each character
 * of a string via SendMessageA, then calls FUN_0072bd10 and two IAT
 * helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0072bd10(void);

/* IAT entries */
extern int *g_8aad68;   /* 0x008AAD68 */
extern int *g_8aad44;   /* 0x008AAD44 */
extern int *g_8aad64;   /* 0x008AAD64 */
extern int *g_76b560;   /* 0x0076B560 (SendMessageA) */

/* data */
extern char g_882464;   /* 0x00882464 */
extern int g_858bf8;    /* 0x00858BF8 */
extern char g_8825f0;   /* 0x008825F0 */
extern int g_881a58;    /* 0x00881A58 */

__declspec(naked) void func_0072ce60(void)
{
    __asm {
        mov     al, byte ptr [g_882464]
        test    al, al
        push    ebp
        jz      l_exit
        mov     eax, dword ptr [g_858bf8]
        push    eax
        call    dword ptr [g_8aad68]
        mov     ebp, eax
        test    ebp, ebp
        jz      l_exit
        mov     al, byte ptr [g_8825f0]
        test    al, al
        jnz     l_exit
        cmp     dword ptr [g_881a58], 2
        push    esi
        push    edi
        mov     byte ptr [g_8825f0], 1
        jnz     l_after
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x882464
        repne   scasb
        not     ecx
        dec     ecx
        mov     edi, ecx
        xor     esi, esi
        test    edi, edi
        jle     l_after
        push    ebx
        mov     ebx, dword ptr [g_76b560]

    l_loop:
        mov     edx, dword ptr [g_858bf8]
        xor     ecx, ecx
        mov     cl, byte ptr [esi + 0x882464]
        push    0
        push    ecx
        push    0x102
        push    edx
        call    ebx
        inc     esi
        cmp     esi, edi
        jl      l_loop
        pop     ebx

    l_after:
        call    FUN_0072bd10
        push    0
        push    4
        push    0x15
        push    ebp
        call    dword ptr [g_8aad44]
        mov     eax, dword ptr [g_858bf8]
        push    ebp
        push    eax
        call    dword ptr [g_8aad64]
        pop     edi
        mov     byte ptr [g_8825f0], 0
        pop     esi

    l_exit:
        pop     ebp
        ret
    }
}
