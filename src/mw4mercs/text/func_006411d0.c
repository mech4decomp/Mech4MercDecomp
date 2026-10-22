/*
 * FUN_006411d0 (43 B) — cdecl element-wise copy loop.
 *
 * If param_1 != param_2, copies 8-byte elements from param_1 to
 * param_3 (skipping the store when param_3 is null) until param_1
 * reaches param_2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006411d0(void *p1, void *p2, void *p3)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        cmp     ecx, edx
        mov     eax, dword ptr [esp + 0xC]
        jz      L_ret
        push    esi
L_loop:
        test    eax, eax
        jz      L_skip
        mov     esi, dword ptr [ecx]
        mov     dword ptr [eax], esi
        mov     esi, dword ptr [ecx + 4]
        mov     dword ptr [eax + 4], esi
L_skip:
        add     ecx, 8
        add     eax, 8
        cmp     ecx, edx
        jnz     L_loop
        pop     esi
L_ret:
        ret
    }
}
