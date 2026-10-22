/*
 * FUN_005b4270 (30 B) — __thiscall scalar deleting destructor, RET 4.
 *
 * Calls FUN_005b43d0() on this, then if (flags & 1) calls FUN_004084e0(this)
 * (operator delete, __cdecl). Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005b43d0(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_005b4270(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005b43d0
        test    byte ptr [esp + 0x8], 0x1
        jz      done
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
done:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
