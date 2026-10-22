/*
 * FUN_0041c610 (109 B) — __thiscall. Builds a quaternion from Euler angles
 * (param_1[0], param_1[1], param_1[2]) using fsincos.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041c610(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x14
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
        lea     edx, [ebp-0xc]
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
        fld     dword ptr [ebp-0xc]
        fmul    dword ptr [ecx+0x8]
        pop     ebx
        fchs
        fstp    dword ptr [eax+0x4]
        fld     dword ptr [ebp-0x8]
        fmul    dword ptr [ecx+0x8]
        fld     dword ptr [ebp-0x14]
        fmul    st(0), st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [ebp-0x10]
        fmul    st(0), st(1)
        fstp    dword ptr [eax+0x8]
        fstp    st(0)
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
