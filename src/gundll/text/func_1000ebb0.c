// FUN_1000ebb0 (0x1000EBB0) __stdcall, 233 bytes
extern int __stdcall FUN_1001c760(void *, void *);
extern void * __stdcall FUN_10001dd0(void *);
extern void __cdecl FUN_10001d60(void *);
extern int __stdcall FUN_1002e1c0(void **, void *);
extern void __stdcall FUN_1002e220(int, void *);

__declspec(naked) void FUN_1000ebb0(void)
{
    __asm {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp+0x18]
        mov eax, dword ptr [edi+0xc]
        test eax, eax
        mov dword ptr [esp+0xc], 0
        mov dword ptr [esp+0x10], 0
        jz loc_ebdf
        pop edi
        pop esi
        mov eax, 0xc112000d
        pop ebx
        add esp, 8
        ret 0x14
loc_ebdf:
        mov eax, dword ptr [esp+0x1c]
        push eax
        push edi
        call FUN_1001c760
        mov esi, eax
        test esi, esi
        jl loc_ec16
        mov esi, dword ptr [esp+0x20]
        push esi
        call FUN_10001dd0
        mov ebx, eax
        test ebx, ebx
        jnz loc_ec4f
        test esi, esi
        jz loc_ec4f
        mov esi, 0x8007000e
loc_ec09:
        test ebx, ebx
        jz loc_ec16
        push ebx
        call FUN_10001d60
        add esp, 4
loc_ec16:
        mov eax, dword ptr [esp+0xc]
        test eax, eax
        jz loc_ec2d
        mov ecx, dword ptr [edi+0xc]
        test ecx, ecx
        setnz cl
        push eax
        push ecx
        call FUN_1002e220
loc_ec2d:
        mov eax, dword ptr [esp+0x10]
        test eax, eax
        jz loc_ec44
        mov ecx, dword ptr [edi+0xc]
        test ecx, ecx
        setnz dl
        push eax
        push edx
        call FUN_1002e220
loc_ec44:
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        add esp, 8
        ret 0x14
loc_ec4f:
        mov ecx, dword ptr [esp+0x24]
        push ecx
        lea edx, [esp+0x10]
        push edx
        call FUN_1002e1c0
        mov esi, eax
        test esi, esi
        jl loc_ec09
        mov eax, dword ptr [esp+0x28]
        push eax
        lea ecx, [esp+0x14]
        push ecx
        call FUN_1002e1c0
        mov esi, eax
        test esi, esi
        jl loc_ec09
        mov eax, dword ptr [esp+0x10]
        mov edx, dword ptr [esp+0xc]
        mov dword ptr [edi+0x20], ebx
        mov dword ptr [edi+0x28], eax
        mov byte ptr [edi+4], 1
        mov dword ptr [edi+0x24], edx
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        add esp, 8
        ret 0x14
    }
}
