/*
 * FUN_006C3450 — expression evaluator (operator precedence parser).
 *
 * __cdecl, no stack params. Returns result.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

int __stdcall FUN_006c2590(void);
int __stdcall FUN_006c2c90(void);
int __stdcall FUN_006c2b10(int a, int b, int c);

__declspec(naked) int __stdcall func_006c3450(void)
{
    __asm {
        sub     esp, 0x104
        push    ebx
        push    ebp
        push    esi
        push    edi
        xor     edi, edi
    L_loop:
        call    FUN_006c2590
        mov     ebx, eax
        call    FUN_006c2c90
        _emit 0x8B
        _emit 0x0D
        _emit 0x28
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        cmp     byte ptr [ecx], 0x20
        mov     dword ptr [esp + 0x10], eax
        jnz     L_check
        inc     ecx
        _emit 0x89
        _emit 0x0D
        _emit 0x28
        _emit 0xF3
        _emit 0x82
        _emit 0x00
    L_check:
        test    edi, edi
        jz      L_store
        mov     ebp, eax
        and     ebp, 0xff
        lea     esi, [esp + edi * 8 + 0x10]
    L_reduce:
        mov     eax, dword ptr [esi]
        mov     edx, eax
        and     edx, 0xff
        cmp     ebp, edx
        jg      L_store
        push    eax
        mov     eax, dword ptr [esi - 4]
        push    ebx
        push    eax
        call    FUN_006c2b10
        dec     edi
        sub     esi, 8
        test    edi, edi
        mov     ebx, eax
        jnz     L_reduce
    L_store:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_ret
        mov     dword ptr [esp + edi * 8 + 0x14], ebx
        mov     dword ptr [esp + edi * 8 + 0x18], eax
        inc     edi
        jmp     L_loop
    L_ret:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x104
        ret
    }
}
