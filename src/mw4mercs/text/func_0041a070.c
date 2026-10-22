/*
 * FUN_0041a070 (227 B) — __thiscall Euler-angle to rotation-matrix
 * constructor (alternate axis ordering). Reads 3 angles from param_1
 * (at [EBP+8]) and writes a 3x3 rotation matrix to `this` (ECX/EAX).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041a070(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x20
        mov     eax, ecx
        mov     ecx, dword ptr [ebp+0x8]
        lea     edx, [ecx+0x4]
        mov     dword ptr [ebp-0x4], edx
        lea     edx, [ebp-0x18]
        push    ebx
        mov     dword ptr [ebp-0x8], edx
        push    ebx
        push    edx
        mov     ebx, dword ptr [ebp-0x8]
        mov     edx, dword ptr [ebp-0x4]
        fld     dword ptr [edx]
        fsincos
        fstp    dword ptr [ebx+0x4]
        fstp    dword ptr [ebx]
        pop     edx
        pop     ebx
        lea     edx, [ebp-0x20]
        mov     dword ptr [ebp-0x8], edx
        push    ebx
        push    edx
        mov     ebx, dword ptr [ebp-0x8]
        mov     edx, dword ptr [ebp+0x8]
        fld     dword ptr [edx]
        fsincos
        fstp    dword ptr [ebx+0x4]
        fstp    dword ptr [ebx]
        pop     edx
        pop     ebx
        add     ecx, 0x8
        mov     dword ptr [ebp+0x8], ecx
        lea     ecx, [ebp-0x10]
        mov     dword ptr [ebp-0x8], ecx
        push    ebx
        push    edx
        mov     ebx, dword ptr [ebp-0x8]
        mov     edx, dword ptr [ebp+0x8]
        fld     dword ptr [edx]
        fsincos
        fstp    dword ptr [ebx+0x4]
        fstp    dword ptr [ebx]
        pop     edx
        pop     ebx
        fld     dword ptr [ebp-0x10]
        fmul    dword ptr [ebp-0x20]
        pop     ebx
        fld     st(0)
        fmul    dword ptr [ebp-0x18]
        fld     dword ptr [ebp-0xc]
        fmul    dword ptr [ebp-0x1c]
        faddp   st(1), st(0)
        fstp    dword ptr [eax]
        fld     dword ptr [ebp-0x14]
        fmul    dword ptr [ebp-0x10]
        fstp    dword ptr [eax+0x10]
        fld     dword ptr [ebp-0x10]
        fmul    dword ptr [ebp-0x18]
        fmul    dword ptr [ebp-0x1c]
        fld     dword ptr [ebp-0x20]
        fmul    dword ptr [ebp-0xc]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax+0x20]
        fld     dword ptr [ebp-0x20]
        fmul    dword ptr [ebp-0x18]
        fmul    dword ptr [ebp-0xc]
        fld     dword ptr [ebp-0x10]
        fmul    dword ptr [ebp-0x1c]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax+0x4]
        fld     dword ptr [ebp-0x14]
        fmul    dword ptr [ebp-0xc]
        fstp    dword ptr [eax+0x14]
        fld     dword ptr [ebp-0x18]
        fmul    dword ptr [ebp-0xc]
        fmul    dword ptr [ebp-0x1c]
        fadd    st(0), st(1)
        fstp    dword ptr [eax+0x24]
        fstp    st(0)
        fld     dword ptr [ebp-0x14]
        fmul    dword ptr [ebp-0x20]
        fstp    dword ptr [eax+0x8]
        fld     dword ptr [ebp-0x18]
        fchs
        fstp    dword ptr [eax+0x18]
        fld     dword ptr [ebp-0x14]
        fmul    dword ptr [ebp-0x1c]
        fstp    dword ptr [eax+0x28]
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
