/*
 * FUN_006FC8C0 (113 B) — ReadFile with error logging and retry.
 *
 * __thiscall (ECX = this), RET 8. Reads from a file handle (this+4).
 * On failure, formats an error message and logs it via FUN_006F91D0.
 * Retries until the log function returns non-zero (INT3 on assert).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0072d830(int, int);
extern int __cdecl FUN_006f91d0(int, const char *);

__declspec(naked) void __cdecl FUN_006fc8c0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x100
        push    ebx
        mov     ebx, dword ptr [ebp + 8]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        mov     esi, ecx
    l_retry:
        mov     ecx, dword ptr [esi + 4]
        push    0x0
        lea     eax, [ebp + 0xc]
        push    eax
        push    edi
        push    ebx
        push    ecx
        _emit   0xFF
        _emit   0x15
        _emit   0x64
        _emit   0xB1
        _emit   0x76
        _emit   0x00
        test    eax, eax
        jnz     l_done
        _emit   0xA1
        _emit   0x88
        _emit   0x6C
        _emit   0x89
        _emit   0x00
        lea     edx, [esi + 8]
        push    edx
        push    0x2745
        push    eax
        call    FUN_0072d830
        push    eax
        lea     ecx, [ebp - 0x100]
        push    ecx
        _emit   0xFF
        _emit   0x15
        _emit   0x20
        _emit   0xB4
        _emit   0x76
        _emit   0x00
        add     esp, 0xc
        lea     edx, [ebp - 0x100]
        push    edx
        push    0x982
        call    FUN_006f91d0
        test    eax, eax
        jz      l_retry
        int     3
        jmp     l_retry
    l_done:
        mov     eax, dword ptr [ebp + 0xc]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    }
}
