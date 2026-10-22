/*
 * FUN_004FB590 (155 B) — __thiscall (RET 8). Cross-product of two 3-vectors
 * (param_1, param_2), transformed by a virtual-call result matrix, and
 * accumulated into this+0x18c/0x190/0x194.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004fb590(void)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [esp + 0x10]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x18]
        fld     dword ptr [ecx + 0x4]
        fmul    dword ptr [eax + 0x8]
        fld     dword ptr [eax + 0x4]
        fmul    dword ptr [ecx + 0x8]
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [eax]
        fmul    dword ptr [ecx + 0x8]
        fld     dword ptr [ecx]
        fmul    dword ptr [eax + 0x8]
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0x8]
        fld     dword ptr [eax + 0x4]
        fmul    dword ptr [ecx]
        fld     dword ptr [eax]
        mov     eax, dword ptr [esi + 0x78]
        fmul    dword ptr [ecx + 0x4]
        lea     ecx, [esi + 0x78]
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0xc]
        call    dword ptr [eax + 0x4]
        fld     dword ptr [esp + 0x4]
        add     eax, 0x20
        fmul    dword ptr [eax]
        fld     dword ptr [esp + 0x8]
        fmul    dword ptr [eax + 0x4]
        fstp    dword ptr [esp + 0x8]
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [eax + 0x8]
        fstp    dword ptr [esp + 0xc]
        fadd    dword ptr [esi + 0x18c]
        fstp    dword ptr [esi + 0x18c]
        fld     dword ptr [esp + 0x8]
        fadd    dword ptr [esi + 0x190]
        fstp    dword ptr [esi + 0x190]
        fld     dword ptr [esp + 0xc]
        fadd    dword ptr [esi + 0x194]
        fstp    dword ptr [esi + 0x194]
        pop     esi
        add     esp, 0xc
        ret     8
    }
}
