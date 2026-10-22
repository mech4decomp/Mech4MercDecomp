/*
 * FUN_0068ea20 (87 B) — __thiscall (ECX = this) vector-clamp helper.
 *
 * Computes element count from [this+0x2C]-[this+0x28] / 12, then for
 * each 3-float element, if either of the first two equals the param
 * float, overwrites all three with -1.0f.
 *
 * RET 4 (one float stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0068ea20(void *param)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x2c]
        push    esi
        mov     esi, dword ptr [ecx + 0x28]
        sub     edx, esi
        mov     eax, 0x2aaaaaab
        imul    edx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        test    edx, edx
        jle     L_73
        fild    dword ptr [esp + 0x8]
        mov     ecx, esi
        mov     esi, 0xbf800000
L_48:
        fcom    dword ptr [ecx]
        fnstsw  ax
        test    ah, 0x40
        jz      L_59
        mov     dword ptr [ecx], esi
        mov     dword ptr [ecx + 0x4], esi
        mov     dword ptr [ecx + 0x8], esi
L_59:
        fcom    dword ptr [ecx + 0x4]
        fnstsw  ax
        test    ah, 0x40
        jz      L_6b
        mov     dword ptr [ecx], esi
        mov     dword ptr [ecx + 0x4], esi
        mov     dword ptr [ecx + 0x8], esi
L_6b:
        add     ecx, 0xc
        dec     edx
        jnz     L_48
        fstp    st(0)
L_73:
        pop     esi
        ret     0x4
    }
}
