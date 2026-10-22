/*
 * FUN_0055fe00 (896 B) — Particle/sprite rendering variant (__thiscall).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_007dddbc;
extern float DAT_007dddb8;
extern float DAT_0076c5b0;
extern int DAT_00560180;
extern void __cdecl FUN_00713cc0(void);
extern void __cdecl FUN_0055e440(void);
extern void __cdecl FUN_00713ae0(void);

__declspec(naked) void FUN_0055fe00(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007dddbc]
        sub     esp, 0xac
        test    eax, eax
        push    esi
        mov     esi, ecx
        jz      l_blend_use_val
        cmp     dword ptr [esi + 0x3c], 3
        jz      l_blend_use_val
        push    3
        jmp     l_blend_push
    l_blend_use_val:
        mov     eax, dword ptr [esi + 0x3c]
        push    eax
    l_blend_push:
        push    0xd
        call    FUN_00713cc0
        mov     al, byte ptr [esi + 0x40]
        test    al, al
        jz      l_alpha_push_0
        push    1
        jmp     l_alpha_push
    l_alpha_push_0:
        push    0
    l_alpha_push:
        push    0xb
        call    FUN_00713cc0
        mov     eax, dword ptr [DAT_007dddbc]
        test    eax, eax
        jz      l_srcblend_use_val
        cmp     dword ptr [esi + 0x38], 3
        jz      l_srcblend_use_val
        push    3
        jmp     l_srcblend_push
    l_srcblend_use_val:
        mov     ecx, dword ptr [esi + 0x38]
        push    ecx
    l_srcblend_push:
        push    0x10
        call    FUN_00713cc0
        mov     edx, dword ptr [esp + 0xbc]
        push    edi
        xor     eax, eax
        mov     ecx, 0x20
        lea     edi, [esp + 0x1c]
        rep stosd
        lea     eax, [esp + 0x2c]
        mov     ecx, 4
        mov     edi, 0x3f666666
    l_init_loop:
        mov     dword ptr [eax - 4], 0x3f800000
        mov     dword ptr [eax], edx
        mov     dword ptr [eax - 8], edi
        add     eax, 0x20
        dec     ecx
        jnz     l_init_loop

        mov     edx, dword ptr [esi]
        push    edx
        push    1
        call    FUN_00713cc0
        fld     dword ptr [esi + 0xc]
        mov     eax, dword ptr [esp + 0xbc]
        fsub    dword ptr [esi + 4]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x9c], ecx
        fmul    dword ptr [esi + 0x14]
        fld     dword ptr [esi + 0x10]
        fsub    dword ptr [esi + 8]
        fmul    dword ptr [esi + 0x18]
        fstp    dword ptr [esp + 0xac]
        fdivr   dword ptr [eax]
        fmul    dword ptr [esi + 0x28]
        fchs
        fld     dword ptr [eax + 4]
        fdiv    dword ptr [esp + 0xac]
        fmul    dword ptr [esi + 0x2c]
        fchs
        fstp    dword ptr [esp + 8]
        fld     dword ptr [esp + 0x9c]
        fadd    st, st(1)
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 8]
        fadd    dword ptr [eax + 4]
        mov     eax, dword ptr [esp + 0xb8]
        fstp    dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x30]
        fld     dword ptr [esp + 8]
        fmul    dword ptr [esi + 0x34]
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esi + 0x30]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x34]
        fstp    dword ptr [esp + 0x10]
        fld     st(1)
        fmul    dword ptr [esi + 0x20]
        fstp    dword ptr [esp + 0x18]
        fld     st(0)
        fmul    dword ptr [esi + 0x24]
        fstp    dword ptr [esp + 8]
        fld     dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 8]
        fadd    dword ptr [eax]
        fstp    dword ptr [esp + 0x1c]
        fmul    dword ptr [esi + 0x20]
        fstp    dword ptr [esp + 0xc]
        fmul    dword ptr [esi + 0x24]
        fld     st(0)
        fadd    dword ptr [esp + 0xc]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esi + 0x20]
        fld     st(0)
        fsub    dword ptr [esp + 8]
        fadd    dword ptr [eax]
        fstp    dword ptr [esp + 0x3c]
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esi + 0x24]
        fst     dword ptr [esp + 8]
        fadd    dword ptr [esp + 0xc]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [esp + 0x40]
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x24]
        fstp    dword ptr [esp + 0xc]
        pop     edi
        fsub    dword ptr [esp + 8]
        fadd    dword ptr [eax]
        fstp    dword ptr [esp + 0x58]
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [esi + 0x20]
        fld     st(0)
        fadd    dword ptr [esp + 4]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [esp + 0x5c]
        fld     dword ptr [esp + 0x14]
        fsub    dword ptr [esp + 8]
        fadd    dword ptr [eax]
        fstp    dword ptr [esp + 0x78]
        fadd    st, st(1)
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [esp + 0x7c]
        fstp    st(0)
        fld     dword ptr [DAT_007dddb8]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     l_skip_alpha_adjust

        push    1
        push    0xb
        call    FUN_00713cc0
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        call    FUN_0055e440
        fstp    dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x20]
        push    eax
        call    FUN_0055e440
        fstp    dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x40]
        push    ecx
        call    FUN_0055e440
        fstp    dword ptr [esp + 0x44]
        mov     edx, dword ptr [esp + 0x48]
        push    edx
        call    FUN_0055e440
        fstp    dword ptr [esp + 0x4c]
        mov     eax, dword ptr [esp + 0x68]
        push    eax
        call    FUN_0055e440
        fstp    dword ptr [esp + 0x6c]
        mov     ecx, dword ptr [esp + 0x70]
        push    ecx
        call    FUN_0055e440
        fstp    dword ptr [esp + 0x74]
        mov     edx, dword ptr [esp + 0x90]
        push    edx
        call    FUN_0055e440
        fstp    dword ptr [esp + 0x94]
        mov     eax, dword ptr [esp + 0x98]
        push    eax
        call    FUN_0055e440
        fstp    dword ptr [esp + 0x9c]
        add     esp, 0x20

    l_skip_alpha_adjust:
        mov     eax, dword ptr [esp + 0xc0]
        cmp     eax, 3
        ja      l_switch_end
        jmp     dword ptr [eax*4 + DAT_00560180]

    l_case0:
        fld     dword ptr [esi + 4]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [esi + 8]
        fstp    dword ptr [esp + 0x34]
        fld     dword ptr [esi + 0xc]
        fstp    dword ptr [esp + 0x50]
        fld     dword ptr [esi + 8]
        fstp    dword ptr [esp + 0x54]
        fld     dword ptr [esi + 0xc]
        fstp    dword ptr [esp + 0x70]
        fld     dword ptr [esi + 0x10]
        fstp    dword ptr [esp + 0x74]
        fld     dword ptr [esi + 4]
        fstp    dword ptr [esp + 0x90]
        fld     dword ptr [esi + 0x10]
        fstp    dword ptr [esp + 0x94]
        jmp     l_switch_end

    l_case1:
        fld     dword ptr [esi + 4]
        fstp    dword ptr [esp + 0x50]
        fld     dword ptr [esi + 8]
        fstp    dword ptr [esp + 0x34]
        fld     dword ptr [esi + 0xc]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [esi + 8]
        fstp    dword ptr [esp + 0x54]
        fld     dword ptr [esi + 0xc]
        fstp    dword ptr [esp + 0x90]
        fld     dword ptr [esi + 0x10]
        fstp    dword ptr [esp + 0x74]
        fld     dword ptr [esi + 4]
        fstp    dword ptr [esp + 0x70]
        fld     dword ptr [esi + 0x10]
        fstp    dword ptr [esp + 0x94]
        jmp     l_switch_end

    l_case2:
        fld     dword ptr [esi + 4]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [esi + 0xc]
        fstp    dword ptr [esp + 0x50]
        fld     dword ptr [esi + 8]
        fstp    dword ptr [esp + 0x74]
        fld     dword ptr [esi + 0xc]
        fstp    dword ptr [esp + 0x70]
        fld     dword ptr [esi + 0x10]
        fstp    dword ptr [esp + 0x54]
        fld     dword ptr [esi + 4]
        fstp    dword ptr [esp + 0x90]
        fld     dword ptr [esi + 0x10]
        fstp    dword ptr [esp + 0x34]
        jmp     l_switch_end

    l_case3:
        fld     dword ptr [esi + 4]
        fstp    dword ptr [esp + 0x70]
        fld     dword ptr [esi + 8]
        fstp    dword ptr [esp + 0x74]
        fld     dword ptr [esi + 0xc]
        fstp    dword ptr [esp + 0x90]
        fld     dword ptr [esi + 8]
        fstp    dword ptr [esp + 0x94]
        fld     dword ptr [esi + 0xc]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [esi + 0x10]
        fstp    dword ptr [esp + 0x34]
        fld     dword ptr [esi + 4]
        fstp    dword ptr [esp + 0x50]
        fld     dword ptr [esi + 0x10]
        fstp    dword ptr [esp + 0x54]

    l_switch_end:
        push    4
        lea     ecx, [esp + 0x1c]
        push    ecx
        call    FUN_00713ae0
        pop     esi
        add     esp, 0xac
        ret     0x10
    }
}
