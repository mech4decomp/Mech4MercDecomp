/* func_004ef780 - MLR/Adept state engine subsystem (__thiscall, RET 0xc) */
extern void __cdecl FUN_004ef940(void);
extern void __cdecl FUN_004f0ce0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_004bf380(void);

__declspec(naked) int func_004ef780(void)
{
    __asm {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp+0x10], edi
        call FUN_004ef940
        mov esi, dword ptr [esp+0x34]
        mov ebx, dword ptr [esp+0x30]
        push eax
        mov eax, dword ptr [esp+0x30]
        push esi
        push ebx
        push eax
        mov ecx, edi
        call FUN_004f0ce0
        mov cx, word ptr [esi+0x14]
        mov dx, word ptr [esi+0x16]
        mov eax, dword ptr [ebx]
        mov word ptr [esp+0x18], cx
        push 0x4
        lea ecx, [esp+0x20]
        push ecx
        mov ecx, ebx
        mov dword ptr [edi], 0x774c8c
        mov word ptr [esp+0x22], dx
        call dword ptr [eax+0x20]
        mov edx, dword ptr [esi]
        lea eax, [esp+0x18]
        push eax
        mov ecx, esi
        call dword ptr [edx+0x10]
        push edi
        lea ecx, [eax+0x24]
        mov dword ptr [esp+0x38], eax
        call FUN_004179b0
        mov edx, dword ptr [ebx]
        mov edi, dword ptr [edi+0x24]
        push 0x4
        lea eax, [esp+0x18]
        push eax
        mov ecx, ebx
        call dword ptr [edx+0x20]
        mov eax, dword ptr [esp+0x14]
        mov edx, dword ptr [edi]
        push eax
        mov ecx, edi
        call dword ptr [edx+0x44]
        mov eax, dword ptr [esp+0x14]
        xor ebp, ebp
        test eax, eax
        jbe L_858
L_80f:
        mov cx, word ptr [esi+0x14]
        mov dx, word ptr [esi+0x16]
        mov eax, dword ptr [ebx]
        mov word ptr [esp+0x20], cx
        push 0x4
        lea ecx, [esp+0x28]
        push ecx
        mov ecx, ebx
        mov word ptr [esp+0x2a], dx
        call dword ptr [eax+0x20]
        mov edx, dword ptr [esi]
        lea eax, [esp+0x20]
        push eax
        mov ecx, esi
        call dword ptr [edx+0x10]
        mov eax, dword ptr [eax+0x24]
        push eax
        push ebp
        mov ecx, edi
        call FUN_004bf380
        mov eax, dword ptr [esp+0x14]
        inc ebp
        mov ecx, ebp
        and ecx, 0xffff
        cmp ecx, eax
        jc L_80f
L_858:
        mov edx, dword ptr [edi+0x18]
        and edx, 0xffffff7f
        or edx, 0x48
        mov dword ptr [edi+0x18], edx
        mov eax, dword ptr [edi]
        mov ecx, edi
        call dword ptr [eax+0x10]
        mov edx, dword ptr [edi]
        mov ecx, edi
        call dword ptr [edx+0x14]
        mov ecx, dword ptr [esp+0x34]
        mov eax, dword ptr [ecx]
        call dword ptr [eax+0x14]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [esp+0x14]
        cmp eax, ecx
        jbe L_88a
        mov eax, ecx
L_88a:
        cmp word ptr [edi+0x150], ax
        jz L_909
        mov ecx, eax
        mov word ptr [edi+0x150], ax
        mov edx, dword ptr [edi+0x148]
        and ecx, 0xffff
        cmp ecx, edx
        jnc L_8c6
        mov edx, dword ptr [edi+0x144]
        mov ecx, dword ptr [edx+ecx*4]
        call dword ptr [ecx+0x1c]
        mov eax, dword ptr [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xc
L_8c6:
        test al, 0xf0
        jz L_909
        and ecx, 0xf
        cmp ecx, edx
        jnc L_8e1
        mov eax, dword ptr [edi+0x144]
        mov ecx, dword ptr [eax+ecx*4]
        test ecx, ecx
        jz L_8e1
        call dword ptr [ecx+0x1c]
L_8e1:
        mov ecx, dword ptr [edi+0x148]
        xor eax, eax
        mov al, byte ptr [edi+0x150]
        shr eax, 0x4
        and eax, 0xf
        cmp eax, ecx
        jnc L_909
        mov ecx, dword ptr [edi+0x144]
        mov ecx, dword ptr [ecx+eax*4]
        test ecx, ecx
        jz L_909
        call dword ptr [ecx+0x1c]
L_909:
        mov eax, dword ptr [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xc
    }
}
