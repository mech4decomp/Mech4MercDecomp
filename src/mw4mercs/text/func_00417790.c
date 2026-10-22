/* FUN_00417790 - __thiscall, RET 0x4
 * Calls FUN_00417600(this+4, param_1, this+0x10), stores result at this+0x10.
 */
extern void __cdecl FUN_00417600(void);

__declspec(naked) void FUN_00417790(void)
{
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi+10h]
        mov ecx, dword ptr [esp+8]
        push eax
        push ecx
        mov ecx, dword ptr [esi+4]
        call FUN_00417600
        mov dword ptr [esi+10h], eax
        pop esi
        ret 4
    }
}
