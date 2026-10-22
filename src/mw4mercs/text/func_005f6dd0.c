/*
 * FUN_005f6dd0 (39 B) — Teardown for the Cultural resource subsystem.
 *
 * If the global object at DAT_007f25c8 is non-null, calls its destructor
 * (FUN_00501b40, thiscall) and frees it (FUN_004084e0), then nulls the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_00501b40(void);
extern void *__cdecl FUN_004084e0(void *p);

extern int DAT_007f25c8;

__declspec(naked) void FUN_005f6dd0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007f25c8]
        test    esi, esi
        jz      L1
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
L1:
        mov     dword ptr [DAT_007f25c8], 0
        pop     esi
        ret
    }
}
