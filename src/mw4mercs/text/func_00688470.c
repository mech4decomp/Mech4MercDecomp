/*
 * FUN_00688470 (30 B) — Vtable 0x798C44 slot 16 / Vtable 0x798C84 slot 0:
 * scalar deleting destructor.
 *
 * Calls FUN_00688490 (destructor body for vtable 0x798C84), then if
 * (flags & 1) calls FUN_004084E0 (free wrapper). Returns this pointer.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: flags).
 *
 * Disassembly:
 *   56                   push    esi
 *   8B F1                mov     esi, ecx
 *   E8 xx xx xx xx       call    FUN_00688490
 *   F6 44 24 08 01       test    byte ptr [esp+8], 1
 *   74 09                je      +0x09 (skip_free)
 *   56                   push    esi
 *   E8 xx xx xx xx       call    FUN_004084E0
 *   83 C4 04             add     esp, 4
 *   8B C6                mov     eax, esi
 *   5E                   pop     esi
 *   C2 04 00             ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00688490(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void * __stdcall FUN_00688470(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00688490
        test    byte ptr [esp + 8], 1
        je      l_skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip_free:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
