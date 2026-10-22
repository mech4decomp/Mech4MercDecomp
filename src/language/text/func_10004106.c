/* auto-transcribed gap function 0x10004106 (199 B); review against reference; stepping stone */
extern void __cdecl FUN_10004018(void);
extern void __cdecl FUN_1000405a(void);
extern void __cdecl FUN_100040ee(void);
extern void __cdecl FUN_100041b0(void);
__declspec(naked) void FUN_10004106(void)
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
            jne FUN_100041b0
            mov dword ptr [ebp - 8], eax
            mov eax, dword ptr [ebp + 0x10]
            mov dword ptr [ebp - 4], eax
            lea eax, [ebp - 8]
            mov dword ptr [ebx - 4], eax
            mov esi, dword ptr [ebx + 0xc]
            mov edi, dword ptr [ebx + 8]
        lbl_10004143:
            cmp esi, -1
            je lbl_100041a9
            lea ecx, [esi + esi*2]
            cmp dword ptr [edi + ecx*4 + 4], 0
            je lbl_10004197
            push esi
            push ebp
            lea ebp, [ebx + 0x10]
            call dword ptr [edi + ecx*4 + 4]
            pop ebp
            pop esi
            mov ebx, dword ptr [ebp + 0xc]
            or eax, eax
            je lbl_10004197
            js lbl_100041a2
            mov edi, dword ptr [ebx + 8]
            push ebx
            call FUN_10004018
            add esp, 4
            lea ebp, [ebx + 0x10]
            push esi
            push ebx
            call FUN_1000405a
            add esp, 8
            lea ecx, [esi + esi*2]
            push 1
            mov eax, dword ptr [edi + ecx*4 + 8]
            call FUN_100040ee
            mov eax, dword ptr [edi + ecx*4]
            mov dword ptr [ebx + 0xc], eax
            call dword ptr [edi + ecx*4 + 8]
        lbl_10004197:
            mov edi, dword ptr [ebx + 8]
            lea ecx, [esi + esi*2]
            mov esi, dword ptr [edi + ecx*4]
            jmp lbl_10004143
        lbl_100041a2:
            mov eax, 0
            jmp lbl_100041c5
        lbl_100041a9:
            mov eax, 1
            jmp lbl_100041c5
            push ebp
            lea ebp, [ebx + 0x10]
            push -1
            push ebx
            call FUN_1000405a
            add esp, 8
            pop ebp
            mov eax, 1
        lbl_100041c5:
            pop ebp
            pop edi
            pop esi
            pop ebx
            mov esp, ebp
            pop ebp
            ret
    }
}
