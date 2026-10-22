/*
 * FUN_0068b5e0 (30 B) — __thiscall scalar-deleting-destructor pattern:
 * calls FUN_0068b600, then if the flag byte (param at [esp+8]) has bit 0
 * set, calls operator delete (FUN_004084e0) on the object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0068b600(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_0068b5e0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0068b600
        test    byte ptr [esp + 0x8], 0x1
        jz      skip
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
skip:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
