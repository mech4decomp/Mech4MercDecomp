/*
 * FUN_00416dc0 (30 B) — __thiscall (RET 0x4). Calls FUN_00416c60() on
 * this, then if (arg & 1) calls FUN_004084e0(this). Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00416c60(void);
extern void FUN_004084e0(void);

__declspec(naked) void FUN_00416dc0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00416c60
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
