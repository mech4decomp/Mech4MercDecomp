/*
 * FUN_00563630 (218 B) — format a MAC/hardware address into a string.
 * Iterates 5 length groups, sprintf's each byte as "%02x" and appends
 * to the destination string.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_str_77e814[];
extern int (__cdecl *g_sprintf)(const char *, ...);

__declspec(naked) void FUN_00563630(void)
{
    __asm {
        sub     esp, 0x28
        push    ebx
        mov     eax, 0x2
        push    ebp
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [esp + 0x28], eax
        mov     eax, dword ptr [esp + 0x38]
        push    esi
        lea     ecx, [esp + 0x20]
        push    edi
        mov     dword ptr [esp + 0x24], 0x4
        mov     dword ptr [esp + 0x34], 0x6
        mov     byte ptr [eax], 0x0
        mov     dword ptr [esp + 0x10], 0x0
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x18], 0x5
L_677:
        mov     edx, dword ptr [esp + 0x14]
        mov     ebp, dword ptr [edx]
        xor     ebx, ebx
        test    ebp, ebp
        jbe     L_de
L_691:
        mov     eax, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x10]
        add     ecx, eax
        mov     dword ptr [esp + 0x1c], ecx
        mov     eax, dword ptr [esp + 0x1c]
        xor     edx, edx
        mov     dl, byte ptr [eax + ebx]
        lea     ecx, [esp + 0x20]
        push    edx
        push    offset g_str_77e814
        push    ecx
        call    dword ptr [g_sprintf]
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0xc
        lea     edi, [esp + 0x20]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x40]
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        inc     ebx
        cmp     ebx, ebp
        rep     movsb
        __emit 0x72  /* __emit: MSVC6 miscomputes backward jcc rel-offset (call-reloc sits between branch and target) */
        __emit 0xB3
L_de:
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x18]
        add     edx, ebp
        add     ecx, 0x4
        dec     eax
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x18], eax
        jnz     L_677
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x28
        ret
    }
}
