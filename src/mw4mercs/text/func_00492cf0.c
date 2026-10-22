/*
 * FUN_00492CF0 (107 B) — __thiscall (ECX = this), RET 8 (2 stack params).
 * Binary tree string search: walks a tree comparing wide-character (2-byte)
 * strings. Returns the parent node via param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00492cf0(void)
{
    __asm {
        push    ebp
        mov     ebp, dword ptr [ecx]
        push    edi
        mov     edi, dword ptr [ebp + 4]
        test    edi, edi
        jz      l_empty
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [eax]
        push    ebx
        push    esi
l_loop:
        mov     eax, dword ptr [edi + 0x10]
        mov     esi, edx
l_strcmp:
        mov     bl, byte ptr [eax]
        mov     cl, bl
        cmp     bl, byte ptr [esi]
        jnz     l_cmp_done
        test    cl, cl
        jz      l_equal
        mov     bl, byte ptr [eax + 1]
        mov     cl, bl
        cmp     bl, byte ptr [esi + 1]
        jnz     l_cmp_done
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     l_strcmp
l_equal:
        xor     eax, eax
        jmp     l_cmp_result
l_cmp_done:
        sbb     eax, eax
        sbb     eax, -1
l_cmp_result:
        test    eax, eax
        jl      l_go_left
        mov     ebp, edi
        mov     edi, dword ptr [edi + 8]
        jmp     l_continue
l_go_left:
        mov     edi, dword ptr [edi + 0xc]
l_continue:
        test    edi, edi
        jnz     l_loop
        mov     eax, dword ptr [esp + 0x14]
        pop     esi
        pop     ebx
        pop     edi
        mov     dword ptr [eax], ebp
        pop     ebp
        ret     8
l_empty:
        mov     eax, dword ptr [esp + 0xc]
        pop     edi
        mov     dword ptr [eax], ebp
        pop     ebp
        ret     8
    }
}
