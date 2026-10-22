/* auto-transcribed gap function 0x10005871 (79 B); review against reference; stepping stone */
extern void __cdecl FUN_10001660(void);
extern void __cdecl FUN_10005e00(void);
extern void __cdecl FUN_10005e80(void);
__declspec(naked) void FUN_10005871(void)
{
    __asm {
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            push esi
            push edi
            mov edi, dword ptr [esp + 0xc]
            mov eax, dword ptr [edi + 4]
            mov esi, ecx
            push eax
            lea ecx, [esi - 0x98]
            call FUN_10001660
            mov ecx, dword ptr [edi + 0xc]
            push ecx
            lea ecx, [esi + 0x14]
            call FUN_10005e80
            mov edx, dword ptr [edi + 8]
            push edx
            lea ecx, [esi + 0xc]
            call FUN_10005e00
            mov ecx, dword ptr [edi + 0x10]
            xor eax, eax
            test ecx, ecx
            pop edi
            setne al
            pop esi
            ret 4
            nop
            nop
    }
}
