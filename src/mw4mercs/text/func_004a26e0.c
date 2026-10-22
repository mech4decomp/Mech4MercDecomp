/*
 * FUN_004A26E0 (337 B) — __thiscall MLR curve/offset validation. Reads
 *   sub-objects via FUN_004ad160, compares float sums against constants
 *   (0x76c5b0, 0x770164, 0x770160), emits warnings via FUN_006fabf0
 *   (assert-style, INT3 on failure), then calls FUN_004a3890. RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004ad160(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_004a3890(void);

extern float g_0076c5b0;
extern float g_00770164;
extern float g_00770160;

__declspec(naked) void __fastcall FUN_004a26e0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x18
        push    ebx
        push    esi
        mov     esi, ecx
        lea     eax, [ebp - 0x8]
        push    eax
        lea     ecx, [ebp - 0x4]
        push    ecx
        lea     ecx, [esi + 0x190]
        call    FUN_004ad160
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [g_0076c5b0]
        mov     edx, dword ptr [ebp - 0x4]
        mov     dword ptr [ebp - 0x14], edx
        fnstsw  ax
        test    ah, 0x41
        jnz     L_271a
        mov     dword ptr [ebp - 0x14], 0x0
L_271a:
        mov     eax, dword ptr [ebp - 0x8]
        lea     ecx, [ebp - 0xc]
        push    ecx
        lea     edx, [ebp - 0x10]
        push    edx
        lea     ecx, [esi + 0x188]
        mov     dword ptr [ebp - 0x18], eax
        call    FUN_004ad160
        fld     dword ptr [ebp - 0xc]
        fadd    dword ptr [ebp - 0x18]
        mov     ebx, dword ptr [ebp + 0x8]
        fcomp   dword ptr [g_00770164]
        fnstsw  ax
        test    ah, 0x41
        jz      L_275c
        fld     dword ptr [ebp - 0x10]
        fadd    dword ptr [ebp - 0x14]
        fcomp   dword ptr [g_00770160]
        fnstsw  ax
        test    ah, 0x1
        jz      L_2784
L_275c:
        test    bl, bl
        jz      L_2827
        mov     dword ptr [esi + 0x18c], 0x0
        mov     eax, dword ptr [esi + 0x4]
        push    eax
        push    0x7b2e24
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_2784
        int     3
L_2784:
        lea     ecx, [ebp - 0x8]
        push    ecx
        lea     edx, [ebp - 0x4]
        push    edx
        lea     ecx, [esi + 0x198]
        call    FUN_004ad160
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [g_0076c5b0]
        mov     eax, dword ptr [ebp - 0x4]
        mov     dword ptr [ebp - 0x14], eax
        fnstsw  ax
        test    ah, 0x41
        jnz     L_27b4
        mov     dword ptr [ebp - 0x14], 0x0
L_27b4:
        mov     ecx, dword ptr [ebp - 0x8]
        lea     edx, [ebp - 0xc]
        push    edx
        lea     eax, [ebp - 0x10]
        mov     dword ptr [ebp - 0x18], ecx
        push    eax
        lea     ecx, [esi + 0x180]
        call    FUN_004ad160
        fld     dword ptr [ebp - 0xc]
        fadd    dword ptr [ebp - 0x18]
        fcomp   dword ptr [g_00770164]
        fnstsw  ax
        test    ah, 0x41
        jz      L_27f3
        fld     dword ptr [ebp - 0x10]
        fadd    dword ptr [ebp - 0x14]
        fcomp   dword ptr [g_00770160]
        fnstsw  ax
        test    ah, 0x1
        jz      L_2817
L_27f3:
        test    bl, bl
        jz      L_2827
        mov     dword ptr [esi + 0x184], 0x0
        mov     ecx, dword ptr [esi + 0x4]
        push    ecx
        push    0x7b2e70
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_2817
        int     3
L_2817:
        push    ebx
        mov     ecx, esi
        call    FUN_004a3890
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L_2827:
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
