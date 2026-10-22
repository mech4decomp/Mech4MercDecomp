/* auto-transcribed gap function 0x5E010E7B (373 B); review against reference; stepping stone */
extern void __cdecl FUN_5e00ffd0(void);
extern void __cdecl FUN_5e00fff0(void);
extern void __cdecl FUN_5e010fe2(void);
extern void __cdecl FUN_5e02b45e(void);
extern int g_5e035b20;
extern int g_5e035b38;
extern int g_5e035bfc;
extern int g_5e035cb0;
extern int g_5e035d4c;
extern int g_5e035ddc;
extern int g_5e035df4;
extern int g_5e035eb8;
extern int g_5e035f6c;
__declspec(naked) void FUN_5e010e7b(void)
{
    __asm {
            nop
            nop
            nop
            nop
            nop
            mov eax, dword ptr [esp + 4]
            mov ecx, dword ptr [eax + 0x18]
            test ecx, ecx
            je lbl_5e010eba
            mov eax, dword ptr [esp + 8]
            test eax, eax
            je lbl_5e010ea7
            mov eax, dword ptr [eax + 0x18]
            mov edx, dword ptr [ecx]
            push esi
            mov esi, dword ptr [esp + 0x10]
            push esi
            push eax
            push ecx
            call dword ptr [edx + 0x2c]
            pop esi
            ret 0xc
        lbl_5e010ea7:
            mov edx, dword ptr [ecx]
            push esi
            mov esi, dword ptr [esp + 0x10]
            xor eax, eax
            push esi
            push eax
            push ecx
            call dword ptr [edx + 0x2c]
            pop esi
            ret 0xc
        lbl_5e010eba:
            mov eax, 0x80004005
            ret 0xc
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
            mov ecx, dword ptr [esp + 8]
            push esi
            push edi
            test dword ptr [ecx], 0x20000
            je lbl_5e010f0e
            mov eax, dword ptr [esp + 0xc]
            xor esi, esi
            mov edi, dword ptr [eax + 0x24]
            cmp edi, esi
            je lbl_5e010efe
            mov ecx, dword ptr [edi]
            push edi
            call dword ptr [ecx + 4]
            xor eax, eax
            mov edx, dword ptr [esp + 0x14]
            mov dword ptr [edx], edi
            pop edi
            pop esi
            ret 0xc
        lbl_5e010efe:
            mov eax, dword ptr [esp + 0x14]
            pop edi
            mov dword ptr [eax], esi
            mov eax, 0x80004005
            pop esi
            ret 0xc
        lbl_5e010f0e:
            mov edi, dword ptr [esp + 0xc]
            lea esi, [esp + 0xc]
            push esi
            push ecx
            mov eax, dword ptr [edi + 0x18]
            push eax
            mov edx, dword ptr [eax]
            call dword ptr [edx + 0x30]
            xor esi, esi
            cmp eax, esi
            jl FUN_5e010fe2
            mov eax, dword ptr [esp + 0xc]
            push ebx
            mov ebx, dword ptr [edi + 0x1c]
            push eax
            mov ecx, ebx
            call FUN_5e00ffd0
            mov edi, eax
            cmp edi, esi
            je lbl_5e010f55
            mov ecx, dword ptr [edi]
            push edi
            call dword ptr [ecx + 4]
            pop ebx
            xor eax, eax
            mov edx, dword ptr [esp + 0x14]
            mov dword ptr [edx], edi
            pop edi
            pop esi
            ret 0xc
        lbl_5e010f55:
            push 0x2c
            call FUN_5e02b45e
            add esp, 4
            cmp eax, esi
            je lbl_5e010fbb
            mov cl, byte ptr [eax + 0x28]
            mov dword ptr [eax + 4], offset g_5e035f6c
            mov dword ptr [eax + 8], offset g_5e035eb8
            mov dword ptr [eax + 0xc], offset g_5e035df4
            and cl, 0xfe
            mov dword ptr [eax + 0x10], offset g_5e035ddc
            mov dword ptr [eax + 0x14], esi
            mov dword ptr [eax + 0x18], esi
            mov dword ptr [eax + 0x1c], esi
            mov dword ptr [eax + 0x20], esi
            mov dword ptr [eax + 0x24], esi
            mov byte ptr [eax + 0x28], cl
            mov dword ptr [eax], offset g_5e035d4c
            mov dword ptr [eax + 4], offset g_5e035cb0
            mov dword ptr [eax + 8], offset g_5e035bfc
            mov dword ptr [eax + 0xc], offset g_5e035b38
            mov dword ptr [eax + 0x10], offset g_5e035b20
            mov esi, eax
        lbl_5e010fbb:
            mov dword ptr [esi + 0x1c], ebx
            mov eax, dword ptr [esp + 0x10]
            push esi
            mov ecx, ebx
            mov dword ptr [esi + 0x18], eax
            call FUN_5e00fff0
            mov ecx, dword ptr [esi]
            push esi
            call dword ptr [ecx + 4]
            mov edx, dword ptr [esi]
            push esi
            call dword ptr [edx + 4]
            pop ebx
            mov eax, dword ptr [esp + 0x14]
            mov dword ptr [eax], esi
            xor eax, eax
            pop edi
            pop esi
            ret 0xc
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
