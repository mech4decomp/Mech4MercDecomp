/* auto-transcribed gap function 0x100010E9 (208 B); review against reference; stepping stone */
extern void __cdecl FUN_10001000(void);
extern void __cdecl FUN_10001010(void);
extern void __cdecl FUN_10001d25(void);
extern void __cdecl FUN_10001d5e(void);
extern int g_10006030;
extern int g_10008a38;
extern int g_10008a44;
extern int g_10008a48;
extern int g_1000911c;
__declspec(naked) void FUN_100010e9(void)
{
    __asm {
            push ebp
            mov ebp, esp
            push ebx
            mov ebx, dword ptr [ebp + 8]
            push esi
            mov esi, dword ptr [ebp + 0xc]
            push edi
            mov edi, dword ptr [ebp + 0x10]
            test esi, esi
            jne lbl_10001105
            cmp dword ptr [g_10008a38], 0
            jmp lbl_1000112b
        lbl_10001105:
            cmp esi, 1
            je lbl_1000110f
            cmp esi, 2
            jne lbl_10001131
        lbl_1000110f:
            mov eax, dword ptr [g_1000911c]
            test eax, eax
            je lbl_10001121
            push edi
            push esi
            push ebx
            call eax
            test eax, eax
            je lbl_1000112d
        lbl_10001121:
            push edi
            push esi
            push ebx
            call FUN_10001010
            test eax, eax
        lbl_1000112b:
            jne lbl_10001131
        lbl_1000112d:
            xor eax, eax
            jmp lbl_1000117f
        lbl_10001131:
            push edi
            push esi
            push ebx
            call FUN_10001000
            cmp esi, 1
            mov dword ptr [ebp + 0xc], eax
            jne lbl_1000114d
            test eax, eax
            jne lbl_1000117c
            push edi
            push eax
            push ebx
            call FUN_10001010
        lbl_1000114d:
            test esi, esi
            je lbl_10001156
            cmp esi, 3
            jne lbl_1000117c
        lbl_10001156:
            push edi
            push esi
            push ebx
            call FUN_10001010
            test eax, eax
            jne lbl_10001165
            and dword ptr [ebp + 0xc], eax
        lbl_10001165:
            cmp dword ptr [ebp + 0xc], 0
            je lbl_1000117c
            mov eax, dword ptr [g_1000911c]
            test eax, eax
            je lbl_1000117c
            push edi
            push esi
            push ebx
            call eax
            mov dword ptr [ebp + 0xc], eax
        lbl_1000117c:
            mov eax, dword ptr [ebp + 0xc]
        lbl_1000117f:
            pop edi
            pop esi
            pop ebx
            pop ebp
            ret 0xc
            mov eax, dword ptr [g_10008a44]
            cmp eax, 1
            je lbl_1000119d
            test eax, eax
            jne lbl_100011a2
            cmp dword ptr [g_10008a48], 1
            jne lbl_100011a2
        lbl_1000119d:
            call FUN_10001d25
        lbl_100011a2:
            push dword ptr [esp + 4]
            call FUN_10001d5e
            push 0xff
            call dword ptr [g_10006030]
            pop ecx
            pop ecx
            ret
    }
}
