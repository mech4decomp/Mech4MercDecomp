/*
 * FUN_004E8DC0 (66 B) — Adept Tile: transform point by matrix (__thiscall, RET 8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004e8dc0(void)
{
    __asm {
        sub     esp, 0xc
        fld     dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        fmul    dword ptr [ecx + 0xc]
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [ecx + 0x10]
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [ecx + 0x14]
        fstp    dword ptr [esp + 0x8]
        fadd    dword ptr [ecx]
        fstp    dword ptr [eax]
        fld     dword ptr [esp + 0x4]
        fadd    dword ptr [ecx + 4]
        fstp    dword ptr [eax + 4]
        fld     dword ptr [esp + 0x8]
        fadd    dword ptr [ecx + 8]
        fstp    dword ptr [eax + 8]
        add     esp, 0xc
        ret     8
    }
}
