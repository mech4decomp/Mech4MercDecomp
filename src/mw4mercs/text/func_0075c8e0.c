/*
 * FUN_0075c8e0 (168 B) — RET 4 (one stack param). One-shot log-message
 * formatter: copies a source string (truncating with "..." if needed),
 * then sprintf's a formatted message into a global buffer via the IAT.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* IAT entries */
extern int *g_76b420;   /* 0x0076B420 (sprintf) */

/* data */
extern char g_8bc9b4;   /* 0x008BC9B4 */
extern int g_8bd2c4;    /* 0x008BD2C4 */
extern int g_8bd2c0;    /* 0x008BD2C0 */
extern int g_8bc9c0;    /* 0x008BC9C0 */
extern int g_8bc9c8;    /* 0x008BC9C8 */
extern int g_8bc9c4;    /* 0x008BC9C4 */
extern int g_8bc9bc;    /* 0x008BC9BC */

__declspec(naked) void func_0075c8e0(void)
{
    __asm {
        mov     al, byte ptr [g_8bc9b4]
        xor     edx, edx
        sub     esp, 0x28
        cmp     al, dl
        jnz     l_ret
        mov     ecx, dword ptr [g_8bd2c4]
        push    ebx
        cmp     byte ptr [ecx], 0xd
        push    esi
        lea     eax, [esp + 0x8]
        jz      l_aftercopy
        lea     esi, [esp + 0x8]
        sub     ecx, esi

    l_loop:
        lea     esi, [esp + 0x2c]
        cmp     eax, esi
        jz      l_dots
        mov     bl, byte ptr [ecx + eax]
        mov     byte ptr [eax], bl
        mov     bl, byte ptr [ecx + eax + 1]
        inc     eax
        cmp     bl, 0xd
        jnz     l_loop
        lea     ecx, [esp + 0x2c]
        cmp     eax, ecx
        jnz     l_aftercopy

    l_dots:
        mov     byte ptr [eax], 0x2e
        inc     eax
        mov     byte ptr [eax], 0x2e
        inc     eax
        mov     byte ptr [eax], 0x2e
        inc     eax

    l_aftercopy:
        mov     ecx, dword ptr [esp + 0x34]
        mov     byte ptr [eax], dl
        mov     eax, dword ptr [g_8bd2c0]
        mov     dword ptr [g_8bc9c0], edx
        mov     dword ptr [g_8bc9c8], edx
        lea     edx, [esp + 0x8]
        push    edx
        push    eax
        push    ecx
        push    0x7af978
        push    0x8bcac0
        mov     dword ptr [g_8bc9c4], 0x8bcac0
        call    dword ptr [g_76b420]
        add     esp, 0x14
        pop     esi
        mov     dword ptr [g_8bc9bc], 3
        mov     byte ptr [g_8bc9b4], 1
        pop     ebx

    l_ret:
        add     esp, 0x28
        ret     4
    }
}
