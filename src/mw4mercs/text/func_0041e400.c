/*
 * FUN_0041e400 (30 B) — __thiscall scalar-deleting-destructor pattern.
 * Calls FUN_00416c60 (destructor), then if the flags arg (bit 0) is set,
 * frees the object via FUN_004084e0. Returns the object pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_0041e400(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00416c60
        test    byte ptr [esp+0x8], 0x1
        jz      L418
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L418:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
