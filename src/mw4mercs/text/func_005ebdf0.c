/*
 * FUN_005ebdf0 (30 B) — __thiscall destructor wrapper.
 *
 * Calls FUN_004dd1c0() on this, then if the low bit of the
 * stack flag param is set, frees this via FUN_004084e0.
 * Returns this in EAX.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004dd1c0(void);
extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_005ebdf0(void *param)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004dd1c0
        test    byte ptr [esp + 0x8], 0x1
        jz      L1
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L1:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
