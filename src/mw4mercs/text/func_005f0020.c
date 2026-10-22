/*
 * FUN_005f0020 (30 B) — __thiscall destructor-style wrapper.
 *
 * Saves this (ECX) in ESI, calls FUN_005f0080(), then if the
 * low bit of the flag param is set, calls FUN_004084e0(this).
 * Returns this in EAX. RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005f0080(void);
extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_005f0020(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005f0080
        test    byte ptr [esp + 8], 1
        jz      L1
        push    esi
        call    FUN_004084e0
        add     esp, 4
L1:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
