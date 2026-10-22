/*
 * FUN_1002ae80 (30 B) - __thiscall ctor. Calls FUN_1001c870(this,0x2207,
 * param_1), sets vtable ptr 0x1004ad44.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c870(void);   /* rel32 call */
extern char g_vtable_1004ad44;            /* vtable ptr write (reloc-masked) */

__declspec(naked) void FUN_1002ae80(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        push    eax
        push    0x2207
        mov     esi, ecx
        call    FUN_1001c870
        mov     dword ptr [esi], offset g_vtable_1004ad44
        mov     eax, esi
        pop     esi
        ret     4
    }
}
