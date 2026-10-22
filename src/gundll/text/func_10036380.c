// FUN_10036380 (__fastcall, 81 bytes)
extern void *g_10049234;   /* IAT entry, call dword ptr [g_10049234] */

__declspec(naked) void __fastcall FUN_10036380(void)
{
    __asm {
        push ebx
        push esi
        push edi
        mov ebx, ecx
        lea edi, [ebx+0xc]
        push edi
        push 0x1004ae2c
        push 0x17
        push 0
        push 0x1004ae5c
        call dword ptr [g_10049234]
        mov esi, eax
        test esi, esi
        jl L1
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [eax]
        push 0
        push 0x10036fa0
        push ebx
        push eax
        call dword ptr [ecx+0xc]
        mov esi, eax
        test esi, esi
        jge L2
    L1:
        mov eax, dword ptr [edi]
        test eax, eax
        jz L2
        mov edx, dword ptr [eax]
        push eax
        call dword ptr [edx+0x8]
        mov dword ptr [edi], 0
    L2:
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret
    }
}
