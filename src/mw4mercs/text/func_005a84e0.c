/* func_005a84e0.c - inline-asm transcription of FUN_005a84e0 (85 bytes) */

extern int g_7f2088;
extern int g_7f208c;
extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416130(void *p);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void *func_005a84e0(void)
{
    __asm {
        push esi
        mov esi, ecx
        call FUN_004169c0
        test byte ptr [esp + 0x8], 0x1
        jz  L2
        mov ecx, dword ptr [g_7f2088]
        push esi
        call FUN_00416130
        dec dword ptr [g_7f208c]
        jnz L2
        push edi
        mov edi, dword ptr [g_7f2088]
        test edi, edi
        jz  L1
        mov ecx, edi
        call FUN_00415e30
        push edi
        call FUN_004084e0
        add esp, 0x4
L1:
        pop edi
        mov eax, esi
        mov dword ptr [g_7f2088], 0x0
        pop esi
        ret 0x4
L2:
        mov eax, esi
        pop esi
        ret 0x4
    }
}
