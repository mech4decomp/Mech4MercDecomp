// FUN_1000c410 (0x1000C410) __stdcall, 167 bytes
extern void __cdecl FUN_1000c590(void);
extern void *g_1004908c;   // IAT slot 0x1004908c (InterlockedExchange)
extern void *g_10049068;   // IAT slot 0x10049068 (EnterCriticalSection)
extern void *g_10049064;   // IAT slot 0x10049064 (LeaveCriticalSection)
extern void *g_10049120;   // IAT slot 0x10049120 (InterlockedIncrement)

__declspec(naked) void __stdcall func_1000c410(void)
{
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        push 0x0
        lea eax, [esi + 0x20]
        push eax
        call dword ptr [g_1004908c]
        mov edi, eax
        test edi, edi
        jnz L468
        lea ebx, [esi + 0x24]
        push ebx
        call dword ptr [g_10049068]
        mov eax, dword ptr [esi + 0x1c]
        test eax, eax
        jnz L453
        push esi
        call FUN_1000c590
        test eax, eax
        jnz L453
        push ebx
        call dword ptr [g_10049064]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0x4
    L453:
        mov edi, dword ptr [esi + 0x1c]
        mov ecx, dword ptr [edi]
        mov dword ptr [esi + 0x1c], ecx
        push ebx
        mov dword ptr [edi], 0xeeeeeeee
        call dword ptr [g_10049064]
    L468:
        lea edx, [esi + 0xc]
        push edx
        call dword ptr [g_10049120]
        mov eax, dword ptr [esi + 0x14]
        test eax, eax
        jz L4AF
        cmp dword ptr [edi - 0x4], 0x45524650
        jz L48A
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0x4
    L48A:
        mov eax, dword ptr [esi + 0x10]
        cmp dword ptr [edi + eax*1], 0x444e4550
        jz L49E
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0x4
    L49E:
        mov dword ptr [edi - 0x4], 0x4c4f4f50
        mov ecx, dword ptr [esi + 0x10]
        mov dword ptr [edi + ecx*1], 0x444e4550
    L4AF:
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}
