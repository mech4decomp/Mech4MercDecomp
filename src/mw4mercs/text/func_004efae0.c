/* func_004efae0 - MLR/Adept state engine subsystem (__thiscall, RET 0xc) */
extern void __cdecl FUN_004efc10(void);
extern void __cdecl FUN_004f0ce0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004bc780(void);
extern int g_007daac0;

__declspec(naked) int func_004efae0(void)
{
    __asm {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr [esp+0x14], ebx
        call FUN_004efc10
        mov edi, dword ptr [esp+0x34]
        mov esi, dword ptr [esp+0x30]
        push eax
        mov eax, dword ptr [esp+0x30]
        push edi
        push esi
        push eax
        mov ecx, ebx
        call FUN_004f0ce0
        mov edx, dword ptr [esi]
        mov ebp, dword ptr [ebx+0x24]
        push 0x4
        lea eax, [esp+0x14]
        push eax
        mov ecx, esi
        mov dword ptr [ebx], 0x774cb4
        call dword ptr [edx+0x20]
        mov ecx, dword ptr [g_007daac0]
        push ecx
        call FUN_006f4950
        mov eax, dword ptr [esp+0x10]
        mov edx, dword ptr [ebp]
        push eax
        mov ecx, ebp
        call dword ptr [edx+0x44]
        call FUN_006f49a0
        mov eax, dword ptr [esp+0x10]
        xor ebx, ebx
        test eax, eax
        jbe L_bba
L_b48:
        mov cx, word ptr [edi+0x14]
        mov dx, word ptr [edi+0x16]
        mov eax, dword ptr [esi]
        mov word ptr [esp+0x18], cx
        push 0x4
        lea ecx, [esp+0x20]
        push ecx
        mov ecx, esi
        mov word ptr [esp+0x22], dx
        call dword ptr [eax+0x20]
        mov edx, dword ptr [edi]
        lea eax, [esp+0x18]
        push eax
        mov ecx, edi
        call dword ptr [edx+0x10]
        mov edx, dword ptr [esi]
        mov dword ptr [esp+0x34], eax
        push 0x4
        lea eax, [esp+0x24]
        push eax
        mov ecx, esi
        call dword ptr [edx+0x20]
        mov edx, dword ptr [eax]
        push 0x4
        lea ecx, [esp+0x28]
        push ecx
        mov ecx, eax
        call dword ptr [edx+0x20]
        mov eax, dword ptr [esp+0x34]
        mov ecx, dword ptr [eax+0x24]
        lea edx, [esp+0x20]
        push edx
        push ecx
        push ebx
        mov ecx, ebp
        call FUN_004bc780
        mov eax, dword ptr [esp+0x10]
        inc ebx
        mov edx, ebx
        and edx, 0xffff
        cmp edx, eax
        jc L_b48
L_bba:
        mov eax, dword ptr [ebp+0x18]
        and eax, 0xffffff7f
        or eax, 0x48
        mov dword ptr [ebp+0x18], eax
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx+0x10]
        mov eax, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [eax+0x14]
        mov eax, dword ptr [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xc
    }
}
