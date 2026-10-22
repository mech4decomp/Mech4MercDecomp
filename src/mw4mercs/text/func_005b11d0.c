/*
 * FUN_005b11d0 (30 B) — __thiscall destructor (ECX = this, RET 4).
 * Calls FUN_005b11f0, then frees this via FUN_004084e0 if the flag arg
 * has bit 0 set. Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005b11f0(void);
extern void __stdcall FUN_004084e0(void *obj);

__declspec(naked) void *__fastcall FUN_005b11d0(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005b11f0
        test    byte ptr [esp + 0x8], 0x1
        jz      L11E8
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L11E8:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
