/* auto-transcribed gap function 0x10003996 (199 B); review against reference; stepping stone */
extern void __cdecl FUN_100038a8(void);
extern void __cdecl FUN_100038ea(void);
extern void __cdecl FUN_1000397e(void);
extern void __cdecl FUN_10003a40(void);
__declspec(naked) void FUN_10003996(void)
{
    __asm {
            int 3
            int 3
            push esi
            inc ebx
            xor dh, byte ptr [eax]
            pop eax
            inc ebx
            xor byte ptr [eax], dh
            push ebp
            mov ebp, esp
            sub esp, 8
            push ebx
            push esi
            push edi
            push ebp
            cld
            mov ebx, dword ptr [ebp + 0xc]
            mov eax, dword ptr [ebp + 8]
            test dword ptr [eax + 4], 6
            jne FUN_10003a40
            mov dword ptr [ebp - 8], eax
            mov eax, dword ptr [ebp + 0x10]
            mov dword ptr [ebp - 4], eax
            lea eax, [ebp - 8]
            mov dword ptr [ebx - 4], eax
            mov esi, dword ptr [ebx + 0xc]
            mov edi, dword ptr [ebx + 8]
        lbl_100039d3:
            cmp esi, -1
            je lbl_10003a39
            lea ecx, [esi + esi*2]
            cmp dword ptr [edi + ecx*4 + 4], 0
            je lbl_10003a27
            push esi
            push ebp
            lea ebp, [ebx + 0x10]
            call dword ptr [edi + ecx*4 + 4]
            pop ebp
            pop esi
            mov ebx, dword ptr [ebp + 0xc]
            or eax, eax
            je lbl_10003a27
            js lbl_10003a32
            mov edi, dword ptr [ebx + 8]
            push ebx
            call FUN_100038a8
            add esp, 4
            lea ebp, [ebx + 0x10]
            push esi
            push ebx
            call FUN_100038ea
            add esp, 8
            lea ecx, [esi + esi*2]
            push 1
            mov eax, dword ptr [edi + ecx*4 + 8]
            call FUN_1000397e
            mov eax, dword ptr [edi + ecx*4]
            mov dword ptr [ebx + 0xc], eax
            call dword ptr [edi + ecx*4 + 8]
        lbl_10003a27:
            mov edi, dword ptr [ebx + 8]
            lea ecx, [esi + esi*2]
            mov esi, dword ptr [edi + ecx*4]
            jmp lbl_100039d3
        lbl_10003a32:
            mov eax, 0
            jmp lbl_10003a55
        lbl_10003a39:
            mov eax, 1
            jmp lbl_10003a55
            push ebp
            lea ebp, [ebx + 0x10]
            push -1
            push ebx
            call FUN_100038ea
            add esp, 8
            pop ebp
            mov eax, 1
        lbl_10003a55:
            pop ebp
            pop edi
            pop esi
            pop ebx
            mov esp, ebp
            pop ebp
            ret
    }
}
