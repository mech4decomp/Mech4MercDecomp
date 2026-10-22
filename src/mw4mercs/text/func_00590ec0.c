/* FUN_00590EC0 - __thiscall, 24 bytes */
/* Calls FUN_00590DF0 then FUN_005FB8F0(param) */

extern void FUN_00590df0(void);
extern void FUN_005fb8f0(void);

__declspec(naked) void FUN_00590EC0(void)
{
    __asm {
        push    esi
        mov     esi, ecx               /* esi = this */
        call    FUN_00590df0
        mov     eax, [esp + 8]         /* eax = param (stack arg) */
        push    eax
        mov     ecx, esi               /* this */
        call    FUN_005fb8f0
        pop     esi
        ret     4
    }
}
