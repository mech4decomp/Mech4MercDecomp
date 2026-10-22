/* auto-transcribed gap function 0x100038A5 (217 B); review against reference; stepping stone */
extern void __cdecl FUN_1000397e(void);
extern void __cdecl FUN_10003988(void);
extern void __cdecl FUN_10003ab0(void);
__declspec(naked) void FUN_100038a5(void)
{
    __asm {
            int 3
            int 3
            int 3
            push ebp
            mov ebp, esp
            push ebx
            push esi
            push edi
            push ebp
            push 0
            push 0
            push 0x100038c0
            push dword ptr [ebp + 8]
            call FUN_10003ab0
            pop ebp
            pop edi
            pop esi
            pop ebx
            mov esp, ebp
            pop ebp
            ret
            mov ecx, dword ptr [esp + 4]
            test dword ptr [ecx + 4], 6
            mov eax, 1
            je lbl_100038e9
            mov eax, dword ptr [esp + 8]
            mov edx, dword ptr [esp + 0x10]
            mov dword ptr [edx], eax
            mov eax, 3
        lbl_100038e9:
            ret
            push ebx
            push esi
            push edi
            mov eax, dword ptr [esp + 0x10]
            push eax
            push -2
            push 0x100038c8
            push dword ptr fs:[0]
            mov dword ptr fs:[0], esp
        lbl_10003907:
            mov eax, dword ptr [esp + 0x20]
            mov ebx, dword ptr [eax + 8]
            mov esi, dword ptr [eax + 0xc]
            cmp esi, -1
            je lbl_10003944
            cmp esi, dword ptr [esp + 0x24]
            je lbl_10003944
            lea esi, [esi + esi*2]
            mov ecx, dword ptr [ebx + esi*4]
            mov dword ptr [esp + 8], ecx
            mov dword ptr [eax + 0xc], ecx
            cmp dword ptr [ebx + esi*4 + 4], 0
            jne lbl_10003942
            push 0x101
            mov eax, dword ptr [ebx + esi*4 + 8]
            call FUN_1000397e
            call dword ptr [ebx + esi*4 + 8]
        lbl_10003942:
            jmp lbl_10003907
        lbl_10003944:
            pop dword ptr fs:[0]
            add esp, 0xc
            pop edi
            pop esi
            pop ebx
            ret
            xor eax, eax
            mov ecx, dword ptr fs:[0]
            cmp dword ptr [ecx + 4], 0x100038c8
            jne lbl_10003974
            mov edx, dword ptr [ecx + 0xc]
            mov edx, dword ptr [edx + 0xc]
            cmp dword ptr [ecx + 8], edx
            jne lbl_10003974
            mov eax, 1
        lbl_10003974:
            ret
            push ebx
            push ecx
            mov ebx, 0x10005350
            __emit 0xeb /* jmp 0x10003988: MSVC6 cannot encode natively */
            __emit 0x0a /* jmp 0x10003988: MSVC6 cannot encode natively */
    }
}
