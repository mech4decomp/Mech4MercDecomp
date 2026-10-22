/*
 * func_00511A80 - Free field at +0x30 if non-null, then set +0x1c to -1
 */
extern void __cdecl func_006BBE80(int);

__declspec(naked) void func_00511A80()
{
    
__asm {
push esi
        mov  esi, ecx
        mov  eax, [esi+0x30]
        test eax, eax
        jz   skip_free
        push eax
        call func_006BBE80
        mov dword ptr [esi+0x30], 0
skip_free:
        mov dword ptr [esi+0x1c], 0xFFFFFFFF
        pop  esi
        ret
    }


}
