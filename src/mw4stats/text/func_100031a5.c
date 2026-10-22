/* auto-transcribed gap function 0x100031A5 (183 B); review against reference; stepping stone */
extern void __cdecl FUN_10006740(void);
extern void __cdecl FUN_1001ee16(void);
extern void __cdecl FUN_1001f3cb(void);
__declspec(naked) void FUN_100031a5(void)
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
            mov eax, dword ptr fs:[0]
            push -1
            push offset FUN_1001f3cb
            push eax
            mov dword ptr fs:[0], esp
            push ebx
            mov ebx, dword ptr [esp + 0x14]
            push esi
            push edi
            mov edi, ecx
            mov eax, dword ptr [edi]
            push ebx
            call dword ptr [eax + 4]
            test al, al
            je lbl_10003231
            push 8
            call FUN_1001ee16
            add esp, 4
            mov dword ptr [esp + 0x1c], eax
            test eax, eax
            mov dword ptr [esp + 0x14], 0
            je lbl_100031ff
            push 3
            mov ecx, eax
            call FUN_10006740
            mov esi, eax
            jmp lbl_10003201
        lbl_100031ff:
            xor esi, esi
        lbl_10003201:
            mov eax, dword ptr [ebx + 0x10]
            mov edx, dword ptr [esi]
            push eax
            mov ecx, esi
            mov dword ptr [esp + 0x18], 0xffffffff
            mov dword ptr [edi + 4], esi
            call dword ptr [edx + 8]
            test eax, eax
            jl lbl_10003231
            mov edx, dword ptr [esi]
            mov ecx, esi
            call dword ptr [edx]
            test eax, eax
            je lbl_10003231
            mov ecx, dword ptr [esp + 0x20]
            mov edx, dword ptr [edi]
            push ecx
            push eax
            mov ecx, edi
            call dword ptr [edx]
        lbl_10003231:
            mov ecx, dword ptr [esp + 0xc]
            pop edi
            pop esi
            mov dword ptr fs:[0], ecx
            pop ebx
            add esp, 0xc
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
            nop
            nop
            mov eax, dword ptr [esp + 4]
            push esi
            mov esi, ecx
            push eax
            lea ecx, [esp + 0xc]
    }
}
