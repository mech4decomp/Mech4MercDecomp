/*
 * func_005185B0 - 105 bytes
 * Frees memory in a table/array structure
 */
__declspec(naked) void func_005185B0()
{
    extern void __cdecl FUN_004084E0(void);
    extern void __cdecl FUN_004084DF(void);
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebx, ecx
        mov     ebp, [ebx + 0x409B4]
        push    esi
        mov     esi, [ebx + 0x409B8]
        push    edi
        mov     edi, ebp
        sub     edi, esi
        mov     dword ptr [esp + 0x10], 0x32
loop_start:
        mov     eax, [esi]
        test    eax, eax
        jz      skip_free_ptr
        push    eax
        call FUN_004084E0
        add     esp, 4
        mov     dword ptr [esi], 0
skip_free_ptr:
        test    ebp, ebp
        jz      skip_free_ebp
        mov     eax, [edi+esi]
        push    eax
        call FUN_004084DF
        add     esp, 4
        mov     dword ptr [edi+esi], 0
skip_free_ebp:
        mov     eax, [esp + 0x10]
        add     esi, 4
        dec     eax
        mov     [esp + 0x10], eax
        jnz     loop_start
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [ebx + 0x409AC], 0
        pop     ebx
        pop     ecx
        ret
    }
}
