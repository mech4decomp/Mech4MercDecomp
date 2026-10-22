/* func_004dfbb0 - FUN_004dfbb0 (64 B) - __cdecl
 * Copies param_2-param_1 elements of 0x24-byte structs (iVar1*9 dwords)
 * from param_1 to param_3. Returns param_3 + iVar1*9.
 */
__declspec(naked) void func_004dfbb0(void)
{
    __asm {
        mov ecx, dword ptr [esp+0x8]   /* param_2 */
        push ebx
        mov ebx, dword ptr [esp+0x10]  /* param_3 */
        push esi
        mov esi, dword ptr [esp+0xc]   /* param_1 */
        sub ecx, esi
        mov eax, 0x38e38e39
        imul ecx
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add edx, eax
        test edx, edx
        jle L_ret
        lea eax, [edx+edx*8]
        push edi
        shl eax, 0x2
        mov ecx, eax
        shr ecx, 0x2
        mov edi, ebx
        rep movsd
        pop edi
        pop esi
        add eax, ebx
        pop ebx
        ret
L_ret:
        pop esi
        mov eax, ebx
        pop ebx
        ret
    }
}
