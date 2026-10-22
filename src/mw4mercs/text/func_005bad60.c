/*
 * FUN_005bad60 (30 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Calls FUN_005bad80() on this, then if (param & 1) frees the object via
 * FUN_004084e0. Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005bad80(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005bad60(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005bad80
        test    byte ptr [esp + 0x8], 0x1
        jz      L_skip
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_skip:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
