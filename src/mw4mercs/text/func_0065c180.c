/*
 * FUN_0065C180 (218 B) — __cdecl (RET). Reads a vector from param_2+0xd8,
 * optionally negates components based on param_3, and either copies the
 * vector to param_1 or scales it by param_4 * [ecx+0x8c] and accumulates.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0065c180(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [ecx + 0xd8]
        mov     dl, byte ptr [esp + 0xc]
        fld     dword ptr [eax + 0x88]
        add     eax, 0x80
        sub     esp, 0x24
        cmp     dl, 0x1
        jnz     l_b1
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [eax + 0x18]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [eax + 0x28]
        jmp     l_c5
    l_b1:
        fchs
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [eax + 0x18]
        fchs
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [eax + 0x28]
        fchs
    l_c5:
        mov     edx, dword ptr [eax + 0xc]
        mov     ecx, dword ptr [ecx + 0x124]
        test    ecx, ecx
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [eax + 0x1c]
        mov     eax, dword ptr [eax + 0x2c]
        __emit 0x89  /* __emit: zero-disp [esp] mem op — MSVC6 emits 89 14 24, ref needs 89 54 24 00 */
        __emit 0x54
        __emit 0x24
        __emit 0x00
        mov     dword ptr [esp + 0x8], eax
        jnz     l_fc
        mov     eax, dword ptr [esp + 0x28]
        __emit 0xD9  /* __emit: zero-disp [esp] FPU mem op — MSVC6 emits D9 04 24, ref needs D9 44 24 00 */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov     ecx, dword ptr [esp + 0x8]
        fstp    dword ptr [eax]
        mov     dword ptr [eax + 0x8], ecx
        fstp    dword ptr [eax + 0x4]
        add     esp, 0x24
        ret
    l_fc:
        fld     dword ptr [esp + 0x34]
        mov     eax, dword ptr [esp + 0x28]
        fmul    dword ptr [ecx + 0x8c]
        fld     dword ptr [esp + 0xc]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x10]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x14]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x20]
        fstp    st(0)
        fld     dword ptr [esp + 0x18]
        __emit 0xD8  /* __emit: zero-disp [esp] FPU mem op — MSVC6 emits D8 04 24, ref needs D8 44 24 00 */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0xD9  /* __emit: zero-disp [esp] FPU mem op — MSVC6 emits D9 1C 24, ref needs D9 5C 24 00 */
        __emit 0x5C
        __emit 0x24
        __emit 0x00
        fadd    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x20]
        fadd    dword ptr [esp + 0x8]
        fstp    dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0x8]
        __emit 0xD9  /* __emit: zero-disp [esp] FPU mem op — MSVC6 emits D9 04 24, ref needs D9 44 24 00 */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov     dword ptr [eax + 0x8], edx
        fstp    dword ptr [eax]
        fstp    dword ptr [eax + 0x4]
        add     esp, 0x24
        ret
    }
}
