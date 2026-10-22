/*
 * FUN_005bf740 (30 B) - __thiscall destructor-style wrapper.
 *
 * Saves this (ECX) in ESI, calls FUN_005bf760(), then if (param & 1)
 * calls FUN_004084e0(this). Returns this in EAX. RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005bf760(void);
extern void __stdcall FUN_004084e0(void *param);

__declspec(naked) void __stdcall FUN_005bf740(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005bf760
        test    byte ptr [esp + 0x8], 0x1
        jz      short done
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
