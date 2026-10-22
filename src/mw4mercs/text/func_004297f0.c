/*
 * FUN_004297f0 (30 B) — __thiscall MLR object destructor: calls base
 * destructor FUN_00429850, then frees `this` if the delete flag is set.
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00429850(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_004297f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00429850
        test    byte ptr [esp+8], 1
        jz      skip
        push    esi
        call    FUN_004084e0
        add     esp, 4
skip:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
