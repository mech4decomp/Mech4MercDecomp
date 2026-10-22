/*
 * FUN_00419f90 (221 B) — __thiscall Euler-angle to rotation-matrix
 * constructor. Reads 3 angles from param_1 (at [EBP+8]) and writes a
 * 3x3 rotation matrix to `this` (ECX/EAX). Uses FSINCOS per axis.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00419f90(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x1c
        mov     eax, ecx
        lea     ecx, [ebp-0x14]
        push    ebx
        mov     dword ptr [ebp-0x4], ecx
        push    ebx
        push    edx
        mov     ebx, dword ptr [ebp-0x4]
        mov     edx, dword ptr [ebp+0x8]
        fld     dword ptr [edx]
        fsincos
        fstp    dword ptr [ebx+0x4]
        fstp    dword ptr [ebx]
        pop     edx
        pop     ebx
        mov     ecx, dword ptr [ebp+0x8]
        lea     edx, [ecx+0x4]
        mov     dword ptr [ebp+0x8], edx
        lea     edx, [ebp-0x1c]
        mov     dword ptr [ebp-0x4], edx
        push    ebx
        push    edx
        mov     ebx, dword ptr [ebp-0x4]
        mov     edx, dword ptr [ebp+0x8]
        fld     dword ptr [edx]
        fsincos
        fstp    dword ptr [ebx+0x4]
        fstp    dword ptr [ebx]
        pop     edx
        pop     ebx
        add     ecx, 0x8
        mov     dword ptr [ebp+0x8], ecx
        lea     ecx, [ebp-0xc]
        mov     dword ptr [ebp-0x4], ecx
        push    ebx
        push    edx
        mov     ebx, dword ptr [ebp-0x4]
        mov     edx, dword ptr [ebp+0x8]
        fld     dword ptr [edx]
        fsincos
        fstp    dword ptr [ebx+0x4]
        fstp    dword ptr [ebx]
        pop     edx
        pop     ebx
        fld     dword ptr [ebp-0x8]
        fmul    dword ptr [ebp-0x18]
        pop     ebx
        fstp    dword ptr [eax]
        fld     dword ptr [ebp-0xc]
        fmul    dword ptr [ebp-0x18]
        fstp    dword ptr [eax+0x10]
        fld     dword ptr [ebp-0x1c]
        fchs
        fstp    dword ptr [eax+0x20]
        fld     dword ptr [ebp-0x14]
        fmul    dword ptr [ebp-0x1c]
        fld     st(0)
        fmul    dword ptr [ebp-0x8]
        fld     dword ptr [ebp-0x10]
        fmul    dword ptr [ebp-0xc]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax+0x4]
        fmul    dword ptr [ebp-0xc]
        fld     dword ptr [ebp-0x10]
        fmul    dword ptr [ebp-0x8]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x14]
        fld     dword ptr [ebp-0x14]
        fmul    dword ptr [ebp-0x18]
        fstp    dword ptr [eax+0x24]
        fld     dword ptr [ebp-0x10]
        fmul    dword ptr [ebp-0x1c]
        fld     st(0)
        fmul    dword ptr [ebp-0x8]
        fld     dword ptr [ebp-0x14]
        fmul    dword ptr [ebp-0xc]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x8]
        fmul    dword ptr [ebp-0xc]
        fld     dword ptr [ebp-0x14]
        fmul    dword ptr [ebp-0x8]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax+0x18]
        fld     dword ptr [ebp-0x10]
        fmul    dword ptr [ebp-0x18]
        fstp    dword ptr [eax+0x28]
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
