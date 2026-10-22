/*
 * FUN_00428fb0 (30 B) — __thiscall MLR object destructor wrapper:
 * calls base ctor FUN_00429030, then conditionally frees via FUN_004084e0
 * if the "delete" flag (arg) is set. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00429030(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_00428fb0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00429030
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
