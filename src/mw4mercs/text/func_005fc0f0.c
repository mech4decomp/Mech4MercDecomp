/*
 * `scalar_deleting_destructor' (30 B) — __thiscall, RET 4.
 * Calls base destructor FUN_0041fc90, then frees if delete flag set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_005fc0f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0041fc90
        test    byte ptr [esp + 0x8], 0x1
        jz      loc_5fc108
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
loc_5fc108:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
