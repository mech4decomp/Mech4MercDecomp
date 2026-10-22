/* auto-transcribed gap function 0x10008EF0 (256 B); review against reference; stepping stone */
extern void __cdecl FUN_100073d0(void);
__declspec(naked) void FUN_10008ef0(void)
{
    __asm {
            lea eax, [ecx + 0x10]
            ret
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
            lea eax, [ecx + 0x24]
            ret
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
            mov edx, dword ptr [esp + 4]
            push esi
            mov esi, dword ptr [ecx - 8]
            xor eax, eax
            cmp edx, esi
            pop esi
            sete al
            ret 4
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
            mov eax, dword ptr [ecx + 0x30]
            ret
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
            add ecx, 0x24
            jmp FUN_100073d0
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov edx, dword ptr [esp + 8]
            mov eax, dword ptr [ecx + 0x24]
            add ecx, 0x24
            push edx
            mov edx, dword ptr [esp + 8]
            push edx
            call dword ptr [eax + 0xc]
            ret 8
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
            mov edx, dword ptr [esp + 0x10]
            mov eax, dword ptr [ecx + 0x24]
            push edx
            mov edx, dword ptr [esp + 0x10]
            push edx
            mov edx, dword ptr [esp + 0x10]
            add ecx, 0x24
            push edx
            mov edx, dword ptr [esp + 0x10]
            push edx
            call dword ptr [eax + 8]
            ret 0x10
            mov edx, dword ptr [esp + 4]
            mov eax, dword ptr [ecx + 0x24]
            add ecx, 0x24
            push edx
            call dword ptr [eax + 0x10]
            ret 4
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
            mov edx, dword ptr [esp + 4]
            mov eax, dword ptr [ecx + 0x24]
            add ecx, 0x24
            push edx
            call dword ptr [eax + 0x14]
            ret 4
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
            mov edx, dword ptr [esp + 4]
            mov eax, dword ptr [ecx + 0x24]
            add ecx, 0x24
            push edx
            call dword ptr [eax + 0x18]
            ret 4
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
    }
}
