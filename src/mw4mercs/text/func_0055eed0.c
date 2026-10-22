/*
 * FUN_0055eed0 (332 B) — Single sprite/particle coordinate setup.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __cdecl FUN_0055e420(int val);
extern void __cdecl FUN_0055e740(int *a, int *b, int *c, int *d);
extern void __cdecl FUN_00713cc0(int a, int b);
extern void __cdecl FUN_00713a70(void *buf, int count);
extern float DAT_007dddb8;
extern float DAT_0076c5b0;
extern float DAT_007dddb4;
extern int DAT_007dddbc;

__declspec(naked) void FUN_0055eed0(void)
{
    __asm {
        fld     dword ptr [DAT_007dddb8]
        sub     esp, 0x40
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     l_skip_alpha1

        mov     eax, [esp + 0x44]
        push    eax
        call    FUN_0055e420
        mov     ecx, [esp + 0x4c]
        push    ecx
        mov     [esp + 0x4c], eax
        call    FUN_0055e420
        mov     edx, [esp + 0x54]
        push    edx
        mov     [esp + 0x54], eax
        call    FUN_0055e420
        mov     [esp + 0x58], eax
        mov     eax, [esp + 0x5c]
        push    eax
        call    FUN_0055e420
        add     esp, 0x10
        push    1
        push    0xb
        mov     [esp + 0x58], eax
        call    FUN_00713cc0

    l_skip_alpha1:
        fld     dword ptr [DAT_007dddb4]
        push    esi
        fcomp   dword ptr [DAT_0076c5b0]
        mov     esi, [esp + 0x58]
        fnstsw  ax
        test    ah, 0x40
        jnz     l_skip_alpha2

        mov     ecx, dword ptr [DAT_007dddbc]
        mov     eax, esi
        shr     eax, 0x18
        sub     eax, ecx
        and     esi, 0xffffff
        test    eax, eax
        jge     l_alpha_clamp_ge
        xor     eax, eax
        jmp     l_alpha_clamp_done
    l_alpha_clamp_ge:
        cmp     eax, 0xff
        jle     l_alpha_clamp_done
        mov     eax, 0xff
    l_alpha_clamp_done:
        shl     eax, 0x18
        or      esi, eax

    l_skip_alpha2:
        lea     ecx, [esp + 0x54]
        push    ecx
        lea     edx, [esp + 0x54]
        push    edx
        lea     eax, [esp + 0x54]
        push    eax
        lea     ecx, [esp + 0x54]
        push    ecx
        call    FUN_0055e740
        fild    dword ptr [esp + 0x58]
        add     esp, 0x10
        push    0
        fstp    dword ptr [esp + 0x8]
        push    1
        fild    dword ptr [esp + 0x54]
        mov     [esp + 0x1c], esi
        mov     dword ptr [esp + 0x20], 0
        mov     dword ptr [esp + 0x18], 0x3f800000
        fstp    dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x24], 0
        fild    dword ptr [esp + 0x58]
        mov     dword ptr [esp + 0x28], 0
        mov     dword ptr [esp + 0x14], 0x3f666666
        mov     [esp + 0x3c], esi
        fstp    dword ptr [esp + 0x2c]
        mov     dword ptr [esp + 0x40], 0
        fild    dword ptr [esp + 0x5c]
        mov     dword ptr [esp + 0x38], 0x3f800000
        mov     dword ptr [esp + 0x44], 0
        mov     dword ptr [esp + 0x48], 0
        fstp    dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x34], 0x3f666666
        call    FUN_00713cc0
        push    2
        lea     edx, [esp + 0x8]
        push    edx
        call    FUN_00713a70
        pop     esi
        add     esp, 0x40
        ret
    }
}
