/*
 * FUN_006999b0 (174 B) — Vector interpolation/copy. If the scalar
 * param_6 lies within [*param_4, *param_5] (with a threshold check
 * against 0x0076d59c), linearly interpolates param_2 -> param_3 into
 * param_1; otherwise copies param_2 (or param_3) into param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d59c;

__declspec(naked) void __cdecl FUN_006999b0(void)
{
    __asm {
        fld     dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x14]
        fcomp   dword ptr [edx]
        sub     esp, 0xc
        fnstsw  ax
        test    ah, 0x41
        jnz     l_second
        mov     ecx, dword ptr [esp + 0x18]
        jmp     l_copy2
    l_second:
        fld     dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x1c]
        fcomp   dword ptr [ecx]
        fnstsw  ax
        test    ah, 0x40
        jnz     l_copy
        fld     dword ptr [edx]
        fsub    dword ptr [ecx]
        fabs
        fcomp   dword ptr [g_76d59c]
        fnstsw  ax
        test    ah, 0x41
        jz      l_interp
    l_copy:
        mov     ecx, dword ptr [esp + 0x14]
    l_copy2:
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 4]
        mov     ecx, dword ptr [ecx + 8]
        mov     dword ptr [eax + 4], edx
        mov     dword ptr [eax + 8], ecx
        add     esp, 0xc
        ret
    l_interp:
        fld     dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x14]
        fsub    dword ptr [ecx]
        fld     dword ptr [edx]
        fsub    dword ptr [ecx]
        mov     ecx, dword ptr [esp + 0x18]
        fdivp   st(1), st(0)
        fld     dword ptr [ecx]
        fsub    dword ptr [eax]
        fmul    st(0), st(1)
        fadd    dword ptr [eax]
        __emit 0xD9          /* fstp dword ptr [esp]: MSVC6 drops zero-disp 00 byte */
        __emit 0x5C
        __emit 0x24
        __emit 0x00
        fld     dword ptr [ecx + 4]
        fsub    dword ptr [eax + 4]
        fmul    st(0), st(1)
        fadd    dword ptr [eax + 4]
        fld     dword ptr [ecx + 8]
        fsub    dword ptr [eax + 8]
        fmul    st(0), st(2)
        fadd    dword ptr [eax + 8]
        mov     eax, dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 8]
        __emit 0xD9          /* fld dword ptr [esp]: MSVC6 drops zero-disp 00 byte */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov     dword ptr [eax + 8], edx
        fstp    dword ptr [eax]
        fstp    dword ptr [eax + 4]
        fstp    st(0)
        add     esp, 0xc
        ret
    }
}
