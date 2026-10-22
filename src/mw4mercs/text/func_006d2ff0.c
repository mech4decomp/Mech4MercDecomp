/*
 * FUN_006D2FF0 (25 B) — Set byte flag + conditional virtual destructor call.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param (pointer to object).
 * If param != NULL, calls virtual slot 1 (destructor) on it with arg 1.
 * Then sets byte at this+0x5C to 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006d2ff0(void)
{
    __asm {
        PUSH ESI
        MOV ESI, ECX
        MOV ECX, dword ptr [ESP + 0x8]
        TEST ECX, ECX
        JZ l_skip_dtor
        MOV EAX, dword ptr [ECX]
        PUSH 0x1
        CALL dword ptr [EAX]
    l_skip_dtor:
        MOV byte ptr [ESI + 0x5C], 0x1
        POP ESI
        RET 0x4
    }
}
