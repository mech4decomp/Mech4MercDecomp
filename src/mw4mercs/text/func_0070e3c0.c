/* func_0070e3c0 - FUN_0070e3c0 - 160 bytes: MD5 update */

extern void __cdecl FUN_0070ee40(void);
extern void __cdecl FUN_0070e4d0(void);

__declspec(naked) void func_0070e3c0(void)
{
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esi + 0x10]
        mov eax, ecx
        push edi
        mov edi, dword ptr [esp + 0x1c]
        shr eax, 0x3
        lea ecx, [ecx + edi*8]
        lea edx, [edi*8 + 0x0]
        and eax, 0x3f
        cmp ecx, edx
        mov dword ptr [esi + 0x10], ecx
        jnc L_e3eb
        inc dword ptr [esi + 0x14]
    L_e3eb:
        mov ebx, dword ptr [esi + 0x14]
        mov ecx, edi
        shr ecx, 0x1d
        add ebx, ecx
        mov dword ptr [esi + 0x14], ebx
        mov ebx, 0x40
        sub ebx, eax
        cmp edi, ebx
        jc L_e443
        mov edx, dword ptr [esp + 0x18]
        push ebx
        push edx
        lea eax, [eax + esi*1 + 0x18]
        push eax
        call FUN_0070ee40
        lea ecx, [esi + 0x18]
        push ecx
        push esi
        call FUN_0070e4d0
        mov ebp, ebx
        add ebx, 0x3f
        cmp ebx, edi
        jnc L_e43f
    L_e426:
        mov edx, dword ptr [esp + 0x18]
        lea eax, [edx + ebx*1 - 0x3f]
        push eax
        push esi
        call FUN_0070e4d0
        add ebx, 0x40
        add ebp, 0x40
        cmp ebx, edi
        jc L_e426
    L_e43f:
        xor eax, eax
        jmp L_e445
    L_e443:
        xor ebp, ebp
    L_e445:
        mov ecx, dword ptr [esp + 0x18]
        sub edi, ebp
        push edi
        add ebp, ecx
        push ebp
        lea edx, [eax + esi*1 + 0x18]
        push edx
        call FUN_0070ee40
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xc
    }
}
