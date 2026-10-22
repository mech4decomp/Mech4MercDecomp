/*
 * FUN_005bfd40 (39 B) — Teardown of global PlayerAI execution-state engine.
 *
 * If global DAT_007f22b4 is non-null, calls FUN_004dd340(this) then
 * frees it via FUN_004084e0. Clears DAT_007f22b4 to 0.
 *
 * __cdecl, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004dd340(void);
extern void FUN_004084e0(void *obj);

__declspec(naked) void FUN_005bfd40(void)
{
    

extern int DAT_007f22b4;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f22b4]
        test    esi, esi
        jz      L_skip
        mov     ecx, esi
        call    FUN_004dd340
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_skip:
        mov dword ptr [DAT_007f22b4], 0x0
        pop     esi
        ret
    }


}
