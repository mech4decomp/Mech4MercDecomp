/*
 * FUN_005e6730 (30 B) — __thiscall destructor (ECX=this, RET 4, one param).
 * Calls FUN_005e67c0(this); if (param & 1) frees this via FUN_004084e0;
 * returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005e67c0(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void *__stdcall FUN_005e6730(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005e67c0
        test    byte ptr [esp + 0x8], 0x1
        jz      L1
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L1:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
