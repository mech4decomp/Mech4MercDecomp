/*
 * FUN_00480D50 (95 B) — Animation keyframe interpolation helper.
 *
 * __stdcall, RET 0x10 (4 params). Stores keyframe data into global
 * arrays at 0x7DA60C. Computes inverse delta or sentinel value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern float DAT_007b220c;   /* epsilon constant */
extern float DAT_0076d064;   /* constant */

__declspec(naked) void __stdcall FUN_00480d50(void)
{
    __asm {
        fld     dword ptr [esp + 0x0c]      ; param_3
        mov     ecx, dword ptr [esp + 4]    ; param_1
        fsub    dword ptr [esp + 8]         ; param_3 - param_2
        mov     eax, dword ptr [esp + 8]    ; param_2
        mov     edx, dword ptr [esp + 0x0c] ; param_3
        dec     ecx
        fld     st(0)                       ; duplicate diff
        shl     ecx, 4
        fabs                                ; |diff|
        mov     dword ptr [ecx + 0x7da60c], eax  ; store param_2
        fld     dword ptr [DAT_007b220c]    ; fld dword ptr [epsilon]
        mov     eax, dword ptr [esp + 0x10] ; param_4
        fcompp                              ; compare |diff| with epsilon, pop twice
        mov     dword ptr [ecx + 0x7da610], edx  ; store param_3
        mov     dword ptr [ecx + 0x7da614], eax  ; store param_4
        fnstsw  ax
        test    ah, 1                       ; C2? (unordered/NaN)
        jnz     l_compute_inv               ; if not comparable or > epsilon
        fstp    st(0)                       ; pop st0
        mov     dword ptr [ecx + 0x7da618], 0x3b03126f  ; sentinel ~0.002
        ret
    l_compute_inv:
        fld     dword ptr [DAT_0076d064]    ; fld dword ptr [constant]
        fdiv    st(0), st(1)
        fstp    dword ptr [ecx + 0x7da618]  ; fstp dword ptr [ecx+0x7da618]
        fstp    st(0)                       ; pop remaining
        ret
    }
}
