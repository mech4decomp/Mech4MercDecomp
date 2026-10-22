/*
 * FUN_005f00f0 (129 B) — __thiscall, RET 4 (one stack param).
 *
 * Stores param into this->0x190, calls two virtual methods, copies
 * two floats, computes (a-b)/c via _ftol into this->0x188, then
 * runs a loop calling FUN_005f01e0 this->0x184 times.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005f0180(void);
extern void FUN_005f01e0(void);
extern void __cdecl _ftol(void);

__declspec(naked) void __stdcall FUN_005f00f0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        mov     esi, ecx
        lea     ecx, [eax + 0x78]
        mov     dword ptr [esi + 0x190], eax
        mov     eax, dword ptr [ecx]
        push    edi
        call    dword ptr [eax + 4]
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        mov     edi, eax
        call    dword ptr [edx + 4]
        fld     dword ptr [edi + 0x2bc]
        fst     dword ptr [esi + 0x180]
        fld     dword ptr [edi + 0x2c8]
        fst     dword ptr [esi + 0x17c]
        fxch
        fsub    st, st(1)
        fdiv    dword ptr [eax + 0x3c]
        call    _ftol
        fstp    st
        mov     ecx, esi
        mov     dword ptr [esi + 0x188], eax
        call    FUN_005f0180
        mov     eax, dword ptr [esi + 0x184]
        cmp     eax, 1
        mov     dword ptr [esi + 0x184], 0
        jl      L1
        mov     edi, eax
L2:
        mov     ecx, esi
        call    FUN_005f01e0
        dec     edi
        jnz     L2
L1:
        mov     ecx, esi
        call    FUN_005f0180
        pop     edi
        pop     esi
        ret     4
    }
}
