// func_00547490 - string processing function with character classification and jump table
// __cdecl: int func_00547490(const char* str, char filter_char)

extern int *DAT_0076b0dc;
extern int DAT_0076b58c;
extern int DAT_005474ec;

__declspec(naked) int __cdecl func_00547490(const char* str, char filter_char)
{
    __asm {
        push ebx
        push esi
        mov  esi, [esp+0xC]
        push 0x76b790
        push esi
        call dword ptr [DAT_0076b0dc]
        test eax, eax
        jne  process
    l_return_false:
        pop  esi
        xor  al, al
        pop  ebx
        ret
    process:
        mov  cl, [esi]
        test cl, cl
        mov  eax, esi
        je   return_true
        mov  bl, [esp+0x10]
        mov  esi, dword ptr [DAT_0076b58c]
    l_loop:
        movsx ecx, cl
        add  ecx, -0x22
        cmp  ecx, 0x5A
        ja   l_push_eax
        xor  edx, edx
        mov  dl, [ecx+0x5474F8]
        jmp  dword ptr [edx*4 + DAT_005474ec]
    l_check_filter:
        test bl, bl
        jne  l_return_false
    l_push_eax:
        push eax
        call esi
        mov  cl, [eax]
        test cl, cl
        jne  l_loop
    return_true:
        pop  esi
        mov  al, 1
        pop  ebx
        ret
    }
}
