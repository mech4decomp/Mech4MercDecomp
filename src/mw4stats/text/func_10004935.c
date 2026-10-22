/* auto-transcribed gap function 0x10004935 (363 B); review against reference; stepping stone */
extern void __cdecl FUN_100047d0(void);
extern void __cdecl FUN_10004aa0(void);
extern void __cdecl FUN_10004c40(void);
__declspec(naked) void FUN_10004935(void)
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
            push esi
            push edi
            mov edi, dword ptr [esp + 0xc]
            mov esi, ecx
            push edi
            call FUN_10004c40
            lea eax, [esi + 8]
            push eax
            push 0x10024644
            push edi
            call FUN_10004aa0
            lea ecx, [esi + 0xa0]
            push ecx
            push 0x1002465c
            push edi
            call FUN_10004aa0
            lea edx, [esi + 0x138]
            push edx
            push 0x1002467c
            push edi
            call FUN_10004aa0
            lea eax, [esi + 0x1d0]
            push eax
            push 0x10024698
            push edi
            call FUN_10004aa0
            lea ecx, [esi + 0x268]
            push ecx
            push 0x100246c0
            push edi
            call FUN_10004aa0
            lea edx, [esi + 0x300]
            push edx
            push 0x100246dc
            push edi
            call FUN_10004aa0
            mov eax, dword ptr [esi + 0x398]
            add esp, 0x48
            push eax
            push 0x100246f4
            push edi
            call FUN_100047d0
            lea ecx, [esi + 0x39c]
            push ecx
            push 0x1002471c
            push edi
            call FUN_10004aa0
            lea edx, [esi + 0x434]
            push edx
            push 0x10024738
            push edi
            call FUN_10004aa0
            lea eax, [esi + 0x4cc]
            push eax
            push 0x10024758
            push edi
            call FUN_10004aa0
            lea ecx, [esi + 0x564]
            push ecx
            push 0x1002477c
            push edi
            call FUN_10004aa0
            lea edx, [esi + 0x5fc]
            push edx
            push 0x10024798
            push edi
            call FUN_10004aa0
            add esp, 0x48
            lea eax, [esi + 0x694]
            push eax
            push 0x100247b4
            push edi
            call FUN_10004aa0
            lea ecx, [esi + 0x72c]
            push ecx
            push 0x100247e8
            push edi
            call FUN_10004aa0
            lea edx, [esi + 0x7c4]
            push edx
            push 0x1002480c
            push edi
            call FUN_10004aa0
            lea eax, [esi + 0x85c]
            push eax
            push 0x10024828
            push edi
            call FUN_10004aa0
            lea ecx, [esi + 0x8f4]
            push ecx
            push 0x1002484c
            push edi
            call FUN_10004aa0
            add esi, 0x98c
            push esi
            push 0x10024864
            push edi
            call FUN_10004aa0
            add esp, 0x48
            mov eax, edi
            pop edi
            pop esi
            ret 4
            nop
    }
}
