/*
 * `scalar_deleting_destructor' (30 B) — Standard C++ delete-this pattern.
 *
 * Calls destructor (FUN_0041fc90), then operator delete (FUN_004084e0)
 * if the flag parameter (bit 0) is set.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: delete flag).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041fc90(void);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005a7fb0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0041fc90
        test    byte ptr [esp + 0x8], 1
        jz      label_skip
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
label_skip:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
