/* func_005a8390.c - inline-asm transcription of FUN_005a8390 (97 bytes) */

extern int g_7dab44;
extern int g_7dab40;
extern void __cdecl FUN_00415510(int);
extern void __cdecl FUN_004154d0(int);
extern void __cdecl FUN_004d9db0(void);

__declspec(naked) void func_005a8390(void)
{
    __asm {
        mov eax, dword ptr [g_7dab44]
        mov eax, dword ptr [eax]
        push esi
        mov esi, ecx
        xor eax, dword ptr [g_7dab40]
        mov ecx, dword ptr [eax + 0xc]
        xor ecx, 0x85739531
        add ecx, 0x204d24
        push ecx
        mov ecx, esi
        mov dword ptr [esi], 0x784f00
        call FUN_00415510
        test al, al
        jz  L1
        mov edx, dword ptr [g_7dab44]
        mov ecx, dword ptr [g_7dab40]
        mov eax, dword ptr [edx]
        xor eax, ecx
        mov ecx, dword ptr [eax + 0xc]
        xor ecx, 0x85739531
        add ecx, 0x204d24
        push ecx
        mov ecx, esi
        call FUN_004154d0
L1:
        mov ecx, esi
        call FUN_004d9db0
        pop esi
        ret
    }
}
