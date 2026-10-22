// FUN_00526FA0 (97 bytes)
// Absolute data symbol referenced by the function
extern int DAT_007DD268;

__declspec(naked) void func_00526fa0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]      ; param_1
        mov     eax, dword ptr [eax + 0x4]
        push    edi
        mov     edi, dword ptr [eax]
        test    edi, edi
        mov     edx, ecx
        jz      second_block
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        push    ebx
        mov     eax, ecx
        push    esi
        mov     esi, edi
        shr     ecx, 2
        lea     ebx, [edx + 0x40da5]
        mov     edi, ebx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [DAT_007DD268]   ; mov ecx, [0x007DD268]
        pop     esi
        mov     eax, 0x1
        pop     ebx
        mov     byte ptr [edx + 0x40da4], al
        mov     dword ptr [ecx + 0x24], eax
        pop     edi
        ret     0x8

second_block:
        mov     edx, dword ptr [DAT_007DD268]   ; mov edx, [0x007DD268]
        mov     eax, 0x1
        mov     dword ptr [edx + 0x24], eax
        pop     edi
        ret     0x8
    }
}
