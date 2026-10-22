// 0x00667770: in-.text data block transcription (346 bytes)
// Object constructor: allocates via vtable +0x14, initializes a set of
// float/byte fields via FUN_00411d60/FUN_00411ec0/FUN_00411cb0, then
// builds a transform via FUN_004da8d0.

extern void __cdecl FUN_0062df30(void);
extern void __cdecl FUN_004cfbd0(void);
extern void __cdecl FUN_00411d60(void);
extern void __cdecl FUN_00411ec0(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004da8d0(void);
extern void __cdecl FUN_004cfc90(void);
extern void __cdecl FUN_004d21c0(void);

extern int g_7db0a0;   // 0x7db0a0
extern char g_78d44c;  // 0x78d44c
extern char g_7954f0;  // 0x7954f0
extern char g_7954e4;  // 0x7954e4
extern char g_7954d0;  // 0x7954d0
extern char g_7954c4;  // 0x7954c4
extern char g_7954b8;  // 0x7954b8
extern char g_7954ac;  // 0x7954ac
extern char g_7954a0;  // 0x7954a0

__declspec(naked) void func_00667770(void)
{
    __asm {
        sub esp, 0x44
        push esi
        push edi
        mov edi, dword ptr [esp + 0x50]
        mov esi, dword ptr [edi]
        mov eax, dword ptr [esi]
        push 0x158
        mov ecx, esi
        call dword ptr [eax + 0x14]
        push edi
        call FUN_0062df30
        mov edx, dword ptr [esi]
        add esp, 4
        mov ecx, esi
        call dword ptr [edx + 4]
        mov edi, dword ptr [edi + 4]
        mov ecx, dword ptr [g_7db0a0]
        mov esi, eax
        mov eax, dword ptr [edi + 0x10]
        push eax
        mov dword ptr [esi], 0x158
        call FUN_004cfbd0
        lea eax, [esi + 0x148]
        push 0
        push eax
        push offset g_78d44c
        mov ecx, edi
        mov dword ptr [eax], 0
        call FUN_00411d60
        lea eax, [esi + 0x14c]
        push 0
        push eax
        push offset g_7954f0
        mov ecx, edi
        mov dword ptr [eax], 0x42700000
        call FUN_00411d60
        lea eax, [esi + 0x150]
        push 0
        push eax
        push offset g_7954e4
        mov ecx, edi
        mov dword ptr [eax], 0x42700000
        call FUN_00411d60
        lea eax, [esi + 0x154]
        push 0
        push eax
        push offset g_7954d0
        mov ecx, edi
        mov byte ptr [eax], 1
        call FUN_00411ec0
        lea eax, [esi + 0x140]
        push 0
        push eax
        push offset g_7954c4
        mov ecx, edi
        mov dword ptr [eax], 0
        call FUN_00411cb0
        lea eax, [esi + 0x134]
        push 0
        push eax
        push offset g_7954b8
        mov ecx, edi
        mov dword ptr [eax], 0
        call FUN_00411cb0
        lea eax, [esi + 0x13c]
        push 0
        push eax
        push offset g_7954ac
        mov ecx, edi
        mov dword ptr [eax], 0
        call FUN_00411cb0
        lea eax, [esi + 0x138]
        push 0
        push eax
        push offset g_7954a0
        mov ecx, edi
        mov dword ptr [eax], 0
        call FUN_00411cb0
        lea ecx, [esp + 8]
        call FUN_004d1f10
        lea ecx, [esi + 0x54]
        push ecx
        lea edx, [esp + 0xc]
        push edx
        call FUN_004da8d0
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [eax + 0x634]
        mov dword ptr [esi + 0x144], ecx
        mov ecx, dword ptr [g_7db0a0]
        add esp, 8
        call FUN_004cfc90
        lea ecx, [esp + 8]
        call FUN_004d21c0
        pop edi
        pop esi
        add esp, 0x44
        ret
    }
}
