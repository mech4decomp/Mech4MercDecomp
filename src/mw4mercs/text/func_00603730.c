/*
 * FUN_00603730 (11 B) — __thiscall dtor: sets the vtable pointer at [ECX]
 * to 0x78b794, then tail-jumps to the base-class dtor FUN_00603b30.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_78b794[];
extern void __cdecl FUN_00603b30(void);

__declspec(naked) void FUN_00603730(void)
{
    __asm {
        mov     dword ptr [ecx], offset g_78b794
        jmp     FUN_00603b30
    }
}
