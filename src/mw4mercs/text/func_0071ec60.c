/*
 * FUN_0071ec60 (165 B) — enumerates a device/registry-style list via a
 * set of IAT callbacks, accumulating a size, then returns
 * (accumulated + 0x3FF) >> 10. RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* IAT entries */
extern int *g_87dbec;   /* 0x0087DBEC */
extern int *g_87dbe8;   /* 0x0087DBE8 */
extern int *g_87dbe0;   /* 0x0087DBE0 */
extern int *g_87dbdc;   /* 0x0087DBDC */
extern int *g_87dbe4;   /* 0x0087DBE4 */
extern int *g_76b0ec;   /* 0x0076B0EC (CloseHandle) */

__declspec(naked) void func_0071ec60(void)
{
    __asm {
        sub     esp, 0x34
        push    ebx
        mov     ebx, dword ptr [esp + 0x3c]
        push    esi
        push    edi
        push    ebx
        push    1
        xor     esi, esi
        call    dword ptr [g_87dbec]
        mov     edi, eax
        cmp     edi, -1
        jnz     l_main
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x34
        ret     4

    l_main:
        lea     eax, [esp + 0xc]
        push    eax
        push    edi
        mov     dword ptr [esp + 0x14], 0x10
        call    dword ptr [g_87dbe8]
        test    eax, eax
        jz      l_outerdone
        push    ebp
        mov     ebp, 2

    l_outer:
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        push    ebx
        lea     edx, [esp + 0x28]
        push    edx
        mov     dword ptr [esp + 0x2c], 0x24
        call    dword ptr [g_87dbe0]
        test    eax, eax
        jz      l_innerdone

    l_inner:
        cmp     dword ptr [esp + 0x30], ebp
        jz      l_skipadd
        add     esi, dword ptr [esp + 0x2c]

    l_skipadd:
        lea     eax, [esp + 0x20]
        push    eax
        call    dword ptr [g_87dbdc]
        test    eax, eax
        jnz     l_inner

    l_innerdone:
        lea     ecx, [esp + 0x10]
        push    ecx
        push    edi
        call    dword ptr [g_87dbe4]
        test    eax, eax
        jnz     l_outer
        pop     ebp

    l_outerdone:
        push    edi
        call    dword ptr [g_76b0ec]
        pop     edi
        lea     eax, [esi + 0x3ff]
        pop     esi
        shr     eax, 0xa
        pop     ebx
        add     esp, 0x34
        ret     4
    }
}
