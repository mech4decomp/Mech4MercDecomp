// 0x0056CA40: push value onto a fixed-size stack/buffer
// __cdecl, 1 param (int)

extern void __cdecl FUN_00563060(int);

__declspec(naked) void __cdecl func_0056ca40(int val)
{
    

extern int DAT_00805928;
extern int DAT_0080592c;
__asm {
        mov eax, dword ptr [DAT_00805928]
        push esi
        mov esi, dword ptr [DAT_0080592c]
        add esi, 4
        add eax, 0xa000
        cmp esi, eax
        mov dword ptr [DAT_0080592c], esi
        jb  no_overflow
        push 0
        call FUN_00563060
        mov ecx, dword ptr [esp + 0xc]
        add esp, 4
        mov dword ptr [esi], ecx
        pop esi
        ret
no_overflow:
        mov edx, dword ptr [esp + 8]
        mov dword ptr [esi], edx
        pop esi
        ret
    }


}
