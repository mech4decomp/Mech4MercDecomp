/*
 * ZlogLib.dll - FUN_10001cf5 (0x10001CF5, 47 B, __cdecl)
 * strlen + FUN_10001eac, then XOR-obfuscates the buffer with 0xa7.
 * Transcribed from ZlogLib.dll reference bytes.
 */

extern char g_10027040[];
extern unsigned int __cdecl FUN_1000297a(void);   /* strlen thunk */
extern void __cdecl FUN_10001eac(void);

__declspec(naked) void FUN_10001cf5(void)
{
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        push esi
        call FUN_1000297a
        mov edi, eax
        push edi
        push esi
        push offset g_10027040
        call FUN_10001eac
        add esp, 0x10
        xor eax, eax
        test edi, edi
        jle L_d21
    L_d18:
        xor byte ptr [eax + esi], 0xa7
        inc eax
        cmp eax, edi
        jl L_d18
    L_d21:
        pop edi
        pop esi
        ret
    }
}
