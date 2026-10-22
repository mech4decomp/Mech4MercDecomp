/* FUN_004a3f00 - MLR (MidLevelRenderer) constructor, __thiscall, RET 0x8 */
extern void __cdecl FUN_004a9250(void);
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_004924e0(void);
extern void __cdecl FUN_004084e0(void);

extern int g_dword_7da884;   /* 0x007da884 */

__declspec(naked) void func_004a3f00(void)
{
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        push ebx
        push edi
        mov esi, ecx
        push 0x528
        call FUN_004a9250
        cmp ebx, 0x15
        mov eax, 0x74
        mov dword ptr [esi], 0x770318
        mov dword ptr [esi + 0x26c], eax
        mov dword ptr [esi + 0x270], eax
        jl L_a3f84
        lea eax, [esp + 0x14]
        push eax
        push edi
        mov dword ptr [esp + 0x1c], 0x0
        call FUN_00412a00
        mov ecx, dword ptr [esp + 0x1c]
        add esp, 0x8
        push ecx
        mov ecx, dword ptr [g_dword_7da884]
        call FUN_004924e0
        mov dword ptr [esi + 0x2b4], eax
        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        jz L_a3f94
        mov cl, byte ptr [eax - 0x1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jnz L_a3f94
        push eax
        call FUN_004084e0
        add esp, 0x4
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 0x8
L_a3f84:
        mov edx, dword ptr [edi]
        push 0x4
        lea eax, [esi + 0x2b4]
        push eax
        mov ecx, edi
        call dword ptr [edx + 0x20]
L_a3f94:
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 0x8
    }
}
