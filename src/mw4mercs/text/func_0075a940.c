/*
 * FUN_0075a940 (11 B) — vtable setter: writes vtable ptr 0x7af0a4 to [ECX],
 * then tail-jumps to FUN_00759a70.
 *
 *   MOV dword ptr [ECX],0x7af0a4
 *   JMP FUN_00759a70
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00759a70(void);

__declspec(naked) void FUN_0075a940(void)
{
    __asm {
        mov     dword ptr [ecx], 0x7af0a4
        jmp     FUN_00759a70
    }
}
