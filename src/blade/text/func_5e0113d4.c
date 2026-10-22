/* auto-transcribed gap function 0x5E0113D4 (844 B); review against reference; stepping stone */
extern void __cdecl FUN_5e00ffd0(void);
extern void __cdecl FUN_5e00fff0(void);
extern void __cdecl FUN_5e011714(void);
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
__declspec(naked) void FUN_5e0113d4(void)
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
            mov eax, dword ptr [esp + 4]
            mov eax, dword ptr [eax + 0x18]
            test eax, eax
            je lbl_5e011401
            mov edx, dword ptr [esp + 0xc]
            mov ecx, dword ptr [eax]
            push edx
            mov edx, dword ptr [esp + 0xc]
            push edx
            push eax
            call dword ptr [ecx + 0x8c]
            ret 0xc
        lbl_5e011401:
            mov eax, 0x80004005
            ret 0xc
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            push esi
            push edi
            mov edi, dword ptr [esp + 0x10]
            xor esi, esi
            test edi, edi
            je lbl_5e011451
            mov al, byte ptr [edi + 0x20]
            lea esi, [edi - 8]
            test al, 1
            je lbl_5e01144e
            mov edi, dword ptr [esp + 0xc]
            mov eax, dword ptr [edi + 0x1c]
            test eax, eax
            je lbl_5e01143e
            mov ecx, dword ptr [eax]
            push eax
            call dword ptr [ecx + 8]
            mov dword ptr [edi + 0x1c], 0
        lbl_5e01143e:
            mov edx, dword ptr [esi]
            push esi
            mov dword ptr [edi + 0x1c], esi
            call dword ptr [edx + 4]
            pop edi
            xor eax, eax
            pop esi
            ret 8
        lbl_5e01144e:
            mov esi, dword ptr [esi + 0x18]
        lbl_5e011451:
            mov eax, dword ptr [esp + 0xc]
            mov eax, dword ptr [eax + 0x10]
            test eax, eax
            je lbl_5e01148d
            mov ecx, dword ptr [eax]
            push esi
            push eax
            call dword ptr [ecx + 0xc]
            mov esi, eax
            test esi, esi
            jl lbl_5e011486
            test edi, edi
            je lbl_5e01147e
            mov edx, dword ptr [edi - 8]
            lea eax, [edi - 8]
            push eax
            call dword ptr [edx + 4]
            mov eax, esi
            pop edi
            pop esi
            ret 8
        lbl_5e01147e:
            xor eax, eax
            push eax
            mov edx, dword ptr [eax]
            call dword ptr [edx + 4]
        lbl_5e011486:
            mov eax, esi
            pop edi
            pop esi
            ret 8
        lbl_5e01148d:
            pop edi
            mov eax, 0x80004005
            pop esi
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
            mov eax, dword ptr [esp + 0xc]
            xor ecx, ecx
            test eax, eax
            je lbl_5e0114ad
            mov ecx, dword ptr [eax + 0x10]
        lbl_5e0114ad:
            mov eax, dword ptr [esp + 4]
            mov eax, dword ptr [eax + 0x10]
            test eax, eax
            je lbl_5e0114d8
            push esi
            mov esi, dword ptr [esp + 0x1c]
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
        lbl_5e0114d8:
            mov eax, 0x80004005
            ret 0x18
            mov eax, dword ptr [esp + 0x10]
            xor ecx, ecx
            test eax, eax
            je lbl_5e0114ed
            mov ecx, dword ptr [eax + 0x10]
        lbl_5e0114ed:
            mov eax, dword ptr [esp + 4]
            mov eax, dword ptr [eax + 0x10]
            test eax, eax
            je lbl_5e011518
            push esi
            mov esi, dword ptr [esp + 0x1c]
            push esi
            mov esi, dword ptr [esp + 0x1c]
            mov edx, dword ptr [eax]
            push esi
            push ecx
            mov ecx, dword ptr [esp + 0x1c]
            push ecx
            mov ecx, dword ptr [esp + 0x1c]
            push ecx
            push eax
            call dword ptr [edx + 0x1c]
            pop esi
            ret 0x18
        lbl_5e011518:
            mov eax, 0x80004005
            ret 0x18
            mov edx, dword ptr [esp + 0xc]
            push esi
            mov esi, dword ptr [esp + 8]
            push edi
            xor edi, edi
            mov eax, dword ptr [esi + 0x1c]
            test eax, eax
            je lbl_5e011556
            test edx, edx
            je lbl_5e01153c
            lea ecx, [edx - 8]
            jmp lbl_5e01153e
        lbl_5e01153c:
            xor ecx, ecx
        lbl_5e01153e:
            cmp eax, ecx
            jne lbl_5e011556
            mov ecx, dword ptr [eax]
            push eax
            call dword ptr [ecx + 8]
            mov dword ptr [esi + 0x1c], 0
            pop edi
            xor eax, eax
            pop esi
            ret 0xc
        lbl_5e011556:
            test edx, edx
            je lbl_5e01155d
            mov edi, dword ptr [edx + 0x10]
        lbl_5e01155d:
            mov eax, dword ptr [esi + 0x10]
            test eax, eax
            je lbl_5e011575
            mov ecx, dword ptr [esp + 0x10]
            mov edx, dword ptr [eax]
            push edi
            push ecx
            push eax
            call dword ptr [edx + 0x20]
            pop edi
            pop esi
            ret 0xc
        lbl_5e011575:
            pop edi
            mov eax, 0x80004005
            pop esi
            ret 0xc
            nop
            mov byte ptr ds:[0], 0
            mov eax, 0x80004001
            ret 0xc
            mov byte ptr ds:[0], 0
            mov eax, 0x80004001
            ret 0x10
            mov eax, dword ptr [esp + 4]
            mov ecx, dword ptr [eax + 0x10]
            test ecx, ecx
            je lbl_5e0115da
            mov eax, dword ptr [esp + 8]
            test eax, eax
            je lbl_5e0115c7
            mov eax, dword ptr [eax + 0x10]
            mov edx, dword ptr [ecx]
            push esi
            mov esi, dword ptr [esp + 0x10]
            push esi
            push eax
            push ecx
            call dword ptr [edx + 0x2c]
            pop esi
            ret 0xc
        lbl_5e0115c7:
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
        lbl_5e0115da:
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
            push ebx
            push esi
            push edi
            test dword ptr [ecx], 0x20000
            je lbl_5e011634
            mov eax, dword ptr [esp + 0x10]
            xor ebx, ebx
            mov esi, dword ptr [eax + 0x1c]
            cmp esi, ebx
            je lbl_5e011623
            mov ecx, dword ptr [esi]
            push esi
            call dword ptr [ecx + 4]
            add esi, 8
            pop edi
            mov edx, dword ptr [esp + 0x14]
            xor eax, eax
            mov dword ptr [edx], esi
            pop esi
            pop ebx
            ret 0xc
        lbl_5e011623:
            mov eax, dword ptr [esp + 0x18]
            pop edi
            pop esi
            mov dword ptr [eax], ebx
            mov eax, 0x80004005
            pop ebx
            ret 0xc
        lbl_5e011634:
            mov esi, dword ptr [esp + 0x10]
            lea edi, [esp + 0x10]
            push edi
            push ecx
            mov eax, dword ptr [esi + 0x10]
            push eax
            mov edx, dword ptr [eax]
            call dword ptr [edx + 0x30]
            xor ebx, ebx
            cmp eax, ebx
            jl FUN_5e011714
            mov edi, dword ptr [esi + 0x14]
            mov eax, dword ptr [esp + 0x10]
            push eax
            mov ecx, edi
            call FUN_5e00ffd0
            mov esi, eax
            cmp esi, ebx
            je lbl_5e01167d
            mov ecx, dword ptr [esi]
            push esi
            call dword ptr [ecx + 4]
            add esi, 8
            pop edi
            mov edx, dword ptr [esp + 0x14]
            xor eax, eax
            mov dword ptr [edx], esi
            pop esi
            pop ebx
            ret 0xc
        lbl_5e01167d:
            push 0x2c
            call FUN_5e02b45e
            add esp, 4
            cmp eax, ebx
            je lbl_5e0116e5
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
            jmp lbl_5e0116e7
        lbl_5e0116e5:
            xor esi, esi
        lbl_5e0116e7:
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
            je lbl_5e01170c
            lea ebx, [esi + 8]
        lbl_5e01170c:
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
    }
}
