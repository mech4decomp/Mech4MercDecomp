/*
 * func_00519C60 - 110 bytes
 * Error/status checking function with multiple conditions
 */
__declspec(naked) void func_00519C60()
{
    extern void __cdecl FUN_00519CD0(void);
    extern void __cdecl FUN_005130EF(void);
    extern void __cdecl FUN_0052909F(void);
    __asm {
        push    ecx
        mov     eax, [esp + 0x10]
        mov     ecx, [eax]
        push    ebx
        mov     ebx, [eax + 8]
        push    esi
        mov     esi, [ecx]
        push    edi
        mov     edi, [eax + 4]
        push    esi
        call FUN_00519CD0
        lea     eax, [esp + 0x0C]
        push    eax
        push    1
        lea     edx, [esp + 0x24]
        push    0
        mov     dword ptr [esp + 0x28], 0x21
        mov     [esp + 0x18], edx
        call FUN_005130EF
        test    eax, eax
        jl      l_cmp_c
        cmp     eax, 3
        jle     l_ret1
    l_cmp_c:
        cmp     eax, 0x0C
        je      l_ret1
        cmp     eax, 0x0D
        je      l_ret1
        cmp     eax, 0x11
        je      l_ret1
        cmp     eax, 0x13
        jge     l_ret1
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     0x0C
    l_ret1:
        push    ebx
        push    edi
        push    esi
        call FUN_0052909F
        add     esp, 0x0C
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x0C
    }
}
