/*
 * FUN_005a50d0 (11 B) — Destructor for class with vtable 0x784650.
 *
 * Sets vtable pointer then tail-calls FUN_005f36e0.
 * __thiscall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005f36e0(void);

__declspec(naked) void FUN_005a50d0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x784650
        jmp     FUN_005f36e0
    }
}
