/*
 * FUN_004ADE60 (72 B) — __thiscall float range clamp.
 *   Reads [ecx+4] and [ecx+8], writes min/max to *param1/*param2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004ade60(void)
{
    __asm {
        fld     dword ptr [ecx + 4]
        mov     edx, dword ptr [esp + 4]
        mov     eax, dword ptr [ecx + 4]
        fld     st(0)                           ; fld st(0) (D9 C0)
        fstp    dword ptr [edx]
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     dword ptr [esp + 8], eax
        fstp    dword ptr [esi]
        fld     dword ptr [esp + 8]
        fadd    dword ptr [ecx + 8]
        fcom    dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_check_less
        fstp    dword ptr [esi]
        pop     esi
        ret     8
    l_check_less:
        fcom    dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 1
        jz      l_pop_and_return
        fstp    dword ptr [edx]
        pop     esi
        ret     8
    l_pop_and_return:
        fstp    st(0)                           ; fstp st(0) (DD D8)
        pop     esi
        ret     8
    }
}
