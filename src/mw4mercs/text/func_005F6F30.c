/*
 * func_005F6F30 - thiscall wrapper (stdcall, ret 4)
 * Calls FUN_004d96e0([esp+4]), sets [this+0x168]=1 and [this+0x178]=9
 */

extern void __cdecl FUN_004d96e0(void);

__declspec(naked) void func_005F6F30()
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_004d96e0
        mov     byte ptr [esi + 0x168], 1
        mov     dword ptr [esi + 0x178], 9
        pop     esi
        ret     4
    }
}
