/* auto-transcribed gap function 0x10003FB9 (309 B); review against reference; stepping stone */
extern void __cdecl FUN_100040ee(void);
extern void __cdecl FUN_100040f8(void);
extern void __cdecl FUN_10004f54(void);
__declspec(naked) void FUN_10003fb9(void)
{
    __asm {
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            mov edx, dword ptr [esp + 0xc]
            mov ecx, dword ptr [esp + 4]
            test edx, edx
            je lbl_10004013
            xor eax, eax
            mov al, byte ptr [esp + 8]
            push edi
            mov edi, ecx
            cmp edx, 4
            jb lbl_10004007
            neg ecx
            and ecx, 3
            je lbl_10003fe9
            sub edx, ecx
        lbl_10003fe3:
            mov byte ptr [edi], al
            inc edi
            dec ecx
            jne lbl_10003fe3
        lbl_10003fe9:
            mov ecx, eax
            shl eax, 8
            add eax, ecx
            mov ecx, eax
            shl eax, 0x10
            add eax, ecx
            mov ecx, edx
            and edx, 3
            shr ecx, 2
            je lbl_10004007
            rep stosd
            __emit 0x85 /* test edx, edx: MSVC6 cannot encode natively */
            __emit 0xd2 /* test edx, edx: MSVC6 cannot encode natively */
            je lbl_1000400d
        lbl_10004007:
            mov byte ptr [edi], al
            inc edi
            dec edx
            jne lbl_10004007
        lbl_1000400d:
            mov eax, dword ptr [esp + 8]
            pop edi
            ret
        lbl_10004013:
            mov eax, dword ptr [esp + 4]
            ret
            push ebp
            mov ebp, esp
            push ebx
            push esi
            push edi
            push ebp
            push 0
            push 0
            push 0x10004030
            push dword ptr [ebp + 8]
            call FUN_10004f54
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
            je lbl_10004059
            mov eax, dword ptr [esp + 8]
            mov edx, dword ptr [esp + 0x10]
            mov dword ptr [edx], eax
            mov eax, 3
        lbl_10004059:
            ret
            push ebx
            push esi
            push edi
            mov eax, dword ptr [esp + 0x10]
            push eax
            push -2
            push 0x10004038
            push dword ptr fs:[0]
            mov dword ptr fs:[0], esp
        lbl_10004077:
            mov eax, dword ptr [esp + 0x20]
            mov ebx, dword ptr [eax + 8]
            mov esi, dword ptr [eax + 0xc]
            cmp esi, -1
            je lbl_100040b4
            cmp esi, dword ptr [esp + 0x24]
            je lbl_100040b4
            lea esi, [esi + esi*2]
            mov ecx, dword ptr [ebx + esi*4]
            mov dword ptr [esp + 8], ecx
            mov dword ptr [eax + 0xc], ecx
            cmp dword ptr [ebx + esi*4 + 4], 0
            jne lbl_100040b2
            push 0x101
            mov eax, dword ptr [ebx + esi*4 + 8]
            call FUN_100040ee
            call dword ptr [ebx + esi*4 + 8]
        lbl_100040b2:
            jmp lbl_10004077
        lbl_100040b4:
            pop dword ptr fs:[0]
            add esp, 0xc
            pop edi
            pop esi
            pop ebx
            ret
            xor eax, eax
            mov ecx, dword ptr fs:[0]
            cmp dword ptr [ecx + 4], 0x10004038
            jne lbl_100040e4
            mov edx, dword ptr [ecx + 0xc]
            mov edx, dword ptr [edx + 0xc]
            cmp dword ptr [ecx + 8], edx
            jne lbl_100040e4
            mov eax, 1
        lbl_100040e4:
            ret
            push ebx
            push ecx
            mov ebx, 0x10008370
            __emit 0xeb /* jmp 0x100040f8: MSVC6 cannot encode natively */
            __emit 0x0a /* jmp 0x100040f8: MSVC6 cannot encode natively */
    }
}
