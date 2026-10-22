/*
 * FUN_006F7790 (173 B) — Container remove/find helper.
 *
 * If this+0x0D (flag) is set and this+0x08 (array) is non-NULL:
 *   - Calls FUN_006F8560(param1) to find index
 *   - Calls vtable[1] on the array object with param1
 *   - If vtable returns 0 and index >= 0: removes at index via FUN_006F8520
 *   - If vtable returns non-zero and index == -1: calls FUN_006F8440(param1)
 *
 * If this+0x0C (flag2) is set and this+0x24 (string) is non-NULL:
 *   - Compares *param3 with this+0x24 (string compare, 2-byte stride)
 *   - If match: calls FUN_006F8560(param1), if index >= 0 calls FUN_006F7850(1)
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006f8560(int param);
extern void __stdcall FUN_006f8520(int index);
extern void __fastcall FUN_006f8440(int param);
extern void __fastcall FUN_006f7850(int param);

__declspec(naked) void __stdcall FUN_006f7790(void)
{
    __asm {
        push    ebp
        mov     ebp, dword ptr [esp + 8]
        push    esi
        push    edi
        mov     edi, ecx
        mov     al, byte ptr [edi + 0x0D]
        test    al, al
        jz      l_check_flag2
        mov     eax, dword ptr [edi + 8]
        test    eax, eax
        jz      l_check_flag2
        push    ebp
        call    FUN_006f8560
        mov     ecx, dword ptr [edi + 8]
        mov     esi, eax
        mov     eax, dword ptr [ecx]
        push    ebp
        call    dword ptr [eax + 4]
        test    al, al
        jz      l_vtable_false
        cmp     esi, -1
        jne     l_check_flag2
        push    ebp
        mov     ecx, edi
        call    FUN_006f8440
        pop     edi
        pop     esi
        pop     ebp
        ret     8
    l_vtable_false:
        test    esi, esi
        jl      l_check_flag2
        push    esi
        mov     ecx, edi
        call    FUN_006f8520
    l_check_flag2:
        mov     al, byte ptr [edi + 0x0C]
        test    al, al
        jz      l_ret
        mov     esi, dword ptr [edi + 0x24]
        test    esi, esi
        jz      l_ret
        mov     ecx, dword ptr [esp + 0x14]    ; param3
        mov     eax, dword ptr [ecx]
        push    ebx
    l_strcmp_loop:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jne     l_strcmp_diff
        test    cl, cl
        jz      l_strcmp_eq
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jne     l_strcmp_diff
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     l_strcmp_loop
    l_strcmp_eq:
        xor     eax, eax
        jmp     l_strcmp_done
    l_strcmp_diff:
        sbb     eax, eax
        sbb     eax, -1
    l_strcmp_done:
        test    eax, eax
        pop     ebx
        jnz     l_ret
        push    ebp
        mov     ecx, edi
        call    FUN_006f8560
        test    eax, eax
        jl      l_ret
        push    1
        mov     ecx, edi
        call    FUN_006f7850
    l_ret:
        pop     edi
        pop     esi
        pop     ebp
        ret     8
    }
}
