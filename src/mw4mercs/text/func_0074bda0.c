/*
 * FUN_0074BDA0 (144 B) — allocates four buffers (2x calloc, 2x malloc),
 * stores pointers in globals 0x008B8E44/40/3C/38. If all non-NULL, sets
 * 0x008B8E30=0x80, 0x008B8E31=0 and returns. Else puts("No mem.\n") + exit(1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* IAT entries */
extern void *g_iat_76b354;   /* 0x0076B354 calloc */
extern void *g_iat_76b294;   /* 0x0076B294 malloc */
extern void *g_iat_76b358;   /* 0x0076B358 puts */
extern void *g_iat_76b38c;   /* 0x0076B38C exit */

/* .data globals */
extern int  g_8b8e44;
extern int  g_8b8e40;
extern int  g_8b8e3c;
extern int  g_8b8e38;
extern char g_8b8e30;
extern char g_8b8e31;

__declspec(naked) void func_0074bda0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_iat_76b354]
        push    0x2
        push    0x6d5d
        call    esi
        push    0x2
        push    0x6d5d
        mov     dword ptr [g_8b8e44], eax
        call    esi
        mov     esi, dword ptr [g_iat_76b294]
        push    0x6d5d
        mov     dword ptr [g_8b8e40], eax
        call    esi
        push    0x6d5d
        mov     dword ptr [g_8b8e3c], eax
        call    esi
        mov     ecx, dword ptr [g_8b8e44]
        add     esp, 0x18
        test    ecx, ecx
        mov     dword ptr [g_8b8e38], eax
        pop     esi
        jz      L_be16
        mov     ecx, dword ptr [g_8b8e40]
        test    ecx, ecx
        jz      L_be16
        mov     ecx, dword ptr [g_8b8e3c]
        test    ecx, ecx
        jz      L_be16
        test    eax, eax
        jz      L_be16
        mov     byte ptr [g_8b8e30], 0x80
        mov     byte ptr [g_8b8e31], 0x0
        ret
L_be16:
        push    0x7ab40c
        call    dword ptr [g_iat_76b358]
        add     esp, 0x4
        push    0x1
        call    dword ptr [g_iat_76b38c]
        nop
        nop
        nop
        nop
    }
}
