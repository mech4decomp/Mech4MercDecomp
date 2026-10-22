/* auto-transcribed gap function 0x5E011F3D (659 B); review against reference; stepping stone */
extern void __cdecl FUN_5e00ffd0(void);
extern void __cdecl FUN_5e00fff0(void);
extern void __cdecl FUN_5e012164(void);
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
__declspec(naked) void FUN_5e011f3d(void)
{
    __asm {
            nop
            nop
            nop
            mov eax, dword ptr [esp + 4]
            mov eax, dword ptr [eax + 0xc]
            test eax, eax
            je lbl_5e011f95
            mov ecx, dword ptr [esp + 0xc]
            test ecx, ecx
            je lbl_5e011f76
            push esi
            mov esi, dword ptr [esp + 0x1c]
            mov ecx, dword ptr [ecx + 0xc]
            push esi
            mov esi, dword ptr [esp + 0x1c]
            mov edx, dword ptr [eax]
            push esi
            mov esi, dword ptr [esp + 0x1c]
            push esi
            push ecx
            mov ecx, dword ptr [esp + 0x1c]
            push ecx
            push eax
            call dword ptr [edx + 0x14]
            pop esi
            ret 0x18
        lbl_5e011f76:
            mov ecx, dword ptr [esp + 0x18]
            mov edx, dword ptr [eax]
            push ecx
            mov ecx, dword ptr [esp + 0x18]
            push ecx
            mov ecx, dword ptr [esp + 0x18]
            push ecx
            mov ecx, dword ptr [esp + 0x14]
            push 0
            push ecx
            push eax
            call dword ptr [edx + 0x14]
            ret 0x18
        lbl_5e011f95:
            mov eax, 0x80004005
            ret 0x18
            nop
            nop
            nop
            mov eax, 0x80004001
            ret 0x18
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov edx, dword ptr [esp + 0xc]
            push esi
            mov esi, dword ptr [esp + 8]
            push edi
            xor edi, edi
            mov eax, dword ptr [esi + 0x18]
            test eax, eax
            je lbl_5e011fe6
            test edx, edx
            je lbl_5e011fcc
            lea ecx, [edx - 0xc]
            jmp lbl_5e011fce
        lbl_5e011fcc:
            xor ecx, ecx
        lbl_5e011fce:
            cmp eax, ecx
            jne lbl_5e011fe6
            mov ecx, dword ptr [eax]
            push eax
            call dword ptr [ecx + 8]
            mov dword ptr [esi + 0x18], 0
            pop edi
            xor eax, eax
            pop esi
            ret 0xc
        lbl_5e011fe6:
            test edx, edx
            je lbl_5e011fed
            mov edi, dword ptr [edx + 0xc]
        lbl_5e011fed:
            mov eax, dword ptr [esi + 0xc]
            test eax, eax
            je lbl_5e012005
            mov ecx, dword ptr [esp + 0x10]
            mov edx, dword ptr [eax]
            push edi
            push ecx
            push eax
            call dword ptr [edx + 0x20]
            pop edi
            pop esi
            ret 0xc
        lbl_5e012005:
            pop edi
            mov eax, 0x80004005
            pop esi
            ret 0xc
            nop
            mov eax, 0x80004001
            ret 0xc
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, 0x80004001
            ret 0x10
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, 0x80004001
            ret 0xc
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov ecx, dword ptr [esp + 8]
            push ebx
            push esi
            push edi
            test dword ptr [ecx], 0x20000
            je lbl_5e012084
            mov eax, dword ptr [esp + 0x10]
            xor ebx, ebx
            mov esi, dword ptr [eax + 0x18]
            cmp esi, ebx
            je lbl_5e012073
            mov ecx, dword ptr [esi]
            push esi
            call dword ptr [ecx + 4]
            add esi, 0xc
            pop edi
            mov edx, dword ptr [esp + 0x14]
            xor eax, eax
            mov dword ptr [edx], esi
            pop esi
            pop ebx
            ret 0xc
        lbl_5e012073:
            mov eax, dword ptr [esp + 0x18]
            pop edi
            pop esi
            mov dword ptr [eax], ebx
            mov eax, 0x80004005
            pop ebx
            ret 0xc
        lbl_5e012084:
            mov esi, dword ptr [esp + 0x10]
            lea edi, [esp + 0x10]
            push edi
            push ecx
            mov eax, dword ptr [esi + 0xc]
            push eax
            mov edx, dword ptr [eax]
            call dword ptr [edx + 0x30]
            xor ebx, ebx
            cmp eax, ebx
            jl FUN_5e012164
            mov edi, dword ptr [esi + 0x10]
            mov eax, dword ptr [esp + 0x10]
            push eax
            mov ecx, edi
            call FUN_5e00ffd0
            mov esi, eax
            cmp esi, ebx
            je lbl_5e0120cd
            mov ecx, dword ptr [esi]
            push esi
            call dword ptr [ecx + 4]
            add esi, 0xc
            pop edi
            mov edx, dword ptr [esp + 0x14]
            xor eax, eax
            mov dword ptr [edx], esi
            pop esi
            pop ebx
            ret 0xc
        lbl_5e0120cd:
            push 0x2c
            call FUN_5e02b45e
            add esp, 4
            cmp eax, ebx
            je lbl_5e012135
            mov cl, byte ptr [eax + 0x28]
            mov dword ptr [eax + 4], offset g_5e035f6c
            mov dword ptr [eax + 8], offset g_5e035eb8
            mov dword ptr [eax + 0xc], offset g_5e035df4
            and cl, 0xfe
            mov dword ptr [eax + 0x10], offset g_5e035ddc
            mov dword ptr [eax + 0x14], ebx
            mov dword ptr [eax + 0x18], ebx
            mov dword ptr [eax + 0x1c], ebx
            mov dword ptr [eax + 0x20], ebx
            mov dword ptr [eax + 0x24], ebx
            mov byte ptr [eax + 0x28], cl
            mov dword ptr [eax], offset g_5e035d4c
            mov dword ptr [eax + 4], offset g_5e035cb0
            mov dword ptr [eax + 8], offset g_5e035bfc
            mov dword ptr [eax + 0xc], offset g_5e035b38
            mov dword ptr [eax + 0x10], offset g_5e035b20
            mov esi, eax
            jmp lbl_5e012137
        lbl_5e012135:
            xor esi, esi
        lbl_5e012137:
            mov dword ptr [esi + 0x1c], edi
            mov eax, dword ptr [esp + 0x10]
            push esi
            mov ecx, edi
            mov dword ptr [esi + 0x18], eax
            call FUN_5e00fff0
            mov ecx, dword ptr [esi]
            push esi
            call dword ptr [ecx + 4]
            mov edx, dword ptr [esi]
            push esi
            call dword ptr [edx + 4]
            cmp esi, ebx
            je lbl_5e01215c
            lea ebx, [esi + 0xc]
        lbl_5e01215c:
            mov eax, dword ptr [esp + 0x18]
            mov dword ptr [eax], ebx
            xor eax, eax
            pop edi
            pop esi
            pop ebx
            ret 0xc
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, 0x80004001
            ret 0x18
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, 0x80004001
            ret 0xc
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, 0x80004001
            ret 8
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, 0x80004001
            ret 8
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, 0x80004001
            ret 8
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, 0x80004001
            ret 8
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
