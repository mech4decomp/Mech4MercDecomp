/*
 * FUN_004AED40 (116 B) — __thiscall keyframe interpolation.
 *   Iterates keyframes backwards, computing differences and calling
 *   FUN_004AE360 for each.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_004ae360(void);
extern void __stdcall FUN_004ae6a0(int param);

extern float DAT_0076d064;
extern float DAT_0076c5b0;

__declspec(naked) void __stdcall FUN_004aed40(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 8]
        test    edi, edi
        jnz     l_have_count
        push    edi
        call    FUN_004ae6a0
        mov     edi, dword ptr [esi + 8]
    l_have_count:
        mov     ecx, dword ptr [esi + 4]
        fld     dword ptr [DAT_0076d064]
        dec     edi
        lea     eax, [edi + edi * 2]
        fsub    dword ptr [ecx + eax * 4]
        lea     esi, [ecx + eax * 4]
        fst     dword ptr [esp + 0xc]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      l_skip_clamp
        mov     dword ptr [esp + 0xc], 0
    l_skip_clamp:
        mov     edx, dword ptr [esp + 0xc]
        mov     ebx, dword ptr [esp + 0x14]
        push    edx
        push    ebx
        mov     ecx, esi
        call    FUN_004ae360
        dec     edi
        js      l_done
        inc     edi
    l_loop:
        fld     dword ptr [esi]
        sub     esi, 0xc
        fsub    dword ptr [esi]
        push    ecx
        mov     ecx, esi
        fstp    dword ptr [esp]
        push    ebx
        call    FUN_004ae360
        dec     edi
        jnz     l_loop
    l_done:
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     4
    }
}
