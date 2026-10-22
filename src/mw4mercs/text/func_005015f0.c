/*
 * FUN_005015F0 (44 B) — Constructor
 * Initializes two sub-objects, sets vtables, returns this
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_005015f0(void)
{
    

extern void __cdecl FUN_100416e1d(void);
extern void __cdecl FUN_100416e09(void);
__asm {
push esi
        push edi
        push 1
        mov esi, ecx
        push 0
        call FUN_100416e1d
        push 1
        lea edi, [esi+0x18]
        push 0
        mov ecx, edi
        mov dword ptr [esi], 0x007763DC
        call FUN_100416e09
        mov dword ptr [edi], 0x007763B0
        pop edi
        mov eax, esi
        pop esi
        ret
    }


}
