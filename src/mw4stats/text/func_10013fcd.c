/* auto-transcribed gap function 0x10013FCD (435 B); review against reference; stepping stone */
extern void __cdecl FUN_1000a0f0(void);
extern void __cdecl FUN_1000a120(void);
extern void __cdecl FUN_1000bee0(void);
extern int g_100266d8;
extern int g_100266f4;
extern int g_100274ec;
__declspec(naked) void FUN_10013fcd(void)
{
    __asm {
            nop
            nop
            nop
            mov ecx, dword ptr [esp + 8]
            push ebx
            push ebp
            push esi
            mov eax, dword ptr [ecx]
            push edi
            push 1
            push offset g_100266f4
            call dword ptr [eax + 0x1c]
            mov edi, eax
            xor ebp, ebp
            mov esi, dword ptr [esp + 0x14]
            cmp edi, ebp
            mov ecx, dword ptr [esi + 0x38]
            mov dword ptr [ecx], 0x10
            mov edx, dword ptr [esi + 0x38]
            mov dword ptr [edx + 4], ebp
            je lbl_1001401b
        lbl_10013fff:
            mov ecx, dword ptr [esi + 0x38]
            push 1
            push offset g_100266f4
            mov edx, dword ptr [ecx + 4]
            inc edx
            mov dword ptr [ecx + 4], edx
            mov edx, dword ptr [eax]
            mov ecx, eax
            call dword ptr [edx + 0x2c]
            cmp eax, ebp
            jne lbl_10013fff
        lbl_1001401b:
            mov eax, dword ptr [esi + 0x38]
            mov ecx, dword ptr [eax + 4]
            cmp ecx, ebp
            jne lbl_10014031
            pop edi
            pop esi
            pop ebp
            mov eax, 0x80040281
            pop ebx
            ret 8
        lbl_10014031:
            mov dword ptr [eax + 8], ecx
            mov eax, dword ptr [esi + 0x38]
            mov eax, dword ptr [eax + 4]
            lea ecx, [eax + eax*2]
            shl ecx, 2
            push ecx
            call FUN_1000a0f0
            mov edx, dword ptr [esi + 0x38]
            mov dword ptr [edx + 0xc], eax
            mov eax, dword ptr [esi + 0x38]
            cmp dword ptr [eax + 0xc], ebp
            jne lbl_10014060
            pop edi
            pop esi
            pop ebp
            mov eax, 0x8007000e
            pop ebx
            ret 8
        lbl_10014060:
            mov eax, dword ptr [eax + 4]
            shl eax, 2
            push eax
            call FUN_1000a0f0
            cmp eax, ebp
            mov dword ptr [esi + 0x630], eax
            jne lbl_10014082
            pop edi
            pop esi
            pop ebp
            mov eax, 0x8007000e
            pop ebx
            ret 8
        lbl_10014082:
            cmp edi, ebp
            je lbl_10014169
            mov dword ptr [esp + 0x14], ebp
            mov dword ptr [esp + 0x18], ebp
            jmp lbl_10014096
        lbl_10014094:
            xor ebp, ebp
        lbl_10014096:
            mov ecx, dword ptr [esi + 0x38]
            push 0x98
            mov ebx, dword ptr [ecx + 0xc]
            mov ecx, dword ptr [esp + 0x1c]
            add ebx, ecx
            call FUN_1000a120
            add esp, 4
            cmp eax, ebp
            je lbl_100140ca
            mov dword ptr [eax], ebp
            mov dword ptr [eax + 4], ebp
            mov dword ptr [eax + 8], ebp
            mov dword ptr [eax + 0xc], ebp
            mov dword ptr [eax + 0x10], ebp
            mov dword ptr [eax + 0x14], 0x400
            jmp lbl_100140cc
        lbl_100140ca:
            xor eax, eax
        lbl_100140cc:
            mov edx, dword ptr [esi + 0x630]
            mov ecx, dword ptr [esp + 0x14]
            mov dword ptr [ecx + edx], eax
            mov edx, dword ptr [edi]
            mov ecx, edi
            call dword ptr [edx + 8]
            mov edx, dword ptr [eax]
            push 1
            push offset g_100266d8
            mov ecx, eax
            call dword ptr [edx + 4]
            mov ebp, eax
            test ebp, ebp
            je lbl_100140fd
            mov eax, dword ptr [ebp]
            mov ecx, ebp
            call dword ptr [eax]
            jmp lbl_100140ff
        lbl_100140fd:
            xor eax, eax
        lbl_100140ff:
            test ebp, ebp
            mov dword ptr [ebx + 4], eax
            je lbl_10014172
            mov ecx, dword ptr [esi + 0x630]
            mov ebp, dword ptr [esp + 0x14]
            mov edx, dword ptr [ecx + ebp]
            push edx
            push edi
            call FUN_1000bee0
            mov ecx, dword ptr [esp + 0x20]
            mov dword ptr [ebx], 0xc
            mov eax, dword ptr [esi + 0x630]
            add ecx, 0xc
            mov dword ptr [esp + 0x20], ecx
            add esp, 8
            mov eax, dword ptr [eax + ebp]
            add ebp, 4
            mov dword ptr [esp + 0x14], ebp
            mov ecx, dword ptr [eax + 0xc]
            test ecx, ecx
            jbe lbl_10014149
            mov eax, dword ptr [eax]
            jmp lbl_1001414e
        lbl_10014149:
            mov eax, offset g_100274ec
        lbl_1001414e:
            mov dword ptr [ebx + 8], eax
            mov edx, dword ptr [edi]
            push 1
            push offset g_100266f4
            mov ecx, edi
            call dword ptr [edx + 0x2c]
            mov edi, eax
            test edi, edi
            jne lbl_10014094
        lbl_10014169:
            pop edi
            pop esi
            pop ebp
            xor eax, eax
            pop ebx
            ret 8
        lbl_10014172:
            pop edi
            pop esi
            pop ebp
            mov eax, 0x80040282
            pop ebx
            ret 8
            nop
            nop
    }
}
