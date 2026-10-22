/*
 * FUN_0074bcc0 (165 B) — closes a cached handle, builds a path string
 * from FUN_0074b910 output + the "GameOS.vxd" suffix, then deletes the
 * file. Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0074b910(void *buf, int size);

/* IAT entries */
extern int *g_76b0ec;   /* 0x0076B0EC (CloseHandle) */
extern int *g_76b1a0;   /* 0x0076B1A0 (DeleteFileA) */

/* data */
extern int g_8b8e4c;    /* 0x008B8E4C */

__declspec(naked) void func_0074bcc0(void)
{
    __asm {
        mov     eax, dword ptr [g_8b8e4c]
        sub     esp, 0x208
        test    eax, eax
        jz      l_skipclose
        push    eax
        call    dword ptr [g_76b0ec]
        mov     dword ptr [g_8b8e4c], 0

    l_skipclose:
        push    ebx
        push    esi
        push    edi
        push    0x104
        lea     eax, [esp + 0x114]
        push    eax
        call    FUN_0074b910
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x110]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [esp + 0xc]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7aaa20
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0xc]
        mov     edi, edx
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        lea     eax, [esp + 0xc]
        and     ecx, 3
        push    eax
        rep     movsb
        call    dword ptr [g_76b1a0]
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebx
        add     esp, 0x208
        ret
    }
}
