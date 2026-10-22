/*
 * FUN_00661da0 (108 B) — __thiscall common ABL-object ctor. Calls
 * FUN_00707e70 (stdcall, pops its 1 arg), initializes float/state fields,
 * installs vtable 0x795410, then computes a randomized value into [this+0x1c]
 * and [this+0x4] using two FUN_00415020 random draws and constants at
 * 0x794e4c/0x794e48.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_00415020(void);
extern float g_794e4c;
extern float g_794e48;

__declspec(naked) void FUN_00661da0(void)
{
    __asm {
        push    ecx
        push    esi
        push    0
        mov     esi, ecx
        call    FUN_00707e70
        fst     dword ptr [esp + 0x4]
        mov     dword ptr [esi + 0x14], 0
        fstp    dword ptr [esi + 0x4]
        mov     dword ptr [esi + 0x8], 0xbf800000
        mov     dword ptr [esi + 0x10], 0x3f800000
        mov     dword ptr [esi + 0x18], 0
        mov     dword ptr [esi + 0x20], 0
        mov     dword ptr [esi], 0x795410
        call    FUN_00415020
        fld     dword ptr [g_794e4c]
        fsub    dword ptr [g_794e48]
        fmulp   st(1), st(0)
        fadd    dword ptr [esp + 0x4]
        fadd    dword ptr [g_794e48]
        fstp    dword ptr [esi + 0x1c]
        call    FUN_00415020
        fadd    dword ptr [esp + 0x4]
        mov     eax, esi
        fstp    dword ptr [esi + 0x4]
        pop     esi
        pop     ecx
        ret
    }
}
