/*
 * FUN_005fc260 (39 B) — destroys the state-engine object at 0x007f26a0
 * (calls FUN_004dd340 then frees) and clears the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f26a0;

extern void __cdecl FUN_004dd340(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_005fc260(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007f26a0]
        test    esi, esi
        jz      loc_5fc27b
        mov     ecx, esi
        call    FUN_004dd340
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
loc_5fc27b:
        mov     dword ptr [g_007f26a0], 0x0
        pop     esi
        ret
    }
}
