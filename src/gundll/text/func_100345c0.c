// FUN_100345c0 (__stdcall, 81 bytes)
extern void __cdecl FUN_100333f0(void);

__declspec(naked) void FUN_100345c0(void)
{
    __asm {
        push ecx
        mov eax, dword ptr [esp+0x8]
        mov ecx, dword ptr [eax+0x18]
        mov eax, dword ptr [eax+0x14]
        push esi
        push 0
        lea esi, [esp+0x8]
        push esi
        mov dword ptr [esp+0xc], 0
        mov eax, dword ptr [eax+0xc]
        mov edx, dword ptr [eax]
        push ecx
        push eax
        call dword ptr [edx+0x28]
        mov esi, eax
        test esi, esi
        jl L1
        mov eax, dword ptr [esp+0x10]
        mov ecx, dword ptr [esp+0x4]
        push eax
        push ecx
        call FUN_100333f0
        mov esi, eax
    L1:
        mov eax, dword ptr [esp+0x4]
        test eax, eax
        jz L2
        mov edx, dword ptr [eax]
        push eax
        call dword ptr [edx+0x8]
    L2:
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
