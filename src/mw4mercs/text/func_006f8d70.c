/*
 * FUN_006F8D70 (165 B) — Walk linked list, find matching handle, call vtable[0x30].
 *
 * __stdcall, RET 0x8 (2 params: param_1=name, param_2=value).
 * Looks up "GName" via FUN_006f5e50, then walks the global linked list
 * at 0x008493c4 comparing the "Handle" field against each node's name
 * at node+0x14. On match, calls vtable[0x30](node, param_1, param_2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  __cdecl FUN_006f5e50(const char *, const char *);
extern char *__cdecl FUN_006f5b80(int, const char *);

__declspec(naked) int __cdecl FUN_006F8D70(const char *param_1, const char *param_2)
{
    __asm {
        _emit   0x8B
        _emit   0x0D
        _emit   0xD0
        _emit   0x93
        _emit   0x84
        _emit   0x00
        push    ebx
        mov     ebx, [esp + 0x8]
        push    ebp
        push    esi
        push    edi
        push    ebx
        push    0x79fa10
        call    FUN_006f5e50
        mov     ebp, eax
        test    ebp, ebp
        jnz     l_gname_ok
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     8

    l_gname_ok:
        _emit   0x8B
        _emit   0x3D
        _emit   0xC4
        _emit   0x93
        _emit   0x84
        _emit   0x00
        test    edi, edi
        jz      l_return_false

    l_outer_loop:
        _emit   0x8B
        _emit   0x0D
        _emit   0xD0
        _emit   0x93
        _emit   0x84
        _emit   0x00
        push    0x79fab8
        push    ebp
        lea     esi, [edi + 0x14]
        call    FUN_006f5b80
    l_inner_loop:
        mov     dl, [eax]
        mov     cl, dl
        cmp     dl, [esi]
        jnz     l_cmp_diff
        test    cl, cl
        jz      l_cmp_eq
        mov     dl, [eax + 1]
        mov     cl, dl
        cmp     dl, [esi + 1]
        jnz     l_cmp_diff
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     l_inner_loop
    l_cmp_eq:
        xor     eax, eax
        jmp     l_cmp_done
    l_cmp_diff:
        sbb     eax, eax
        sbb     eax, -1
    l_cmp_done:
        test    eax, eax
        jz      l_found
        mov     edi, [edi + 8]
        test    edi, edi
        jnz     l_outer_loop

    l_not_found:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     8

    l_found:
        test    edi, edi
        jnz     l_call_vtable
    l_return_false:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     8

    l_call_vtable:
        mov     ecx, [esp + 0x18]
        mov     eax, [edi]
        push    ecx
        push    ebx
        push    edi
        call    dword ptr [eax + 0x30]
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     8
    }
}
