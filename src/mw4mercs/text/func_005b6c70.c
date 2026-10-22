/*
 * FUN_005b6c70 (39 B) — global MWInternalDamageObject destructor/cleanup.
 * If global handle non-null, calls FUN_004d5d20 then frees via FUN_004084e0,
 * then clears the global handle.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004d5d20(void);
extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_005b6c70(void)
{
    

extern int DAT_007f210c;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f210c]
        test    esi, esi
        jz      L_6c8b
        mov     ecx, esi
        call    FUN_004d5d20
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_6c8b:
        mov dword ptr [DAT_007f210c], 0x0
        pop     esi
        ret
    }


}
