// 0x00566380: dispatch function - checks globals, returns E_FAIL or 0, or jumps through function pointer
// __cdecl

__declspec(naked) int __cdecl func_00566380(void)
{
    

extern int DAT_007eebd4;
extern int DAT_007eebc0;
extern int DAT_007eebec;
__asm {
        mov eax, dword ptr [DAT_007eebd4]
        test eax, eax
        jne skip_e_fail
        mov eax, 0x80004005
        ret
skip_e_fail:
        mov eax, dword ptr [DAT_007eebc0]
        test eax, eax
        jne skip_ret0
        xor eax, eax
        ret
skip_ret0:
        jmp dword ptr [DAT_007eebec]
    }


}
