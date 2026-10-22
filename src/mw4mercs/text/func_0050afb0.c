/*
 * FUN_0050AFB0 (70 B)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0050afb0(void)
{
    

extern void __cdecl FUN_00722f58(void);
extern void __cdecl FUN_0050b8ab(void);
__asm {
sub esp, 0x08
        mov eax, [esp+0x0C]
        push esi
        mov esi, ecx
        lea edx, [esp+0x04]
        xor ecx, ecx
        push edx
        mov [esp+0x08], ecx
        push eax
        mov [esi+0x1C], eax
        mov [esp+0x10], ecx
        call FUN_00722f58
        mov eax, [esp+0x08]
        shr eax, 0x10
        and eax, 0x1F
        mov [esi+0x18], eax
        mov eax, [esp+0x14]
        test eax, eax
        jz skip_call
        push eax
        mov ecx, esi
        call FUN_0050b8ab
skip_call:
        pop esi
        add esp, 0x08
        ret 0x08
    }


}
