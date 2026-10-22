/*
 * FUN_00424220 (11 B) — __thiscall dtor. Sets vtable pointer then
 * tail-calls base dtor FUN_00450b40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00450b40(void);

__declspec(naked) void FUN_00424220(void)
{
    __asm {
        mov     dword ptr [ecx], 0x76de4c
        jmp     FUN_00450b40
    }
}
