/* func_004bb330.c — MLR matrix/transform function (__thiscall) */
#include <stddef.h>

__declspec(naked) void func_004bb330(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x3c
        push ebx
        mov ebx, ecx
        push esi
        push edi
        lea eax, [ebx+0x50]
        lea esi, [ebx+0x20]
        mov ecx, 0xc
        mov edi, eax
        rep movsd
        test byte ptr [ebx+0x18], 0x1
        jnz L_b4ee

        mov ecx, dword ptr [ebx+0x10]
        mov dword ptr [ebp-0xc], eax
        add ecx, 0x80
        lea eax, [ebx+0x80]
        mov dword ptr [ebp-0x8], ecx
        mov dword ptr [ebp-0x4], eax
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
        jmp L_b504

L_b4ee:
        mov esi, dword ptr [ebx+0x10]
        lea edi, [ebx+0x80]
        add esi, 0x80
        mov ecx, 0xc
        rep movsd

L_b504:
        lea esi, [ebx+0xb0]
        mov ecx, 0xc
        lea edi, [ebp-0x3c]
        rep movsd
        fld dword ptr [ebp-0x30]
        fmul dword ptr [ebx+0x178]
        fstp dword ptr [ebp-0x30]
        fld dword ptr [ebp-0x20]
        fmul dword ptr [ebx+0x17c]
        fstp dword ptr [ebp-0x20]
        fld dword ptr [ebp-0x10]
        fmul dword ptr [ebx+0x180]
        lea eax, [ebx+0x80]
        mov dword ptr [ebp-0x8], eax
        lea edx, [ebp-0x3c]
        lea eax, [ebx+0xf0]
        fstp dword ptr [ebp-0x10]
        mov dword ptr [ebp-0x4], edx
        mov dword ptr [ebp-0xc], eax
        mov edx, dword ptr [ebp-0x4]
        push esi
        mov esi, dword ptr [ebp-0x8]
        mov eax, dword ptr [ebp-0xc]
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
        mov eax, dword ptr [ebx+0x18]
        fld dword ptr [ebx+0xe0]
        and eax, 0xfffffffb
        fmul dword ptr [ebx+0x178]
        mov ecx, ebx
        mov dword ptr [ebx+0x18], eax
        fstp dword ptr [ebx+0x120]
        mov edx, dword ptr [ebx]
        fld dword ptr [ebx+0x17c]
        fmul dword ptr [ebx+0xe4]
        fstp dword ptr [ebx+0x124]
        fld dword ptr [ebx+0x180]
        fmul dword ptr [ebx+0xe8]
        fstp dword ptr [ebx+0x128]
        fld dword ptr [ebx+0x128]
        fld dword ptr [ebx+0x124]
        fld dword ptr [ebx+0x120]
        fld st(0)
        fmul st(0), st(1)
        fld st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fsqrt
        fstp dword ptr [ebx+0x12c]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        call dword ptr [edx+0x10]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
