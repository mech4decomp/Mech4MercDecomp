/*
 * FUN_006FC940 (135 B) — File write with retry dialog (__thiscall).
 *
 * Asserts that *this is 1 or 2 (file mode). Loops calling WriteFile
 * on handle this[1]. On failure, formats error message and calls
 * FUN_006F91D0 (log/output dialog). Retries if user chooses "retry".
 * Returns number of bytes written.
 *
 * __thiscall (ECX = this), RET 8, 2 stack params (buffer, size).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_006f91d0(void);

__declspec(naked) void FUN_006fc940(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x104
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        cmp     eax, 1
        push    edi
        jz      l_ok
        cmp     eax, 2
        jz      l_ok
        lea     eax, [esi + 8]
        push    eax
        push    0x7A0304
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        jz      l_ok
        int     3
    l_ok:
        mov     edi, dword ptr [ebp + 0x0C]
        mov     ebx, dword ptr [ebp + 8]
    l_retry:
        mov     edx, dword ptr [esi + 4]
        push    0
        lea     ecx, [ebp - 4]
        push    ecx
        push    edi
        push    ebx
        push    edx
        _emit   0xFF
        _emit   0x15
        _emit   0xE4
        _emit   0xB0
        _emit   0x76
        _emit   0x00
        test    eax, eax
        jnz     l_done
        lea     eax, [esi + 8]
        push    eax
        lea     ecx, [ebp - 0x104]
        push    0x7A02E0
        push    ecx
        _emit   0xFF
        _emit   0x15
        _emit   0x20
        _emit   0xB4
        _emit   0x76
        _emit   0x00
        add     esp, 0x0C
        lea     edx, [ebp - 0x104]
        push    edx
        push    0x982
        call    FUN_006f91d0
        test    eax, eax
        jz      l_retry
        int     3
        jmp     l_retry
    l_done:
        mov     eax, dword ptr [ebp - 4]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    }
}
