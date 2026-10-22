/*
 * FUN_0050D5D0 (73 B)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0050d5d0(void)
{
    

extern int DAT_0076b294;
__asm {
push esi
        push edi
        mov edi, dword ptr [DAT_0076b294]
        push 0x18
        call edi
        mov ecx, [esp+0x14]
        add esp, 0x04
        test ecx, ecx
        mov esi, eax
        jnz use_param
        mov ecx, 0x08
use_param:
        mov eax, [esp+0x0C]
        mov edx, [esp+0x14]
        mov [esi+0x08], eax
        imul eax, ecx
        push eax
        mov dword ptr [esi], 0x00000000
        mov [esi+0x04], ecx
        mov [esi+0x0C], ecx
        mov [esi+0x10], edx
        call edi
        add esp, 0x04
        mov [esi+0x14], eax
        pop edi
        mov eax, esi
        pop esi
        ret
    }


}
