/*
 * FUN_006FC820 (143 B) — File I/O dispatcher with error logging.
 *
 * __thiscall (ECX = this), RET 8 (two stack params: param1, param2).
 * Dispatches on param2 (0, 2, or default) to call a function pointer
 * with different arguments. On failure (-1), logs an error via
 * FUN_006F91D0 and retries.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006f91d0(void);
extern int __cdecl FUN_0072d830(void);

__declspec(naked) int __fastcall FUN_006fc820(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x100
        push    ebx
        _emit   0x8B
        _emit   0x1D
        _emit   0x60
        _emit   0xB1
        _emit   0x76
        _emit   0x00
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 8]
        mov     esi, ecx
    l_retry:
        mov     eax, dword ptr [ebp + 0xc]
        sub     eax, 0
        je      l_case_0
        sub     eax, 2
        je      l_case_2
        mov     eax, dword ptr [esi + 4]
        push    1
        push    0
        push    edi
        push    eax
        jmp     l_call
    l_case_2:
        mov     ecx, dword ptr [esi + 4]
        push    2
        push    0
        push    edi
        push    ecx
        jmp     l_call
    l_case_0:
        mov     edx, dword ptr [esi + 4]
        push    0
        push    0
        push    edi
        push    edx
    l_call:
        call    ebx
        cmp     eax, -1
        jne     l_done
        _emit   0x8B
        _emit   0x0D
        _emit   0x88
        _emit   0x6C
        _emit   0x89
        _emit   0x00
        lea     eax, [esi + 8]
        push    eax
        push    0x2745
        push    ecx
        call    FUN_0072d830
        push    eax
        lea     edx, [ebp - 0x100]
        push    edx
        _emit   0xFF
        _emit   0x15
        _emit   0x20
        _emit   0xB4
        _emit   0x76
        _emit   0x00
        add     esp, 0xc
        lea     eax, [ebp - 0x100]
        push    eax
        push    0x982
        call    FUN_006f91d0
        test    eax, eax
        je      l_retry
        int     3
        jmp     l_retry
    l_done:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    }
}
