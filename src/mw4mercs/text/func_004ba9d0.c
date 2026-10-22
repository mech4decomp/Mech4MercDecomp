/* func_004ba9d0.c — MLR matrix/transform function (__thiscall) */
#include <stddef.h>

extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040ca70(void);

__declspec(naked) void func_004ba9d0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        push ebx
        mov ebx, ecx
        test byte ptr [ebx+0x18], 0x1
        push esi
        push edi
        jnz L_bab81

        mov eax, dword ptr [ebx+0x10]
        add eax, 0x80
        mov dword ptr [ebp-0x8], eax
        lea ecx, [ebx+0x50]
        lea eax, [ebx+0x80]
        mov dword ptr [ebp-0xc], ecx
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
        jmp L_bab97

L_bab81:
        mov esi, dword ptr [ebx+0x10]
        lea edi, [ebx+0x80]
        add esi, 0x80
        mov ecx, 0xc
        rep movsd

L_bab97:
        lea edx, [ebx+0xb0]
        push edx
        lea ecx, [ebp-0x18]
        call FUN_00419480
        lea esi, [ebx+0x178]
        push esi
        lea eax, [ebp-0x18]
        push eax
        lea ecx, [ebp-0x18]
        call FUN_0040ca70
        fld dword ptr [ebp-0x10]
        fmul dword ptr [ebx+0x88]
        pop edi
        fld dword ptr [ebp-0x14]
        fmul dword ptr [ebx+0x84]
        faddp st(1), st(0)
        fld dword ptr [ebp-0x18]
        fmul dword ptr [ebx+0x80]
        faddp st(1), st(0)
        fadd dword ptr [ebx+0x8c]
        fstp dword ptr [ebx+0xfc]
        fld dword ptr [ebp-0x10]
        fmul dword ptr [ebx+0x98]
        fld dword ptr [ebp-0x14]
        fmul dword ptr [ebx+0x94]
        faddp st(1), st(0)
        fld dword ptr [ebp-0x18]
        fmul dword ptr [ebx+0x90]
        faddp st(1), st(0)
        fadd dword ptr [ebx+0x9c]
        fstp dword ptr [ebx+0x10c]
        fld dword ptr [ebp-0x10]
        fmul dword ptr [ebx+0xa8]
        fld dword ptr [ebp-0x14]
        fmul dword ptr [ebx+0xa4]
        faddp st(1), st(0)
        fld dword ptr [ebp-0x18]
        fmul dword ptr [ebx+0xa0]
        faddp st(1), st(0)
        fadd dword ptr [ebx+0xac]
        fstp dword ptr [ebx+0x11c]
        fld dword ptr [esi+0x8]
        fld dword ptr [esi+0x4]
        fld dword ptr [esi]
        pop esi
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
        fmul dword ptr [ebx+0xec]
        fstp dword ptr [ebx+0x12c]
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
