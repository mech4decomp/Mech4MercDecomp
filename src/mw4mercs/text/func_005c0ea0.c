/*
 * FUN_005c0ea0 (63 B) — __thiscall (ECX = this), RET 4 (one stack param).
 * If param==1, decrement this+8 (clamped). Else grow a buffer: compute
 * new size = this[2]*2+2, add to this[1], clamp both against this[0].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005c0ea0(void)
{
    __asm {
        cmp     byte ptr [esp + 0x4], 0x1
        jnz     L_grow
        mov     eax, dword ptr [ecx + 0x8]
        cmp     eax, 0x1
        jle     L_ret
        dec     eax
        mov     dword ptr [ecx + 0x8], eax
        ret     4
L_grow:
        mov     eax, dword ptr [ecx + 0x8]
        lea     edx, [eax + eax + 0x2]
        mov     eax, dword ptr [ecx + 0x4]
        add     eax, edx
        push    esi
        mov     esi, eax
        mov     dword ptr [ecx + 0x4], eax
        mov     eax, dword ptr [ecx]
        cmp     esi, eax
        mov     dword ptr [ecx + 0x8], edx
        pop     esi
        jle     L1
        mov     dword ptr [ecx + 0x4], eax
L1:
        cmp     edx, eax
        jle     L_ret
        mov     dword ptr [ecx + 0x8], eax
L_ret:
        ret     4
    }
}
