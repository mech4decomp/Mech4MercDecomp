/* auto-transcribed gap function 0x5E00FC88 (552 B); review against reference; stepping stone */
extern void __cdecl FUN_5e002430(void);
extern void __cdecl FUN_5e00fe8d(void);
extern void __cdecl FUN_5e02b45e(void);
extern int g_5e0355d0;
extern int g_5e035650;
extern int g_5e035730;
extern int g_5e035740;
extern int g_5e035a48;
extern int g_5e77a508;
__declspec(naked) void FUN_5e00fc88(void)
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
            push 0x58
            call FUN_5e02b45e
            add esp, 4
            test eax, eax
            je lbl_5e00fcbc
            mov ecx, dword ptr [esp + 8]
            mov dword ptr [eax], offset g_5e035740
            mov edx, dword ptr [eax]
            push eax
            mov dword ptr [eax + 0x54], 0
            mov dword ptr [ecx], eax
            call dword ptr [edx + 4]
            xor eax, eax
            ret 0xc
        lbl_5e00fcbc:
            mov ecx, dword ptr [esp + 8]
            xor eax, eax
            push eax
            mov edx, dword ptr [eax]
            mov dword ptr [ecx], eax
            call dword ptr [edx + 4]
            xor eax, eax
            ret 0xc
            nop
            push esi
            push 0x3c
            call FUN_5e02b45e
            xor esi, esi
            add esp, 4
            cmp eax, esi
            je lbl_5e00fcf2
            mov dword ptr [eax + 4], esi
            mov dword ptr [eax + 0x34], esi
            mov dword ptr [eax + 0x38], esi
            mov dword ptr [eax], offset g_5e035a48
            mov esi, eax
        lbl_5e00fcf2:
            mov eax, dword ptr [esi]
            push esi
            call dword ptr [eax + 4]
            xor eax, eax
            mov ecx, dword ptr [esp + 0xc]
            mov dword ptr [ecx], esi
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
            nop
            nop
            nop
            mov eax, 0x80004005
            ret 0x14
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov edx, dword ptr [esp + 8]
            push ebx
            push ebp
            mov ebp, dword ptr [esp + 0xc]
            push esi
            push edi
            xor ebx, ebx
            mov ecx, 4
            mov edi, edx
            mov esi, offset g_5e035730
            xor eax, eax
            mov byte ptr [ebp + 8], bl
            repe cmpsd
            __emit 0x74 /* je 0x5e00fd85: MSVC6 cannot encode natively */
            __emit 0x42 /* je 0x5e00fd85: MSVC6 cannot encode natively */
            cmp dword ptr [ebp + 0x14], ebx
            jne lbl_5e00fd5a
            mov ecx, 4
            mov edi, edx
            mov esi, offset g_5e0355d0
            xor eax, eax
            repe cmpsd
            __emit 0x74 /* je 0x5e00fd85: MSVC6 cannot encode natively */
            __emit 0x2b /* je 0x5e00fd85: MSVC6 cannot encode natively */
        lbl_5e00fd5a:
            mov eax, dword ptr [ebp + 0x18]
            cmp eax, ebx
            je lbl_5e00fd79
            mov esi, dword ptr [esp + 0x20]
            mov ecx, dword ptr [eax]
            push esi
            mov esi, dword ptr [esp + 0x20]
            push esi
            push edx
            push eax
            call dword ptr [ecx + 0x10]
            pop edi
            pop esi
            pop ebp
            pop ebx
            ret 0x10
        lbl_5e00fd79:
            pop edi
            pop esi
            pop ebp
            mov eax, 0x80004005
            pop ebx
            ret 0x10
            mov edi, dword ptr [esp + 0x20]
            mov eax, dword ptr [ebp + 0x18]
            cmp eax, ebx
            mov dword ptr [esp + 0x14], ebx
            mov dword ptr [edi], ebx
            je lbl_5e00fdb3
            mov edx, dword ptr [eax]
            lea ecx, [esp + 0x14]
            push ecx
            mov ecx, dword ptr [esp + 0x20]
            push ecx
            push offset g_5e0355d0
            push eax
            call dword ptr [edx + 0x10]
            cmp eax, ebx
            jl FUN_5e00fe8d
        lbl_5e00fdb3:
            push 0x4878
            call FUN_5e02b45e
            add esp, 4
            cmp eax, ebx
            je lbl_5e00fde8
            lea edx, [ebp - 0x14]
            test edx, edx
            je lbl_5e00fdd0
            lea edx, [ebp - 8]
            jmp lbl_5e00fdd2
        lbl_5e00fdd0:
            xor edx, edx
        lbl_5e00fdd2:
            mov ecx, dword ptr [esp + 0x14]
            push ecx
            push edx
            mov ecx, eax
            call FUN_5e002430
            cmp eax, ebx
            je lbl_5e00fde8
            lea esi, [eax + 4]
            jmp lbl_5e00fdea
        lbl_5e00fde8:
            xor esi, esi
        lbl_5e00fdea:
            mov eax, dword ptr [esp + 0x14]
            mov dword ptr [edi], esi
            cmp eax, ebx
            je lbl_5e00fdfa
            mov edx, dword ptr [eax]
            push eax
            call dword ptr [edx + 8]
        lbl_5e00fdfa:
            cmp esi, ebx
            jne lbl_5e00fe0a
            pop edi
            pop esi
            pop ebp
            mov eax, 0x80004005
            pop ebx
            ret 0x10
        lbl_5e00fe0a:
            mov ecx, dword ptr [esp + 0x1c]
            mov eax, dword ptr [esi]
            push ebx
            push ecx
            push esi
            call dword ptr [eax + 0x20]
            lea eax, [esp + 0x20]
            mov dword ptr [esp + 0x18], ebx
            mov dword ptr [esp + 0x20], ebx
            mov edx, dword ptr [esi]
            push eax
            push offset g_5e035650
            push esi
            call dword ptr [edx]
            cmp eax, ebx
            __emit 0x7c /* jl 0x5e00fe8d: MSVC6 cannot encode natively */
            __emit 0x5c /* jl 0x5e00fe8d: MSVC6 cannot encode natively */
            mov ecx, dword ptr [ebp - 4]
            lea eax, [ebp - 4]
            lea edx, [esp + 0x18]
            push ebx
            push edx
            push eax
            call dword ptr [ecx + 0x18]
            mov eax, dword ptr [esp + 0x20]
            mov edx, dword ptr [esp + 0x18]
            push edx
            push eax
            mov ecx, dword ptr [eax]
            call dword ptr [ecx + 0x30]
            mov eax, dword ptr [esp + 0x20]
            cmp eax, ebx
            je lbl_5e00fe62
            mov ecx, dword ptr [eax]
            push eax
            call dword ptr [ecx + 8]
            mov dword ptr [esp + 0x20], ebx
        lbl_5e00fe62:
            mov eax, dword ptr [esp + 0x18]
            cmp eax, ebx
            je lbl_5e00fe70
            mov edx, dword ptr [eax]
            push eax
            call dword ptr [edx + 8]
        lbl_5e00fe70:
            mov eax, dword ptr [g_5e77a508]
            cmp eax, 0x10
            __emit 0x7d /* jge 0x5e00fe87: MSVC6 cannot encode natively */
            __emit 0x0d /* jge 0x5e00fe87: MSVC6 cannot encode natively */
            __emit 0x89 /* mov dword ptr [eax*4 + 0x5e77a4c8], esi: MSVC6 cannot encode natively */
            __emit 0x34 /* mov dword ptr [eax*4 + 0x5e77a4c8], esi: MSVC6 cannot encode natively */
            __emit 0x85 /* mov dword ptr [eax*4 + 0x5e77a4c8], esi: MSVC6 cannot encode natively */
            __emit 0xc8 /* mov dword ptr [eax*4 + 0x5e77a4c8], esi: MSVC6 cannot encode natively */
            __emit 0xa4 /* mov dword ptr [eax*4 + 0x5e77a4c8], esi: MSVC6 cannot encode natively */
            __emit 0x77 /* mov dword ptr [eax*4 + 0x5e77a4c8], esi: MSVC6 cannot encode natively */
            __emit 0x5e /* mov dword ptr [eax*4 + 0x5e77a4c8], esi: MSVC6 cannot encode natively */
            inc eax
            mov dword ptr [g_5e77a508], eax
            mov byte ptr [ebp + 8], 1
            xor eax, eax
            pop edi
            pop esi
            pop ebp
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
            nop
            nop
            mov eax, 0x80004005
            ret 0x14
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
