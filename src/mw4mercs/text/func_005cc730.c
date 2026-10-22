/*
 * FUN_005cc730 (399 B) — __thiscall method (RET 8, 1 double param).
 *   Clamps vector components, calls FUN_005cc620, does FPU math with a
 *   double param, calls FUN_006100d0, and dispatches a virtual.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_00419480(void);
extern void FUN_0041acb0(void);
extern void FUN_0041a070(void);
extern void FUN_005cc620(void);
extern void FUN_006100d0(void);
extern void FUN_004daa20(void);

__declspec(naked) void FUN_005cc730(void)
{
    

extern int DAT_0076c5b0;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_0078096c;
__asm {
sub     esp, 0x50
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, [esi + 0x170]
        mov     eax, [edi + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00419480
        mov     ecx, [edi + 0xd8]
        add     ecx, 0x80
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_0041acb0
        lea     edx, [esp + 0x1c]
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041a070
        fld     dword ptr [esi + 0x334]
        fcomp   dword ptr [esi + 0x1f8]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_795
        mov     eax, [esi + 0x1f8]
        mov     [esi + 0x334], eax

    l_795:
        fld     dword ptr [esi + 0x1f8]
        fchs
        fcom    dword ptr [esi + 0x334]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_7b0
        fst     dword ptr [esi + 0x334]

    l_7b0:
        fld     dword ptr [esi + 0x338]
        fcomp   dword ptr [esi + 0x1f8]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_7cf
        mov     ecx, [esi + 0x1f8]
        mov     [esi + 0x338], ecx

    l_7cf:
        fcom    dword ptr [esi + 0x338]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_7e4
        fstp    dword ptr [esi + 0x338]
        jmp     l_7e6

    l_7e4:
        fstp st(0)

    l_7e6:
        mov     ecx, esi
        call    FUN_005cc620
        fld     qword ptr [esp + 0x5c]
        fsub    qword ptr [esi + 0xe4]
        mov     eax, [esp + 0x14]
        mov     edi, [esi + 0x170]
        lea     edx, [esp + 0xc]
        fld st(0)
        push    edx
        fmul    dword ptr [esi + 0x33c]
        push    eax
        lea     ecx, [esp + 0x13]
        push    ecx
        fadd    dword ptr [esp + 0x1c]
        push    edi
        mov     dword ptr [esp + 0x1c], 0
        fstp    dword ptr [esp + 0x20]
        mov     eax, [esp + 0x20]
        fmul    dword ptr [esi + 0x340]
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x28]
        mov     edx, [esp + 0x28]
        push    edx
        push    eax
        call    FUN_006100d0
        fst     dword ptr [esp + 0x2c]
        fld     dword ptr [esi + 0x200]
        add     esp, 0x18
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     l_864
        fadd    dword ptr [esi + 0x200]
        jmp     l_88a

    l_864:
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, [ecx]
        mov esi, dword ptr [DAT_007dab40]
        mov     ecx, [esp + 0xc]
        xor     edx, esi
        mov     eax, [edx + 0x1c]
        xor     eax, 0x85739531
        cmp     ecx, eax
        jz      l_88e
        fsub dword ptr [DAT_0078096c]

    l_88a:
        fst     dword ptr [esp + 0x14]

    l_88e:
        mov     ecx, [esp + 0x10]
        fstp    dword ptr [esp + 0x44]
        mov     edx, [esp + 0x18]
        lea     eax, [esp + 0x28]
        mov     [esp + 0x34], ecx
        push    eax
        mov     ecx, edi
        mov     [esp + 0x58], edx
        call    FUN_004daa20
        mov     edx, [edi]
        push    1
        mov     ecx, edi
        call    dword ptr [edx + 0x48]
        pop     edi
        pop     esi
        add     esp, 0x50
        ret     8
    }


}
