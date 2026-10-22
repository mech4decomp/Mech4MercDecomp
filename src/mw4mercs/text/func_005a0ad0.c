/*
 * FUN_005a0ad0 (39 B) — Cleanup execution state engine.
 * Calls FUN_004dd340 then frees the object, sets global to NULL.
 *
 * __stdcall, no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004dd340(void);
extern int __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005a0ad0(void)
{
    

extern int DAT_007f2028;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2028]

        test    esi, esi
        jz      set_null

        mov     ecx, esi
        call    FUN_004dd340
        push    esi
        call    FUN_004084e0
        add     esp, 4

set_null:
        mov dword ptr [DAT_007f2028], 0x0

        pop     esi
        ret
    }


}
