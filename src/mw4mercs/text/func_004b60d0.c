/*
 * FUN_004B60D0 (34 B) — Destructor-like (__fastcall, ECX=this).
 * Sets vtable at [this] to 0x00770804.
 * If this+0x190 is non-null, calls its vtable[0](1).
 * Then calls FUN_004C68F0(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004c68f0(void);

__declspec(naked) void __fastcall FUN_004b60d0(void)
{
    __asm {
        PUSH ESI
        MOV ESI, ECX
        MOV ECX, dword ptr [ESI + 0x190]
        TEST ECX, ECX
        MOV dword ptr [ESI], 0x00770804
        JZ l_call_base
        MOV EAX, dword ptr [ECX]
        PUSH 0x1
        CALL dword ptr [EAX]
    l_call_base:
        MOV ECX, ESI
        CALL FUN_004c68f0
        POP ESI
        RET
    }
}
