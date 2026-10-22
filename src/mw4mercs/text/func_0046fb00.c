/* FUN_0046fb00 - MLR mesh object ctor (152 B, __thiscall RET 0xc) */

extern int g_7b9580;

extern void __cdecl FUN_0047a4c0(void);
extern void __cdecl FUN_004911e0(void);
extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_00491440(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void func_0046fb00(void)
{
    __asm {
        mov eax, dword ptr [esp+0x4]
        push ebx
        mov ebx, dword ptr [esp+0x10]
        push ebp
        mov ebp, dword ptr [esp+0x10]
        push esi
        push edi
        push ebx
        push ebp
        mov esi, ecx
        push eax
        call FUN_0047a4c0
        lea ecx, [esi+0x68]
        call FUN_004911e0
        lea edi, [esi+0x70]
        mov ecx, edi
        call FUN_00491280
        mov ecx, dword ptr [g_7b9580]
        push ecx
        mov dword ptr [esi], 0x76f1f8
        call FUN_006f4950
        push ebx
        push ebp
        mov ecx, edi
        call FUN_00491440
        call FUN_006f49a0
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [edi+0x8]
        mov ebp, dword ptr [esi+0x3c]
        mov ebx, dword ptr [esi+0x30]
        and ecx, 0xfbffffff
        mov dword ptr [edi], ecx
        or eax, 0x4000000
        mov ecx, 0xf
        or ebp, ecx
        mov dword ptr [edi+0x8], eax
        mov dword ptr [esi+0x3c], ebp
        mov edx, dword ptr [edi+0x10]
        mov eax, 0xfffffff0
        and ebx, eax
        mov dword ptr [esi+0x30], ebx
        or edx, ecx
        mov ecx, dword ptr [edi+0x4]
        and ecx, eax
        mov dword ptr [edi+0x10], edx
        mov dword ptr [edi+0x4], ecx
        pop edi
        mov byte ptr [esi+0x11], 0x2
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xc
    }
}
