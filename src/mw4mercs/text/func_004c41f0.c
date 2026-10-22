/*
 * FUN_004C41F0 (29 B) — __thiscall float negate.
 * Negates three floats from this (at offsets 0, 0x10, 0x20) and stores
 * them at param_1 (offsets 0, 4, 8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004c41f0(void)
{
    __asm {
        FLD dword ptr [ECX]
        MOV EAX, dword ptr [ESP + 0x4]
        FCHS
        FSTP dword ptr [EAX]
        FLD dword ptr [ECX + 0x10]
        FCHS
        FSTP dword ptr [EAX + 0x4]
        FLD dword ptr [ECX + 0x20]
        FCHS
        FSTP dword ptr [EAX + 0x8]
        RET 0x4
    }
}
