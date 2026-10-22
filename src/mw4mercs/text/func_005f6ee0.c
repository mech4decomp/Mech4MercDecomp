/*
 * FUN_005f6ee0 (30 B) — __thiscall destructor, RET 4.
 *
 * Calls FUN_005f6f00 (this), then if (param & 1) frees this via FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_005f6f00(void);
extern void *__cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_005f6ee0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005f6f00
        test    byte ptr [esp + 0x8], 1
        jz      L1
        push    esi
        call    FUN_004084e0
        add     esp, 4
L1:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
