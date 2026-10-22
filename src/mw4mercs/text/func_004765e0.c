/* FUN_004765e0 - MLR class constructor (176 B, __thiscall, 3 args) */

extern int g_76f3c0;   /* vtable pointer stored into [this] */
extern int g_76e300;   /* string "This class got created only after version 2 !" */

extern void __cdecl FUN_0047a4c0(void);
extern int __cdecl FUN_006fab90(void);

__declspec(naked) void func_004765e0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp+0x8]
        push ebx
        mov ebx, dword ptr [ebp+0x10]
        push esi
        push edi
        mov edi, dword ptr [ebp+0xc]
        push ebx
        push edi
        mov esi, ecx
        push eax
        call FUN_0047a4c0
        xor eax, eax
        cmp ebx, 0x3
        mov dword ptr [esi+0x68], eax
        mov dword ptr [esi+0x6c], eax
        mov dword ptr [esi], offset g_76f3c0
        jge L476627
        push offset g_76e300
        call FUN_006fab90
        add esp, 0x4
        test eax, eax
        jz L476690
        int 3
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ebp
        ret 0xc
L476627:
        cmp ebx, 0xb
        jge L476654
        mov edx, dword ptr [edi]
        push 0x4
        lea eax, [ebp+0x10]
        push eax
        mov ecx, edi
        call dword ptr [edx+0x20]
        mov eax, dword ptr [ebp+0x10]
        mov edx, dword ptr [edi]
        lea ecx, [eax*4+0x0]
        push ecx
        mov ecx, edi
        call dword ptr [edx+0x18]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ebp
        ret 0xc
L476654:
        mov edx, dword ptr [edi]
        push 0x4
        lea ebx, [esi+0x6c]
        push ebx
        mov ecx, edi
        call dword ptr [edx+0x20]
        mov ebx, dword ptr [ebx]
        test ebx, ebx
        jbe L476689
        mov eax, dword ptr [edi]
        mov ecx, edi
        call dword ptr [eax+0x4]
        mov edx, dword ptr [edi]
        mov dword ptr [esi+0x68], eax
        lea eax, [ebx*4+0x0]
        push eax
        mov ecx, edi
        call dword ptr [edx+0x18]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ebp
        ret 0xc
L476689:
        mov dword ptr [esi+0x68], 0x0
L476690:
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ebp
        ret 0xc
    }
}
