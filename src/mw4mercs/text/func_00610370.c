/*
 * FUN_00610370 (11 B) — __thiscall (ECX=this). Virtual-destructor thunk:
 * stores the vtable pointer 0x0078c114 into [this], then tail-jumps to
 * the shared destructor FUN_00561730.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00561730(void);

__declspec(naked) void FUN_00610370(void)
{
    __asm {
        mov     dword ptr [ecx], 0x0078c114
        jmp     FUN_00561730
    }
}
