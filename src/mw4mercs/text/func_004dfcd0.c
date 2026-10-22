/* func_004dfcd0 - FUN_004dfcd0 (48 B) - __cdecl
 * Copies 9-dword (0x24-byte) structs from param_1 to param_3 while
 * param_1 != param_2, skipping when param_3 is null.
 */
__declspec(naked) void func_004dfcd0(void)
{
    __asm {
        mov edx, dword ptr [esp+0x4]   /* param_1 */
        mov eax, dword ptr [esp+0xc]   /* param_3 */
        push ebx
        mov ebx, dword ptr [esp+0xc]   /* param_2 */
        cmp edx, ebx
        jz L_ret
        push esi
        push edi
L_loop:
        test eax, eax
        jz L_skip
        mov ecx, 0x9
        mov esi, edx
        mov edi, eax
        rep movsd
L_skip:
        add edx, 0x24
        add eax, 0x24
        cmp edx, ebx
        jnz L_loop
        pop edi
        pop esi
L_ret:
        pop ebx
        ret
    }
}
