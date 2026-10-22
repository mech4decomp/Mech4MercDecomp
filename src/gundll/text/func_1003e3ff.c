// FUN_1003e3ff (0x1003E3FF) __cdecl
extern int g_10051f70;

__declspec(naked) int FUN_1003e3ff(void)
{
    __asm {
        mov eax, dword ptr [esp+0x4]
        mov edx, offset g_10051f70
        push esi
        mov ecx, edx
L_e40b:
        cmp eax, dword ptr [ecx+0x10]
        jbe L_e415
        cmp eax, dword ptr [ecx+0x14]
        jc L_e41d
L_e415:
        mov ecx, dword ptr [ecx]
        cmp ecx, edx
        jz L_e452
        jmp L_e40b
L_e41d:
        test al, 0xf
        jnz L_e452
        mov esi, eax
        mov edx, 0x100
        and esi, 0xfff
        cmp esi, edx
        jc L_e452
        mov esi, dword ptr [esp+0xc]
        mov dword ptr [esi], ecx
        mov esi, dword ptr [esp+0x10]
        mov ecx, eax
        and cx, 0xf000
        sub eax, ecx
        mov dword ptr [esi], ecx
        sub eax, edx
        pop esi
        sar eax, 0x4
        lea eax, [eax+ecx+0x8]
        ret
L_e452:
        xor eax, eax
        pop esi
        ret
    }
}
