// FUN_10039b19 (0x10039B19) __cdecl
extern int g_10051BA0;
extern void __cdecl FUN_1003c3c5(void);
extern void __cdecl FUN_100374e6(void);
extern void __cdecl FUN_10039b19(void);
extern void* g_100491A8;
extern void __cdecl FUN_1003c2dc(void);
extern void __cdecl FUN_10039b7a(void);
extern void* g_10049068;

__declspec(naked) void func_10039b19(void)
{
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp+8]
        push esi
        cmp dword ptr [eax*4 + g_10051BA0], 0
        lea esi, [eax*4 + g_10051BA0]
        jne L6F
        push edi
        push 0x18
        call FUN_1003c3c5
        mov edi, eax
        pop ecx
        test edi, edi
        jne L48
        push 0x11
        call FUN_100374e6
        pop ecx
L48:
        push 0x11
        call FUN_10039b19
        cmp dword ptr [esi], 0
        pop ecx
        push edi
        jne L60
        call dword ptr [g_100491A8]
        mov dword ptr [esi], edi
        jmp L66
L60:
        call FUN_1003c2dc
        pop ecx
L66:
        push 0x11
        call FUN_10039b7a
        pop ecx
        pop edi
L6F:
        push dword ptr [esi]
        call dword ptr [g_10049068]
        pop esi
        pop ebp
        ret
    }
}
