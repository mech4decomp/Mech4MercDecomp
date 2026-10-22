/*
 * FUN_005a6d60 (30 B) — __thiscall destructor with delete flag.
 *
 * Calls FUN_005a6d80() on this, then if the lowest bit of
 * the stack param is set, calls FUN_004084e0 (operator delete)
 * on this. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005a6d80(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void __stdcall FUN_005a6d60(int deleteFlag)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005a6d80
        test    byte ptr [esp + 8], 1
        jz      skip_delete
        push    esi
        call    FUN_004084e0
        add     esp, 4
skip_delete:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
