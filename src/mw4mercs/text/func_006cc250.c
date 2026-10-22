/*
 * FUN_006CC250 — remove an object from a linked list and free it.
 *
 * __cdecl, RET 4.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

void __stdcall FUN_006bfa50(const char *str);
void __stdcall FUN_006c02f0(void *ptr);
void __stdcall FUN_006f4230(void *ptr);

__declspec(naked) void __stdcall func_006cc250(void *param_1)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        _emit 0x3B
        _emit 0x0D
        _emit 0xD4
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        jnz     L_not_d4
        _emit 0xC7
        _emit 0x05
        _emit 0xD4
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC7
        _emit 0x05
        _emit 0xD8
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_not_d4:
        _emit 0x3B
        _emit 0x0D
        _emit 0x94
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        jnz     L_not_94
        _emit 0xC7
        _emit 0x05
        _emit 0x94
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_not_94:
        _emit 0x8B
        _emit 0x15
        _emit 0x38
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        push    esi
        mov     esi, dword ptr [edx + 4]
        xor     eax, eax
        test    esi, esi
        jz      L_not_found
    L_find:
        cmp     ecx, esi
        jz      L_found
        mov     eax, esi
        mov     esi, dword ptr [esi]
        test    esi, esi
        jnz     L_find
    L_not_found:
        push    0x79e2a0
        call    FUN_006bfa50
        add     esp, 4
        pop     esi
        ret     4
    L_found:
        test    eax, eax
        jz      L_head
        mov     ecx, dword ptr [esi]
        mov     dword ptr [eax], ecx
        jmp     L_unlink
    L_head:
        mov     eax, dword ptr [esi]
        mov     dword ptr [edx + 4], eax
    L_unlink:
        mov     eax, dword ptr [esi + 4]
        test    eax, eax
        jz      L_free
        push    edi
    L_free_children:
        mov     edi, dword ptr [eax]
        push    eax
        call    FUN_006c02f0
        test    edi, edi
        mov     eax, edi
        jnz     L_free_children
        pop     edi
    L_free:
        push    esi
        call    FUN_006f4230
        pop     esi
        ret     4
    }
}
