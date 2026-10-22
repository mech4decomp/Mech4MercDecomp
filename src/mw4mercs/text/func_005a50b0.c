/*
 * FUN_005a50b0 (30 B) — scalar deleting destructor for class with vtable 0x784650.
 *
 * __thiscall (ECX = this), 1 stack param (delete flag).
 * If flag & 1, frees the memory after destruction.
 * Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005a50d0(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_005a50b0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005a50d0
        test    byte ptr [esp + 0x8], 0x1
        jz      skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
skip_free:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
