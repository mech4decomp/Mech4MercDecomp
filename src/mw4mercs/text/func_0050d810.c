/*
 * FUN_0050D810 (35 B) — Two-step call helper
 * Calls func_0050D660 then calls another function with results
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0050d810(void)
{
    

extern void __cdecl FUN_10050d659(void);
extern void __cdecl FUN_10050d74d(void);
__asm {
push esi
        mov esi, [esp+0x10]
        push edi
        mov edi, [esp+0x0C]
        push esi
        push edi
        call FUN_10050d659
        mov eax, [esp+0x18]
        push esi
        push eax
        push edi
        call FUN_10050d74d
        add esp, 0x14
        pop edi
        pop esi
        ret
    }


}
