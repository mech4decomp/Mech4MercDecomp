// FUN_1000d190 (0x1000D190) __stdcall, 238 bytes
extern int __stdcall FUN_1001c760(void *, void *);
extern int __stdcall FUN_1002e1c0(void **, void *);
extern void * __stdcall FUN_10001dd0(void *);
extern void __stdcall FUN_1002e220(int, void *);
extern void __cdecl FUN_10001d60(void *);

__declspec(naked) void __stdcall FUN_1000d190(void)
{
    __asm {
        sub esp, 8
        push ebx
        push esi
        mov esi, dword ptr [esp+0x14]
        mov eax, dword ptr [esi+0xc]
        xor ebx, ebx
        test eax, eax
        push edi
        mov dword ptr [esp+0xc], 0
        mov dword ptr [esp+0x10], ebx
        jz loc_d1bd
        pop edi
        pop esi
        mov eax, 0xc112000d
        pop ebx
        add esp, 8
        ret 0x18
loc_d1bd:
        mov eax, dword ptr [esp+0x1c]
        push eax
        push esi
        call FUN_1001c760
        mov edi, eax
        test edi, edi
        jl loc_d1fc
        mov ecx, dword ptr [esp+0x24]
        push ecx
        lea edx, [esp+0x10]
        push edx
        call FUN_1002e1c0
        mov edi, eax
        test edi, edi
        jl loc_d1fc
        mov edi, dword ptr [esp+0x28]
        push edi
        call FUN_10001dd0
        mov ebx, eax
        test ebx, ebx
        jnz loc_d242
        test edi, edi
        jz loc_d242
        mov edi, 0x8007000e
loc_d1fc:
        mov eax, dword ptr [esp+0xc]
        test eax, eax
        jz loc_d213
        mov ecx, dword ptr [esi+0xc]
        test ecx, ecx
        setnz dl
        push eax
        push edx
        call FUN_1002e220
loc_d213:
        test ebx, ebx
        jz loc_d220
        push ebx
        call FUN_10001d60
        add esp, 4
loc_d220:
        mov eax, dword ptr [esp+0x10]
        test eax, eax
        jz loc_d237
        mov edx, dword ptr [esi+0xc]
        push eax
        test edx, edx
        setnz al
        push eax
        call FUN_1002e220
loc_d237:
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 0x18
loc_d242:
        mov eax, dword ptr [esp+0x2c]
        push eax
        lea ecx, [esp+0x14]
        push ecx
        call FUN_1002e1c0
        mov edi, eax
        test edi, edi
        jl loc_d1fc
        mov eax, dword ptr [esp+0xc]
        mov edx, dword ptr [esp+0x20]
        mov ecx, dword ptr [esp+0x10]
        mov dword ptr [esi+0x24], eax
        mov eax, edi
        pop edi
        mov dword ptr [esi+0x28], ebx
        mov byte ptr [esi+4], 1
        mov dword ptr [esi+0x20], edx
        mov dword ptr [esi+0x2c], ecx
        pop esi
        pop ebx
        add esp, 8
        ret 0x18
    }
}
