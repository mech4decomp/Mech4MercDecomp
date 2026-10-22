/*
 * FUN_004028FD (259 B @ 0x4028fd) - __stdcall, RET 0xc. Reads a string from
 * the archive entry, copies it into a global buffer, formats via sprintf IAT.
 * Calls into the log/string subsystem (0x6f5ed0/0x6f89f0/0x6f8430/0x6f6790/
 * 0x6f5ee0).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_006f5ed0(void);
extern void __cdecl FUN_006f89f0(void);
extern void __cdecl FUN_006f8430(void);
extern void __cdecl FUN_006f6790(void);
extern void __cdecl FUN_006f5ee0(void);
extern void *g_0076b318;   /* atoi IAT */
extern void *g_0076b420;   /* sprintf IAT */
extern int  g_007b7e68;
extern char g_76b9b0[];
extern char g_76b9ac[];
extern char g_76b9a8[];

__declspec(naked) void FUN_004028FD(void)
{
    __asm {
        nop
        nop
        nop
        mov     eax, dword ptr [esp + 8]
        push    ebx
        or      ebx, 0xffffffff
        cmp     eax, 1
        je      L_402914
        or      eax, 0xffffffff
        pop     ebx
        ret     0xc
L_402914:
        push    esi
        push    edi
        call    FUN_006f5ed0
        call    FUN_006f89f0
        test    eax, eax
        je      L_4029f3
        mov     eax, dword ptr [esp + 0x18]
        mov     edi, dword ptr [eax]
        mov     esi, dword ptr [edi]
        call    FUN_006f89f0
        mov     ecx, dword ptr [eax + 0x3c]
        call    FUN_006f8430
        cmp     esi, eax
        jle     L_402962
        push    edi
        call    dword ptr [g_0076b318]
        add     esp, 4
        mov     esi, eax
        call    FUN_006f89f0
        mov     ecx, dword ptr [eax + 0x3c]
        call    FUN_006f8430
        cmp     esi, eax
        jg      L_4029f3
L_402962:
        push    esi
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f6790
        mov     ebx, eax
        test    ebx, ebx
        jge     L_4029a8
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, OFFSET g_76b9b0
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [g_007b7e68]
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        call    FUN_006f5ee0
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     0xc
L_4029a8:
        jne     L_4029dd
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, OFFSET g_76b9ac
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [g_007b7e68]
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        call    FUN_006f5ee0
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     0xc
L_4029dd:
        mov     ecx, dword ptr [g_007b7e68]
        push    ebx
        push    OFFSET g_76b9a8
        push    ecx
        call    dword ptr [g_0076b420]
        add     esp, 0xc
L_4029f3:
        call    FUN_006f5ee0
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     0xc
    }
}
