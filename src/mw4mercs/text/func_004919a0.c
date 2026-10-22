/*
 * FUN_004919a0 (17 B) — __thiscall, RET 4 (1 stack param).
 * Calls vtable method at offset 0x24 with arg 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004919a0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        push    0x4
        push    eax
        call    dword ptr [edx + 0x24]
        ret     0x4
    }
}
