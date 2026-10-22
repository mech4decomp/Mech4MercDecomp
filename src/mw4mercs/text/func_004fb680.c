/*
 * FUN_004FB680 (62 B) — __thiscall (RET 8). Accumulates param_1 into
 * this+0x180/0x184/0x188, then calls FUN_004fb590(param_1, param_2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004fb590(void);

__declspec(naked) void __stdcall FUN_004fb680(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        fld     dword ptr [ecx + 0x180]
        fadd    dword ptr [eax]
        mov     edx, dword ptr [esp + 0x8]
        push    edx
        push    eax
        fstp    dword ptr [ecx + 0x180]
        fld     dword ptr [eax + 0x4]
        fadd    dword ptr [ecx + 0x184]
        fstp    dword ptr [ecx + 0x184]
        fld     dword ptr [eax + 0x8]
        fadd    dword ptr [ecx + 0x188]
        fstp    dword ptr [ecx + 0x188]
        call    FUN_004fb590
        ret     8
    }
}
