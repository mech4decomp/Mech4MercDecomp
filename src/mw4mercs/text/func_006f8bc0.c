/*
 * FUN_006F8BC0 (102 B) — Walk linked list calling vtable[0x24] on each node.
 *
 * __stdcall, RET 4 (1 stack param). Sets global 0x008493d5 to 1.
 * If global 0x008493d0 is zero, returns 0. Calls FUN_006F5ED0,
 * optionally FUN_006F59F0 if param < 1. Walks list at 0x008493c4,
 * calls vtable[0x24] on each node (if param matches node's field_10
 * or param < 1). If any returns false, result is false. Calls
 * FUN_006F5EE0, returns result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f5ed0(void);
extern void __fastcall FUN_006f59f0(void);
extern void __cdecl FUN_006f5ee0(void);

__declspec(naked) void __stdcall FUN_006f8bc0(void)
{
    __asm {
        _emit   0xA1
        _emit   0xD0
        _emit   0x93
        _emit   0x84
        _emit   0x00
        test    eax, eax
        push    ebx
        mov     bl, 1
        push    esi
        _emit   0x8B
        _emit   0x35
        _emit   0xC4
        _emit   0x93
        _emit   0x84
        _emit   0x00
        _emit   0x88
        _emit   0x1D
        _emit   0xD5
        _emit   0x93
        _emit   0x84
        _emit   0x00
        jnz     l_has_list
        pop     esi
        xor     al, al
        pop     ebx
        ret     4
    l_has_list:
        push    edi
        call    FUN_006f5ed0
        mov     edi, dword ptr [esp + 0x10]
        test    edi, edi
        jg      l_check_list
        _emit   0x8B
        _emit   0x0D
        _emit   0xD0
        _emit   0x93
        _emit   0x84
        _emit   0x00
        call    FUN_006f59f0
    l_check_list:
        test    esi, esi
        jz      l_done
    l_loop:
        test    edi, edi
        jle     l_call_vt
        cmp     edi, dword ptr [esi + 0x10]
        jnz     l_next
    l_call_vt:
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 0x24]
        test    al, al
        jnz     l_next
        xor     bl, bl
    l_next:
        mov     esi, dword ptr [esi + 8]
        test    esi, esi
        jnz     l_loop
    l_done:
        call    FUN_006f5ee0
        pop     edi
        pop     esi
        mov     al, bl
        pop     ebx
        ret     4
    }
}
