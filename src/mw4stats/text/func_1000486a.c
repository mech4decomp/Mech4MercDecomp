/* auto-transcribed gap function 0x1000486A (118 B); review against reference; stepping stone */
extern void __cdecl FUN_100048e0(void);
extern void __cdecl FUN_10004900(void);
__declspec(naked) void FUN_1000486a(void)
{
    __asm {
            nop
            nop
            nop
            nop
            nop
            nop
            push esi
            push edi
            mov edi, dword ptr [esp + 0xc]
            mov esi, ecx
            lea eax, [esi + 4]
            push eax
            push 0x100245b8
            push edi
            call FUN_100048e0
            lea ecx, [esi + 8]
            push ecx
            push 0x100245cc
            push edi
            call FUN_100048e0
            lea edx, [esi + 0xc]
            push edx
            push 0x100245e0
            push edi
            call FUN_10004900
            lea eax, [esi + 0x10]
            push eax
            push 0x10024608
            push edi
            call FUN_100048e0
            lea ecx, [esi + 0x14]
            push ecx
            push 0x1002461c
            push edi
            call FUN_100048e0
            add esi, 0x18
            push esi
            push 0x10024634
            push edi
            call FUN_100048e0
            add esp, 0x48
            pop edi
            mov al, 1
            pop esi
            ret 4
            nop
            nop
            nop
            nop
    }
}
