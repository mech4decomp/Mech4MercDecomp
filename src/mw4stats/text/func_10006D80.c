/*
 * MW4Stats.dll - FUN_10006d80 (0x10006D80, 134 B, __stdcall)
 * Look up a wide-char token in a static table; advance *out past ';'.
 * RET 0x4.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern int g_1002549c;   /* static table count */
extern void *g_1002114c; /* IAT */

__declspec(naked) void FUN_10006d80(void)
{
    __asm {
        mov edx, dword ptr [esp+0x4]
        push ebx
        mov ebx, dword ptr [g_1002549c]
        push ebp
        push esi
        mov esi, dword ptr [edx]
        push edi
        mov edi, 0x10025460
        test ebx, ebx
        jz L_de7
    L_d99:
        mov ebp, dword ptr [g_1002114c]
    L_d9f:
        mov ecx, dword ptr [edi+0x4]
        mov eax, dword ptr [edi]
        test esi, esi
        jnz L_db3
        xor ecx, ecx
        test eax, eax
        setz cl
        mov eax, ecx
        jmp L_dc3
    L_db3:
        test eax, eax
        jz L_dd1
        push ecx
        push eax
        push esi
        call ebp
        mov edx, dword ptr [esp+0x20]
        add esp, 0xc
    L_dc3:
        test eax, eax
        jz L_dd1
        dec ebx
        add edi, 0xc
        test ebx, ebx
        jz L_de7
        jmp L_d9f
    L_dd1:
        mov eax, dword ptr [edi+0x4]
        mov ecx, dword ptr [edx]
        shl eax, 0x1
        add ecx, eax
        mov dword ptr [edx], ecx
        mov ax, word ptr [edi+0x8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    L_de7:
        cmp word ptr [esi], 0x3b
        jz L_df6
    L_ded:
        add esi, 0x2
        cmp word ptr [esi], 0x3b
        jnz L_ded
    L_df6:
        add esi, 0x2
        pop edi
        mov dword ptr [edx], esi
        pop esi
        pop ebp
        mov ax, 0x20
        pop ebx
        ret 0x4
    }
}
