/*
 * FUN_00507F30 (94 B) — Copy/init function
 * Performs vtable calls and copies data between structures
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_00507f30(void)
{
    

extern void __cdecl FUN_10041aca6(void);
extern void __cdecl FUN_100412a07(void);
__asm {
sub esp, 0x18
        push esi
        push edi
        mov edi, ecx
        lea esi, [edi+0x10]
        push esi
        lea ecx, [esp+0x18]
        call FUN_10041aca6
        mov ecx, [esi+0x1C]
        mov eax, [esi+0x0C]
        mov edx, [esi+0x2C]
        mov esi, [esp+0x24]
        mov [esp+0x0C], ecx
        push 0x0C
        lea ecx, [esp+0x18]
        mov [esp+0x0C], eax
        mov eax, [esi]
        push ecx
        mov ecx, esi
        mov [esp+0x18], edx
        call dword ptr [eax+0x24]
        mov edx, [esi]
        push 0x0C
        lea eax, [esp+0x0C]
        push eax
        mov ecx, esi
        call dword ptr [edx+0x24]
        add edi, 0x44
        push edi
        push esi
        call FUN_100412a07
        add esp, 0x08
        pop edi
        pop esi
        add esp, 0x18
        ret 0x04
    }


}
