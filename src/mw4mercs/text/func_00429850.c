/*
 * FUN_00429850 (11 B) — __thiscall ctor: stores vtable pointer 0x76dfec
 * into [ECX], then tail-jumps to FUN_004878a0 (base-class ctor).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004878a0(void);

__declspec(naked) void FUN_00429850(void)
{
    __asm {
        mov     dword ptr [ecx], 0x76dfec
        jmp     FUN_004878a0
    }
}
