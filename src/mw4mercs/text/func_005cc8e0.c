/*
 * FUN_005CC8E0 (1178 B) — __fastcall (ECX = this), RET 0x8.
 * Complex animation/aiming update: reads object state, does FPU vector
 * math, calls FUN_00707e70 (random), FUN_00415020, FUN_005cc8c0,
 * FUN_005cd6f0. Updates fields at this+0x318..0x398.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern float __cdecl FUN_00707e70(int);
extern float __cdecl FUN_00415020(void);
extern float __cdecl FUN_005cc8c0(void);
extern char __cdecl FUN_005cd6f0(void);

extern float DAT_00787d4c;
extern float DAT_00787d50;
extern float DAT_0076c5b0;
extern float DAT_0076d048;
extern float DAT_007748c8;
extern float DAT_00787d34;
extern int   DAT_007dab44;
extern int   DAT_007dab40;

__declspec(naked) void __fastcall FUN_005cc8e0(void *param1)
{
    __asm {
        sub     esp, 0x48
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x324]
        xor     ebp, ebp
        cmp     eax, ebp
        push    edi
        jz      l_945
        mov     eax, dword ptr [esi + 0x170]
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esi + 0x318], ebp
        mov     dword ptr [esi + 0x31c], ebp
        mov     dword ptr [esi + 0x328], ecx
        mov     dword ptr [esi + 0x32c], edx
        mov     dword ptr [esi + 0x330], eax
        mov     dword ptr [esi + 0x334], ebp
        mov     dword ptr [esi + 0x338], ebp
        mov     dword ptr [esi + 0x324], ebp
    l_945:
        fld     dword ptr [DAT_00787d4c]
        push    ebp
        fadd    dword ptr [esi + 0x38c]
        fstp    qword ptr [esp + 0x24]
        call    FUN_00707e70
        fcomp   qword ptr [esp + 0x20]
        fnstsw  ax
        test    ah, 1
        jnz     l_cd70
        mov     ecx, dword ptr [esi + 0x170]
        mov     eax, dword ptr [ecx + 0xd8]
        mov     edx, dword ptr [eax + 0x8c]
        mov     ecx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x28], edx
        mov     edx, dword ptr [eax + 0x2c]
        mov     eax, dword ptr [esi + 0x1e8]
        mov     dword ptr [esp + 0x2c], ecx
        mov     ecx, dword ptr [DAT_007dab44]
        mov     dword ptr [esp + 0x30], edx
        mov     edx, dword ptr [ecx]
        mov     dword ptr [esp + 0x14], eax
        xor     edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x18]
        lea     eax, [edx + 0x18]
        xor     bl, bl
        xor     edi, edi
        xor     ecx, 0x85739531
        mov     byte ptr [esp + 0x13], 0x0
        jz      l_ca6f
        fld     dword ptr [DAT_00787d50]
        mov     edi, dword ptr [eax]
        fadd    dword ptr [esi + 0x390]
        push    ebp
        xor     edi, 0x85739531
        fstp    qword ptr [esp + 0x24]
        call    FUN_00707e70
        fcomp   qword ptr [esp + 0x20]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_ca6a
        mov     eax, dword ptr [edi + 0xd8]
        fld     dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        fsub    dword ptr [esp + 0x28]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x50], edx
        fld     dword ptr [esp + 0x50]
        fsub    dword ptr [esp + 0x2c]
        mov     dword ptr [esp + 0x54], eax
        fld     dword ptr [esp + 0x54]
        fsub    dword ptr [esp + 0x30]
        fst     dword ptr [esp + 0x54]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x14]
        fadd    st(0), st(0)
        fcompp
        fstp    st(0)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        fstp    st(0)
        jnz     l_ca6f
        push    ebp
        mov     byte ptr [esp + 0x17], 0x1
        mov     bl, 0x1
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x390]
        jmp     l_ca6f
    l_ca6a:
        mov     byte ptr [esp + 0x13], 0x1
    l_ca6f:
        fld     dword ptr [esi + 0x384]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      l_ca95
        fld     dword ptr [esi + 0x388]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     l_cae8
    l_ca95:
        fld     dword ptr [esi + 0x384]
        fld     dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x50]
        fld     dword ptr [esi + 0x388]
        fstp    dword ptr [esp + 0x54]
        fsubr   dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x2c]
        fsub    dword ptr [esp + 0x50]
        fld     dword ptr [esp + 0x30]
        fsub    dword ptr [esp + 0x54]
        fst     dword ptr [esp + 0x54]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fcomp   dword ptr [DAT_0076d048]
        fstp    st(0)
        fnstsw  ax
        fstp    st(0)
        test    ah, 1
        fstp    st(0)
        jz      l_caea
    l_cae8:
        mov     bl, 0x1
    l_caea:
        cmp     bl, 1
        mov     ecx, dword ptr [esi + 0x384]
        mov     edx, dword ptr [esi + 0x388]
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x20], edx
        jnz     l_cd22
        cmp     byte ptr [esp + 0x13], bl
        jnz     l_cbd2
        fld     dword ptr [esi + 0x200]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      l_cbd2
        mov     edi, dword ptr [edi + 0xd8]
        fld     dword ptr [edi + 0x8c]
        mov     eax, dword ptr [edi + 0xac]
        fcomp   dword ptr [esp + 0x28]
        add     edi, 0x80
        fld     dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x54], eax
        fnstsw  ax
        /* __emit: MSVC6 reverses operands of test bl,ah (emits 84 DC) */
        __asm _emit 0x84 __asm _emit 0xE3    ; test bl, ah
        jz      l_cb58
        fadd    dword ptr [esp + 0x14]
        jmp     l_cb5c
    l_cb58:
        fsub    dword ptr [esp + 0x14]
    l_cb5c:
        fstp    dword ptr [esi + 0x384]
        fld     dword ptr [esp + 0x54]
        fcomp   dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x30]
        fnstsw  ax
        test    ah, 1
        jz      l_cb7b
        fadd    dword ptr [esp + 0x14]
        jmp     l_cb7f
    l_cb7b:
        fsub    dword ptr [esp + 0x14]
    l_cb7f:
        fstp    dword ptr [esi + 0x388]
        call    FUN_005cc8c0
        fstp    dword ptr [esp + 0x18]
        call    FUN_00415020
        fmul    dword ptr [esp + 0x18]
        fmul    dword ptr [DAT_007748c8]
        fadd    dword ptr [esi + 0x384]
        fstp    dword ptr [esi + 0x384]
        call    FUN_005cc8c0
        fstp    dword ptr [esp + 0x18]
        call    FUN_00415020
        fmul    dword ptr [esp + 0x18]
        fmul    dword ptr [DAT_007748c8]
        fadd    dword ptr [esi + 0x388]
        fstp    dword ptr [esi + 0x388]
        jmp     l_cccd0
    l_cbd2:
        call    FUN_00415020
        fmul    dword ptr [DAT_00787d34]
        mov     edx, dword ptr [esi + 0x330]
        mov     ecx, dword ptr [esi + 0x32c]
        fld     st(0)
        mov     dword ptr [esp + 0x3c], edx
        fcos
        mov     eax, ecx
        mov     dword ptr [esp + 0x38], ecx
        mov     ecx, edx
        mov     dword ptr [esp + 0x48], ecx
        mov     dword ptr [esp + 0x44], eax
        fmul    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x18]
        fsin
        fmul    dword ptr [esp + 0x14]
        fld     dword ptr [esi + 0x328]
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x34]
        fld     dword ptr [esp + 0x3c]
        fadd    st(0), st(1)
        fstp    dword ptr [esp + 0x3c]
        fld     dword ptr [esi + 0x328]
        fsub    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x40]
        fsubr   dword ptr [esp + 0x48]
        fld     dword ptr [esp + 0x28]
        fsub    dword ptr [esp + 0x34]
        fld     dword ptr [esp + 0x2c]
        fsub    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x30]
        fsub    dword ptr [esp + 0x3c]
        fld     dword ptr [esp + 0x28]
        fsub    dword ptr [esp + 0x40]
        fld     dword ptr [esp + 0x2c]
        fsub    dword ptr [esp + 0x44]
        fstp    dword ptr [esp + 0x50]
        fld     dword ptr [esp + 0x30]
        fsub    st(0), st(5)
        fstp    dword ptr [esp + 0x54]
        fld     st(1)
        fmul    st(0), st(2)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fld     st(4)
        fmul    st(0), st(5)
        faddp   st(1), st(0)
        fld     st(1)
        fmul    st(0), st(2)
        fld     dword ptr [esp + 0x54]
        fmul    dword ptr [esp + 0x54]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x50]
        fmul    dword ptr [esp + 0x50]
        faddp   st(1), st(0)
        fcompp
        fstp    st(0)
        fstp    st(0)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        fstp    st(0)
        jnz     l_cccba
        mov     edx, dword ptr [esp + 0x40]
        fstp    dword ptr [esi + 0x388]
        mov     dword ptr [esi + 0x384], edx
        jmp     l_cccd0
    l_cccba:
        mov     eax, dword ptr [esp + 0x34]
        fstp    st(0)
        mov     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr [esi + 0x384], eax
        mov     dword ptr [esi + 0x388], ecx
    l_cccd0:
        fld     dword ptr [esi + 0x384]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 0x40
        jz      l_cccf2
        fld     dword ptr [esi + 0x388]
        fcomp   dword ptr [esp + 0x20]
        fnstsw  ax
        test    ah, 0x40
        jnz     l_cd70
    l_cccf2:
        mov     ecx, esi
        call    FUN_005cd6f0
        cmp     al, 1
        jnz     l_ccd09
        mov     dword ptr [esi + 0x398], 0x2
        jmp     l_cd22
    l_ccd09:
        cmp     byte ptr [esp + 0x13], 1
        jnz     l_ccd18
        mov     dword ptr [esi + 0x398], ebp
        jmp     l_cd22
    l_ccd18:
        mov     dword ptr [esi + 0x398], 0x1
    l_cd22:
        fld     dword ptr [esi + 0x1f8]
        fld     dword ptr [esi + 0x384]
        fcomp   dword ptr [esp + 0x28]
        fnstsw  ax
        test    ah, 1
        jz      l_cd45
        fld     st(0)
        fchs
        fstp    dword ptr [esi + 0x334]
        jmp     l_cd4b
    l_cd45:
        fst     dword ptr [esi + 0x334]
    l_cd4b:
        fld     dword ptr [esi + 0x388]
        fcomp   dword ptr [esp + 0x30]
        fnstsw  ax
        test    ah, 1
        jz      l_cd5e
        fchs
    l_cd5e:
        push    ebp
        fstp    dword ptr [esi + 0x338]
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x38c]
    l_cd70:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x48
        ret     0x8
    }
}
