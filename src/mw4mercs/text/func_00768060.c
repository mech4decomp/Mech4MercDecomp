/*
 * FUN_00768060 (30 B) — __thiscall scalar-deleting-destructor wrapper.
 *
 * Calls destructor FUN_00767f60(this); if (flag & 1) calls
 * FUN_004084e0(this) (operator delete). Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00767f60(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00768060(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00767f60
        test    byte ptr [esp + 8], 1
        jz      L_skip
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_skip:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
