/*
 * FUN_0066ae30 (30 B) — __thiscall destructor: calls FUN_00416c60(), then
 * frees the object if the flag arg bit 0 is set. RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_0066ae30(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00416c60
        test    byte ptr [esp + 0x8], 1
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
