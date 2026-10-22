/*
 * FUN_00511850 (43 B) — Constructor
 * Calls allocation function, sets fields, writes global
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00511850(void)
{
    

extern void __cdecl FUN_006bbbf9(void);
extern int DAT_00858a38;
__asm {
push esi
        push 0x00
        push 0x00
        push 0x0077983C
        mov esi, ecx
        call FUN_006bbbf9
        mov [esi+0x48], eax
        mov dword ptr [esi+0x1C], 0x09
        mov byte ptr [esi+0x28], 0x00
        mov dword ptr [DAT_00858a38], 0x535260
        pop esi
        ret
    }


}
