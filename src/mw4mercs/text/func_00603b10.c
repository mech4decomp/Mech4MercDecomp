/*
 * FUN_00603b10 (30 B) — __thiscall scalar deleting destructor (RET 0x4).
 * Calls the real destructor FUN_00603b30, then if the low flag bit is set
 * frees the object via FUN_004084e0 (operator delete).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00603b30(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00603b10(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00603b30
        test    byte ptr [esp + 0x8], 0x1
        jz      loc_603b28
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
loc_603b28:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
