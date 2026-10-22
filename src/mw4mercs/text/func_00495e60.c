/*
 * FUN_00495E60 (64 B) — __thiscall (ECX = this), RET 0x8.
 * Interpolate: find segment containing param, then lerp.
 * Struct at ECX: +0x04 = float* keys (stride 12: key, slope, intercept),
 *                +0x08 = count.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_00495e60(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [ecx + 0x08]
        xor     edx, edx
        test    esi, esi
        push    edi
        jbe     l_found
        mov     edi, dword ptr [ecx + 0x04]
    l_loop:
        fld     dword ptr [edi]
        fcomp   dword ptr [esp + 0x0c]
        fnstsw  ax
        test    ah, 0x41
        jz      l_found
        inc     edx
        add     edi, 0x0c
        cmp     edx, esi
        jc      l_loop
    l_found:
        mov     ecx, dword ptr [ecx + 0x04]
        fld     dword ptr [esp + 0x0c]
        lea     eax, [edx + edx * 2]
        fsub    dword ptr [ecx + eax * 4 - 0x0c]
        lea     eax, [ecx + eax * 4 - 0x0c]
        pop     edi
        pop     esi
        fmul    dword ptr [eax + 0x04]
        fadd    dword ptr [eax + 0x08]
        ret     0x08
    }
}
