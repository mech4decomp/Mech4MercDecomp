/*
 * FUN_005EBD70 (39 B) — __cdecl, no args. Tears down the
 * ExecutionStateEngine object (FUN_004dd340 + free) if present, then
 * nulls DAT_007f2598.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004dd340(void);
extern void __cdecl FUN_004084e0(void *p);

extern int DAT_007f2598;

__declspec(naked) void FUN_005ebd70(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007f2598]
        test    esi, esi
        jz      l_done
        mov     ecx, esi
        call    FUN_004dd340
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_done:
        mov     dword ptr [DAT_007f2598], 0
        pop     esi
        ret
    }
}
