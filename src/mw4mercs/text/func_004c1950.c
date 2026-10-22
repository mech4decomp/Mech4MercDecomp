/*
 * FUN_004C1950 (190 B) - MLR node sphere-intersection test (cdecl).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_00487e30(int idx);

__declspec(naked) void __cdecl FUN_004c1950(void)
{
    __asm {
        sub     esp, 0x10
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [eax + 0x1c]
        fld     dword ptr [eax + 0x3c]
        mov     ecx, dword ptr [eax + 0xc]
        fld     st(0)
        push    ebx
        fmul    st(0), st(1)
        mov     ebx, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0xc], edx
        xor     edx, edx
        fstp    dword ptr [esp + 0x4]
        mov     dl, byte ptr [ebx + 0x1c]
        push    ebp
        fstp    st(0)
        push    esi
        push    edi
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, dword ptr [eax + 0x2c]
        xor     edi, edi
        mov     ebp, edx
        test    ebp, ebp
        mov     dword ptr [esp + 0x1c], ecx
        jle     l_done
    l_outer:
        push    edi
        mov     ecx, ebx
        call    FUN_00487e30
        mov     edx, dword ptr [eax]
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x28]
        mov     esi, dword ptr [esp + 0x28]
        xor     ecx, ecx
        test    esi, esi
        jle     l_next
        mov     edx, dword ptr [esp + 0x24]
        add     edx, 0x8
    l_inner:
        fld     dword ptr [edx - 0x8]
        fsub    dword ptr [esp + 0x14]
        fld     dword ptr [edx - 0x4]
        fsub    dword ptr [esp + 0x18]
        fld     dword ptr [edx]
        fsub    dword ptr [esp + 0x1c]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fcomp   dword ptr [esp + 0x10]
        fstp    st(0)
        fnstsw  ax
        fstp    st(0)
        __emit  0xF6        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit  0xC4
        __emit  0x41
        fstp    st(0)
        jz      l_fail
        inc     ecx
        add     edx, 0xc
        cmp     ecx, esi
        jl      l_inner
    l_next:
        inc     edi
        cmp     edi, ebp
        jl      l_outer
    l_done:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x10
        ret
    l_fail:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x10
        ret
    }
}
