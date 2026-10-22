/*
 * FUN_00694ad0 (30 B) — __thiscall HUD element destructor. Calls base
 * dtor FUN_0040de20, then if the "delete flag" (param at [esp+8]) is set,
 * frees the object via operator delete FUN_004084e0. Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_00694ad0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0040de20
        test    byte ptr [esp+8], 1
        jz      done
        push    esi
        call    FUN_004084e0
        add     esp, 4
done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
