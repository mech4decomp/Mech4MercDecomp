/*
 * FUN_0055c880 (1128 B) — __thiscall method with heavy FPU math (3D transform).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_006f2de0(void *this, int idx);
extern float __fastcall FUN_0040cb00(void *this);
extern void __fastcall FUN_0040c410(void *this, void *param);
extern void __fastcall FUN_0040d560(void *this, void *param);
extern int __fastcall FUN_004e2f40(void *this, void *param);
extern void __fastcall FUN_004e8dc0(void *this, float val, void *param);
extern void __fastcall FUN_00419e70(void *this);
extern void __fastcall FUN_0041fde0(void *this, void *vec, int a, int b, int c);
extern void __fastcall FUN_0040d030(void *this, void *param);
extern void __fastcall FUN_00428850(void *this, void *param);
extern int __fastcall FUN_004206b0(void *this, void *param);
extern void __fastcall FUN_004daa20(void *this, void *param);

__declspec(naked) void FUN_0055c880(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_0076d978;
extern int DAT_0076f5d8;
extern int DAT_0076d064;
extern int DAT_0077de8c;
extern int DAT_007dc728;
extern int DAT_007b8d18;
extern int DAT_007b8d1c;
extern int DAT_007b8d20;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x120
        mov eax, dword ptr [DAT_007dab44]
        push    ebx
        mov     ebx, [ebp + 0x68]
        push    esi
        mov esi, dword ptr [DAT_007dab40]
        push    edi
        mov     edi, ecx                    ; save this
        mov     ecx, [eax]
        xor     ecx, esi
        mov     esi, [ecx + 0x24]
        xor     esi, 0x85739531
        push    0xc
        mov     ecx, esi
        mov     dword ptr [edi + 0x618], 9
        mov     [edi + 0x61c], ebx
        call    FUN_006f2de0
        fstp    dword ptr [ebp - 0x20]
        push    0xd
        mov     ecx, esi
        call    FUN_006f2de0
        fstp    dword ptr [ebp - 0x4]
        push    0xe
        mov     ecx, esi
        call    FUN_006f2de0
        fstp    dword ptr [ebp + 0x68]
        mov     eax, ebx
        sub     eax, 5
        jz      case_5
        dec     eax
        jnz     after_switch
        /* case 6 */
        fld     dword ptr [ebp - 0x4]
        fadd    st(0), st(0)
        fstp    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp + 0x68]
        fmul dword ptr [DAT_0076d978]
        jmp     store_68

    case_5:
        fld     dword ptr [ebp - 0x4]
        fmul dword ptr [DAT_0076f5d8]
        fstp    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp + 0x68]
        fadd    st(0), st(0)

    store_68:
        fstp    dword ptr [ebp + 0x68]

    after_switch:
        mov     edx, [ebp + 0x14]
        mov     ecx, [ebp + 0x34]
        mov     eax, [ebp + 0x24]
        mov     [ebp - 0x50], edx
        lea     edx, [ebp - 0x50]
        mov     [ebp - 0x48], ecx
        push    edx
        lea     ecx, [ebp - 0x38]
        mov     [ebp - 0x4c], eax
        call    FUN_0040c410
        fld     dword ptr [ebp - 0x34]
        fadd    dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x40], 0
        lea     eax, [ebp - 0x10]
        push    eax
        fstp    dword ptr [ebp - 0x34]
        lea     ecx, [ebp - 0x2c]
        fld     dword ptr [ebp + 0x44]
        fsub    dword ptr [ebp + 0x14]
        fld     dword ptr [ebp + 0x64]
        fsub    dword ptr [ebp + 0x34]
        fst     dword ptr [ebp - 0x3c]
        fmul    dword ptr [ebp - 0x3c]
        fld     st(1)
        fmul    st(0), st(2)
        faddp   st(1), st(0)
        fsqrt
        fdivr dword ptr [DAT_0076d064]
        fstp    dword ptr [ebp + 0x64]
        fmul    dword ptr [ebp + 0x64]
        fld     dword ptr [ebp - 0x3c]
        fmul    dword ptr [ebp + 0x64]
        fstp    dword ptr [ebp - 0x3c]
        fmul    dword ptr [ebp + 0x68]
        fadd    dword ptr [ebp + 0x14]
        fstp    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x40]
        fmul    dword ptr [ebp + 0x68]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0x3c]
        fmul    dword ptr [ebp + 0x68]
        fadd    dword ptr [ebp + 0x34]
        fstp    dword ptr [ebp - 0x8]
        call    FUN_0040c410
        mov     eax, [ebp - 0x34]
        lea     ecx, [ebp - 0x6c]
        mov     [ebp - 0x84], ecx
        lea     ecx, [ebp + 0x5c]
        lea     edx, [ebp - 0x90]
        push    ecx
        lea     ecx, [ebp - 0x60]
        mov     [ebp - 0x80], edx
        mov     dword ptr [ebp - 0x7c], 0
        mov     [ebp - 0x74], edi
        mov     dword ptr [ebp - 0x70], 0x1000
        mov     [ebp - 0x28], eax
        mov     dword ptr [ebp - 0x54], 0x42c80000
        mov     dword ptr [ebp + 0x5c], 0
        mov     dword ptr [ebp + 0x60], 0xbf800000
        mov     dword ptr [ebp + 0x64], 0
        call    FUN_0040d560
        fld     dword ptr [ebp - 0x28]
        fadd dword ptr [DAT_0077de8c]
        mov     edx, [ebp - 0x2c]
        mov     eax, [ebp - 0x24]
        lea     ecx, [ebp - 0x84]
        push    ecx
        fstp    dword ptr [ebp - 0x68]
        mov ecx, dword ptr [DAT_007dc728]
        mov     [ebp - 0x6c], edx
        mov     [ebp - 0x64], eax
        mov     dword ptr [ebp + 0x68], 0
        call    FUN_004e2f40
        test    eax, eax
        jz      skip_cast
        mov     eax, [ebp - 0x54]
        lea     edx, [ebp - 0x2c]
        push    edx
        push    eax
        lea     ecx, [ebp - 0x6c]
        call    FUN_004e8dc0
        fld     dword ptr [ebp - 0x28]
        fadd    dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp + 0x68]
    skip_cast:
        fld     dword ptr [ebp - 0x4c]
        fsub    dword ptr [ebp - 0x28]
        fld     dword ptr [ebp - 0x4c]
        fsub    dword ptr [ebp - 0x4]
        faddp   st(1), st(0)
        fcom    dword ptr [ebp + 0x68]
        fnstsw  ax
        test    ah, 0x41
        jnz     use_68
        fld     st(0)
        fmul dword ptr [DAT_007b8d18]
        fadd    dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x10]
        fld     st(0)
        fmul dword ptr [DAT_007b8d1c]
        fstp    dword ptr [ebp - 0xc]
        jmp     after_lerp
    use_68:
        fstp    st(0)
        fld     dword ptr [ebp + 0x68]
        fmul dword ptr [DAT_007b8d18]
        fadd    dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp + 0x68]
        fmul dword ptr [DAT_007b8d1c]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp + 0x68]
    after_lerp:
        fmul dword ptr [DAT_007b8d20]
        lea     ecx, [ebp - 0xc0]
        fadd    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x38]
        fsub    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x34]
        fsub    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x30]
        fsub    dword ptr [ebp - 0x8]
        fst     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x18]
        faddp   st(1), st(0)
        fld     st(1)
        fmul    st(0), st(2)
        faddp   st(1), st(0)
        fsqrt
        fdivr dword ptr [DAT_0076d064]
        fstp    dword ptr [ebp + 0x68]
        fmul    dword ptr [ebp + 0x68]
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp + 0x68]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp + 0x68]
        fstp    dword ptr [ebp - 0x14]
        call    FUN_00419e70
        push    0
        push    1
        push    2
        lea     ecx, [ebp - 0x1c]
        push    ecx
        lea     ecx, [ebp - 0xc0]
        call    FUN_0041fde0
        lea     edx, [ebp - 0x10]
        push    edx
        lea     ecx, [ebp - 0xc0]
        call    FUN_0040d030
        lea     eax, [ebp + 8]
        push    eax
        lea     ecx, [ebp - 0xf0]
        call    FUN_00428850
        lea     ecx, [ebp - 0xf0]
        push    ecx
        lea     ecx, [ebp + 8]
        call    FUN_004206b0
        mov     [ebp + 0x64], eax
        lea     edx, [ebp - 0xc0]
        lea     eax, [ebp - 0x120]
        mov     [ebp - 0x20], edx
        mov     [ebp + 0x68], eax
        mov     edx, [ebp - 0x20]
        push    esi
        mov     esi, [ebp + 0x64]
        mov     eax, [ebp + 0x68]
        /* 4x4 matrix multiply (unrolled) */
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        lea     ecx, [ebp - 0x120]
        push    ecx
        mov     ecx, edi
        call    FUN_004daa20
        mov     edx, [edi]
        push    1
        mov     ecx, edi
        call    dword ptr [edx + 0x48]
        mov     byte ptr [edi + 0x338], 1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x64
    }


}
