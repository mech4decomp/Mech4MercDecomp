// FUN_10037e02 (0x10037E02) __cdecl, 122 bytes
extern int g_1007567c;
extern int g_10076a88;
extern int g_100491bc;
extern void *g_10049120;
extern void __cdecl FUN_10039b19(void);
extern void __cdecl FUN_10039b7a(void);
extern void __cdecl FUN_10037e7c(void);

__declspec(naked) void func_10037e02(void)
{
    __asm {
        push ebp
        mov ebp, dword ptr [esp+8]
        mov eax, 0xffff
        push edi
        cmp bp, ax
        jz L_79
        xor edi, edi
        cmp dword ptr [g_1007567c], edi
        jnz L_30
        cmp bp, 0x41
        jc L_2b
        cmp bp, 0x5a
        ja L_2b
        add ebp, 0x20
L_2b:
        mov ax, bp
        jmp L_79
L_30:
        push ebx
        push esi
        mov esi, 0x10076a8c
        push esi
        call dword ptr [g_10049120]
        cmp dword ptr [g_10076a88], edi
        mov ebx, dword ptr [g_100491bc]
        jz L_5a
        push esi
        call ebx
        push 0x13
        call FUN_10039b19
        pop ecx
        push 1
        pop edi
L_5a:
        push ebp
        call FUN_10037e7c
        test edi, edi
        pop ecx
        mov ebp, eax
        jz L_71
        push 0x13
        call FUN_10039b7a
        pop ecx
        jmp L_74
L_71:
        push esi
        call ebx
L_74:
        pop esi
        mov ax, bp
        pop ebx
L_79:
        pop edi
        pop ebp
        ret
    }
}
