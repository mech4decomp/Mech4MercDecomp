/*
 * FUN_0071ed10 (187 B) — Opens a file handle (via IAT 0x0087dbec), reads
 * into a local buffer, loops while data is available, and closes the handle.
 * Returns 1 on success, 0 on failure.
 *
 * __stdcall, RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_byte_8aa9e4;
extern void *(__stdcall *g_pfn_87dbec)(int);
extern int (__stdcall *g_pfn_87dbd8)(void *, void *);
extern int (__stdcall *g_pfn_87dbd4)(void *, void *);
extern int (__stdcall *g_pfn_76b0ec)(void *);   /* CloseHandle IAT */

__declspec(naked) int __stdcall FUN_0071ed10(
    unsigned int p1, unsigned int p2, unsigned int p3, unsigned int p4)
{
    __asm {
        sub     esp, 0x224
        push    ebx
        push    esi
        push    edi
        xor     eax, eax
        xor     esi, esi
        mov     dword ptr [esp + 0xC], esi
        mov     ecx, 0x88
        lea     edi, [esp + 0x10]
        rep     stosd
        mov     eax, dword ptr [esp + 0x234]
        push    eax
        push    8
        call    dword ptr [g_pfn_87dbec]
        mov     ebx, eax
        cmp     ebx, -1
        jnz     L1
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x224
        ret     0x10
L1:
        lea     ecx, [esp + 0xC]
        push    ecx
        push    ebx
        mov     dword ptr [esp + 0x14], 0x224
        call    dword ptr [g_pfn_87dbd8]
        test    eax, eax
        jz      Lend
        mov     al, byte ptr [g_byte_8aa9e4]
        test    al, al
        jnz     L2
        mov     edi, dword ptr [esp + 0x238]
L3:
        cmp     dword ptr [esp + 0x10], edi
        jz      L2
        lea     eax, [esp + 0xC]
        push    eax
        push    ebx
        call    dword ptr [g_pfn_87dbd4]
        test    eax, eax
        jz      Lend
        jmp     L3
L2:
        mov     ecx, dword ptr [esp + 0x240]
        mov     edi, dword ptr [esp + 0x23C]
        mov     edx, ecx
        shr     ecx, 2
        lea     esi, [esp + 0xC]
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     esi, 1
Lend:
        push    ebx
        call    dword ptr [g_pfn_76b0ec]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x224
        ret     0x10
    }
}
