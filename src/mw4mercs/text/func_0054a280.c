/*
 * FUN_0054a280 (51 B) — thiscall: calls member functions, optionally calls FUN_006BFC83.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_0054a280(void)
{
    

extern void __cdecl FUN_10041fc8f(void);
extern void __cdecl FUN_10041fc87(void);
extern void __cdecl FUN_100415370(void);
extern int DAT_007f2d20;
extern void __cdecl FUN_10041610d(void);
__asm {
push esi
        mov  esi, ecx
        lea  ecx, [esi+0x1C]
        call FUN_10041fc8f
        lea  ecx, [esi+0x14]
        call FUN_10041fc87
        mov  ecx, esi
        call FUN_100415370
        test byte ptr [esp+8], 1
        je   skip
        mov ecx, dword ptr [DAT_007f2d20]
        push esi
        call FUN_10041610d
skip:
        mov  eax, esi
        pop  esi
        ret  4
    }


}
