// FUN_1001d170 (0x1001D170, 149 B, __fastcall)
extern char g_1004a958;   // vtable pointer
extern void __cdecl FUN_10001d60(unsigned long);
extern void __cdecl FUN_1001d210(unsigned long, unsigned long);
extern void __cdecl FUN_1001d130(void);
extern void __cdecl FUN_1001cc90(void);

__declspec(naked) void FUN_1001d170(void)
{
    __asm {
        push -0x1
        push 0x10048188
        mov eax, fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], offset g_1004a958
        mov eax, dword ptr [esi + 0xc]
        push eax
        mov dword ptr [esp + 0x14], 0x0
        call FUN_10001d60
        mov eax, dword ptr [esi + 0x4]
        add esp, 0x4
        test eax, eax
        jz loc_e6
        mov eax, dword ptr [eax + 0x1c]
        test eax, eax
        jz loc_c6
        push eax
        push esi
        call FUN_1001d210
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x1c], 0x0
loc_c6:
        push edi
        mov edi, dword ptr [esi + 0x4]
        test edi, edi
        jz loc_de
        mov ecx, edi
        call FUN_1001d130
        push edi
        call FUN_10001d60
        add esp, 0x4
loc_de:
        mov dword ptr [esi + 0x4], 0x0
        pop edi
loc_e6:
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call FUN_1001cc90
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}
