/* func_004bac70.c — MLR matrix/transform function (__thiscall) */
#include <stddef.h>

extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040ca70(void);

__declspec(naked) void func_004bac70(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea eax, [edi+0x20]
        lea esi, [edi+0x50]
        push eax
        mov ecx, esi
        call FUN_00419460
        test byte ptr [edi+0x18], 0x1
        jnz L_bae2d

        mov ecx, dword ptr [edi+0x10]
        add ecx, 0x80
        lea ebx, [edi+0x80]
        mov dword ptr [ebp-0x8], ecx
        mov dword ptr [ebp-0xc], esi
        mov dword ptr [ebp-0x4], ebx
        mov edx, dword ptr [ebp-0xc]
        push esi
        mov esi, dword ptr [ebp-0x8]
        mov eax, dword ptr [ebp-0x4]
        fld dword ptr [edx]
        fmul dword ptr [esi]
        fld dword ptr [edx+0x10]
        fmul dword ptr [esi+0x4]
        fld dword ptr [edx+0x20]
        fmul dword ptr [esi+0x8]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x4]
        fmul dword ptr [esi]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x14]
        fmul dword ptr [esi+0x4]
        fxch st(1)
        fstp dword ptr [eax]
        fld dword ptr [edx+0x24]
        fmul dword ptr [esi+0x8]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x8]
        fmul dword ptr [esi]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x18]
        fmul dword ptr [esi+0x4]
        fxch st(1)
        fstp dword ptr [eax+0x4]
        fld dword ptr [edx+0x28]
        fmul dword ptr [esi+0x8]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0xc]
        fmul dword ptr [esi]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x1c]
        fmul dword ptr [esi+0x4]
        fxch st(1)
        fstp dword ptr [eax+0x8]
        fld dword ptr [edx+0x2c]
        fmul dword ptr [esi+0x8]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx]
        fmul dword ptr [esi+0x10]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x10]
        fmul dword ptr [esi+0x14]
        fxch st(1)
        fadd dword ptr [esi+0xc]
        fld dword ptr [edx+0x20]
        fmul dword ptr [esi+0x18]
        fxch st(1)
        fstp dword ptr [eax+0xc]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x4]
        fmul dword ptr [esi+0x10]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x14]
        fmul dword ptr [esi+0x14]
        fxch st(1)
        fstp dword ptr [eax+0x10]
        fld dword ptr [edx+0x24]
        fmul dword ptr [esi+0x18]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x8]
        fmul dword ptr [esi+0x10]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x18]
        fmul dword ptr [esi+0x14]
        fxch st(1)
        fstp dword ptr [eax+0x14]
        fld dword ptr [edx+0x28]
        fmul dword ptr [esi+0x18]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0xc]
        fmul dword ptr [esi+0x10]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x1c]
        fmul dword ptr [esi+0x14]
        fxch st(1)
        fstp dword ptr [eax+0x18]
        fld dword ptr [edx+0x2c]
        fmul dword ptr [esi+0x18]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx]
        fmul dword ptr [esi+0x20]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x10]
        fmul dword ptr [esi+0x24]
        fxch st(1)
        fadd dword ptr [esi+0x1c]
        fld dword ptr [edx+0x20]
        fmul dword ptr [esi+0x28]
        fxch st(1)
        fstp dword ptr [eax+0x1c]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x4]
        fmul dword ptr [esi+0x20]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x14]
        fmul dword ptr [esi+0x24]
        fxch st(1)
        fstp dword ptr [eax+0x20]
        fld dword ptr [edx+0x24]
        fmul dword ptr [esi+0x28]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x8]
        fmul dword ptr [esi+0x20]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x18]
        fmul dword ptr [esi+0x24]
        fxch st(1)
        fstp dword ptr [eax+0x24]
        fld dword ptr [edx+0x28]
        fmul dword ptr [esi+0x28]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0xc]
        fmul dword ptr [esi+0x20]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x1c]
        fmul dword ptr [esi+0x24]
        fxch st(1)
        fstp dword ptr [eax+0x28]
        fld dword ptr [edx+0x2c]
        fmul dword ptr [esi+0x28]
        fxch st(2)
        faddp st(1), st(0)
        faddp st(1), st(0)
        fadd dword ptr [esi+0x2c]
        fstp dword ptr [eax+0x2c]
        pop esi
        jmp L_bae44

L_bae2d:
        mov edx, dword ptr [edi+0x10]
        add edx, 0x80
        lea ebx, [edi+0x80]
        push edx
        mov ecx, ebx
        call FUN_00419460

L_bae44:
        lea eax, [edi+0xb0]
        push eax
        lea ecx, [ebp-0x18]
        call FUN_00419480
        lea esi, [edi+0x178]
        push esi
        lea ecx, [ebp-0x18]
        push ecx
        lea ecx, [ebp-0x18]
        call FUN_0040ca70
        fld dword ptr [ebp-0x10]
        fmul dword ptr [edi+0x88]
        mov ecx, edi
        fld dword ptr [ebp-0x14]
        fmul dword ptr [edi+0x84]
        faddp st(1), st(0)
        fld dword ptr [ebp-0x18]
        fmul dword ptr [ebx]
        faddp st(1), st(0)
        fadd dword ptr [edi+0x8c]
        fstp dword ptr [edi+0xfc]
        fld dword ptr [ebp-0x10]
        fmul dword ptr [edi+0x98]
        fld dword ptr [ebp-0x14]
        fmul dword ptr [edi+0x94]
        faddp st(1), st(0)
        fld dword ptr [ebp-0x18]
        fmul dword ptr [edi+0x90]
        faddp st(1), st(0)
        fadd dword ptr [edi+0x9c]
        fstp dword ptr [edi+0x10c]
        fld dword ptr [ebp-0x10]
        fmul dword ptr [edi+0xa8]
        fld dword ptr [ebp-0x14]
        fmul dword ptr [edi+0xa4]
        faddp st(1), st(0)
        fld dword ptr [ebp-0x18]
        fmul dword ptr [edi+0xa0]
        faddp st(1), st(0)
        fadd dword ptr [edi+0xac]
        fstp dword ptr [edi+0x11c]
        mov eax, dword ptr [edi+0x18]
        fld dword ptr [esi+0x8]
        mov edx, dword ptr [edi]
        fld dword ptr [esi+0x4]
        and eax, 0xfffffffb
        fld dword ptr [esi]
        mov dword ptr [edi+0x18], eax
        fld st(0)
        fmul st(0), st(1)
        fld st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fsqrt
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fmul dword ptr [edi+0xec]
        fstp dword ptr [edi+0x12c]
        call dword ptr [edx+0x10]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
