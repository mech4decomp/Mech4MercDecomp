/*
 * FUN_00500E00 (44 B) — Constructor
 * Initializes two sub-objects, sets vtables, returns this
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416e20(void);

__declspec(naked) void func_00500e00(void)
{
    __asm {
        push esi
        push edi
        push 1
        mov esi, ecx
        push 0
        call FUN_00416e20
        push 1
        lea edi, [esi+0x18]
        push 0
        mov ecx, edi
        mov dword ptr [esi], 0x007762D8
        call FUN_00416e20
        mov dword ptr [edi], 0x007762AC
        pop edi
        mov eax, esi
        pop esi
        ret
    }
}
