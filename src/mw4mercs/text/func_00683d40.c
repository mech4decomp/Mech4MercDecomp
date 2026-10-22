/*
 * FUN_00683D40 (165 B) — Find closest object to a point.
 *
 * __cdecl, RET (2 stack params: int* range, float* point).
 * Iterates a range [*param_1, param_1[1]) of objects, computing the
 * squared distance from the given point to each object's position
 * (via FUN_00507f90), tracking the minimum. Returns the first field
 * of the closest object (or 0 if the range is empty).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00507f90(void);

__declspec(naked) void __cdecl FUN_00683d40(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        sub     esp, 0x3c
        push    esi
        mov     esi, dword ptr [eax]
        push    edi
        mov     edi, dword ptr [eax + 4]
        mov     eax, edi
        sub     eax, esi
        test    eax, 0xfffffffc
        jnz     l_main
        pop     edi
        xor     eax, eax
        pop     esi
        add     esp, 0x3c
        ret
    l_main:
        cmp     esi, edi
        push    ebp
        mov     dword ptr [esp + 0x4c], 0
        mov     ebp, edi
        jz      l_end
        push    ebx
        mov     ebx, dword ptr [esp + 0x54]
    l_loop:
        mov     edx, dword ptr [esi]
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, dword ptr [edx + 0x198]
        call    FUN_00507f90
        fld     dword ptr [eax + 0xc]
        fsubr   dword ptr [ebx]
        mov     ecx, dword ptr [eax + 0x1c]
        fld     dword ptr [ebx + 4]
        mov     edx, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x14], ecx
        fsub    dword ptr [esp + 0x14]
        fld     dword ptr [ebx + 8]
        mov     dword ptr [esp + 0x18], edx
        fsub    dword ptr [esp + 0x18]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        fcom    dword ptr [esp + 0x50]
        fnstsw  ax
        test    ah, 1
        jnz     l_skip
        fstp    dword ptr [esp + 0x50]
        mov     ebp, esi
        jmp     l_cont
    l_skip:
        fstp    st(0)
    l_cont:
        add     esi, 4
        cmp     esi, edi
        jnz     l_loop
        pop     ebx
    l_end:
        mov     eax, dword ptr [ebp]
        pop     ebp
        pop     edi
        pop     esi
        add     esp, 0x3c
        ret
    }
}
