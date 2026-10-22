/*
 * FUN_004AE300 (93 B) — __thiscall float range clamp with threshold.
 *   Reads [ecx+8] as base, [ecx+4] as scale. If param3 >= DAT_007b220c,
 *   computes param3 * scale + base and clamps outputs.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float DAT_007b220c;

__declspec(naked) void __stdcall FUN_004ae300(void)
{
    __asm {
        fld     dword ptr [ecx + 8]
        mov     edx, dword ptr [esp + 4]
        fld     st(0)
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        fstp    dword ptr [edx]
        fstp    dword ptr [esi]
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [DAT_007b220c]
        fnstsw  ax
        test    ah, 1
        jnz     l_return
        fld     dword ptr [esp + 0x10]
        mov     eax, dword ptr [ecx + 8]
        fmul    dword ptr [ecx + 4]
        mov     dword ptr [esp + 8], eax
        fadd    dword ptr [esp + 8]
        fcom    dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_check_less
        fstp    dword ptr [esi]
        pop     esi
        ret     0xc
    l_check_less:
        fcom    dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 1
        jz      l_pop_and_return
        fstp    dword ptr [edx]
        pop     esi
        ret     0xc
    l_pop_and_return:
        fstp    st(0)
    l_return:
        pop     esi
        ret     0xc
    }
}
