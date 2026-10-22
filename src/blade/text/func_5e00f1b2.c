/* auto-transcribed gap function 0x5E00F1B2 (462 B); review against reference; stepping stone */
extern void __cdecl FUN_5e00f2d5(void);
extern void __cdecl FUN_5e011bf0(void);
extern void __cdecl FUN_5e02b453(void);
extern void __cdecl FUN_5e02b45e(void);
extern int g_5e035520;
extern int g_5e035b20;
extern int g_5e035b38;
extern int g_5e035bfc;
extern int g_5e035cb0;
extern int g_5e035d4c;
extern int g_5e035ddc;
extern int g_5e035df4;
extern int g_5e035eb8;
extern int g_5e035f6c;
__declspec(naked) void FUN_5e00f1b2(void)
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
            push ebx
            push ebp
            mov ebp, dword ptr [esp + 0xc]
            xor ebx, ebx
            push esi
            push edi
            mov eax, dword ptr [ebp + 0x24]
            cmp eax, ebx
            je lbl_5e00f21c
            mov edx, dword ptr [esp + 0x20]
            mov dword ptr [esp + 0x14], ebx
            mov ecx, dword ptr [eax]
            push edx
            lea edx, [esp + 0x18]
            push edx
            mov edx, dword ptr [esp + 0x20]
            push edx
            push eax
            call dword ptr [ecx + 0x18]
            mov esi, eax
            cmp esi, ebx
            jl lbl_5e00f205
            mov eax, dword ptr [esp + 0x14]
            mov edx, dword ptr [esp + 0x1c]
            push edx
            push offset g_5e035520
            mov ecx, dword ptr [eax]
            push eax
            call dword ptr [ecx]
            mov esi, eax
        lbl_5e00f205:
            mov eax, dword ptr [esp + 0x14]
            cmp eax, ebx
            je lbl_5e00f213
            mov ecx, dword ptr [eax]
            push eax
            call dword ptr [ecx + 8]
        lbl_5e00f213:
            mov eax, esi
            pop edi
            pop esi
            pop ebp
            pop ebx
            ret 0x10
        lbl_5e00f21c:
            mov edx, dword ptr [esp + 0x1c]
            push 0x2c
            mov dword ptr [edx], ebx
            call FUN_5e02b45e
            mov esi, eax
            add esp, 4
            cmp esi, ebx
            je FUN_5e00f2d5
            mov al, byte ptr [esi + 0x28]
            lea edi, [esi + 8]
            and al, 0xfe
            mov dword ptr [esi + 4], offset g_5e035f6c
            mov byte ptr [esi + 0x28], al
            mov eax, dword ptr [esp + 0x18]
            mov dword ptr [edi], offset g_5e035eb8
            add ebp, -4
            mov dword ptr [esi + 0xc], offset g_5e035df4
            push eax
            mov dword ptr [esi + 0x10], offset g_5e035ddc
            push ebp
            mov ecx, esi
            mov dword ptr [esi + 0x14], ebx
            mov dword ptr [esi + 0x18], ebx
            mov dword ptr [esi + 0x1c], ebx
            mov dword ptr [esi + 0x20], ebx
            mov dword ptr [esi + 0x24], ebx
            mov dword ptr [esi], offset g_5e035d4c
            mov dword ptr [esi + 4], offset g_5e035cb0
            mov dword ptr [edi], offset g_5e035bfc
            mov dword ptr [esi + 0xc], offset g_5e035b38
            mov dword ptr [esi + 0x10], offset g_5e035b20
            call FUN_5e011bf0
            mov ebp, eax
            cmp ebp, ebx
            jge lbl_5e00f2e1
            push esi
            mov dword ptr [esi], offset g_5e035d4c
            mov dword ptr [esi + 4], offset g_5e035cb0
            mov dword ptr [edi], offset g_5e035bfc
            mov dword ptr [esi + 0xc], offset g_5e035b38
            mov dword ptr [esi + 0x10], offset g_5e035b20
            call FUN_5e02b453
            add esp, 4
            mov eax, ebp
            pop edi
            pop esi
            pop ebp
            pop ebx
            ret 0x10
            pop edi
            pop esi
            pop ebp
            mov eax, 0x8007000e
            pop ebx
            ret 0x10
        lbl_5e00f2e1:
            mov ecx, dword ptr [esp + 0x1c]
            mov edx, dword ptr [esi]
            push esi
            mov dword ptr [ecx], edi
            call dword ptr [edx + 4]
            pop edi
            pop esi
            pop ebp
            xor eax, eax
            pop ebx
            ret 0x10
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
            mov eax, dword ptr [esp + 4]
            mov edx, dword ptr [esp + 0xc]
            push edx
            mov edx, dword ptr [esp + 0xc]
            mov eax, dword ptr [eax + 0x20]
            push edx
            push eax
            mov ecx, dword ptr [eax]
            call dword ptr [ecx + 0x1c]
            ret 0xc
            nop
            nop
            nop
            nop
            nop
            nop
            mov edx, dword ptr [esp + 0x14]
            mov eax, dword ptr [esp + 4]
            push edx
            mov edx, dword ptr [esp + 0x14]
            mov eax, dword ptr [eax + 0x20]
            push edx
            mov edx, dword ptr [esp + 0x14]
            mov ecx, dword ptr [eax]
            push edx
            mov edx, dword ptr [esp + 0x14]
            push edx
            push eax
            call dword ptr [ecx + 0x20]
            ret 0x14
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
            mov edx, dword ptr [esp + 0x14]
            mov eax, dword ptr [esp + 4]
            push edx
            mov edx, dword ptr [esp + 0x14]
            mov eax, dword ptr [eax + 0x20]
            push edx
            mov edx, dword ptr [esp + 0x14]
            mov ecx, dword ptr [eax]
            push edx
            mov edx, dword ptr [esp + 0x14]
            push edx
            push eax
            call dword ptr [ecx + 0x24]
            ret 0x14
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
