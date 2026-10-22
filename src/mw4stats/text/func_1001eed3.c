/* auto-transcribed gap function 0x1001EED3 (205 B); review against reference; stepping stone */
extern void __cdecl FUN_10001000(void);
extern void __cdecl FUN_1001ee28(void);
extern int g_100275b0;
extern int g_100275b8;
__declspec(naked) void FUN_1001eed3(void)
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
            jne lbl_1001eeef
            cmp dword ptr [g_100275b0], 0
            jmp lbl_1001ef15
        lbl_1001eeef:
            cmp esi, 1
            je lbl_1001eef9
            cmp esi, 2
            jne lbl_1001ef1b
        lbl_1001eef9:
            mov eax, dword ptr [g_100275b8]
            test eax, eax
            je lbl_1001ef0b
            push edi
            push esi
            push ebx
            call eax
            test eax, eax
            je lbl_1001ef17
        lbl_1001ef0b:
            push edi
            push esi
            push ebx
            call FUN_1001ee28
            test eax, eax
        lbl_1001ef15:
            jne lbl_1001ef1b
        lbl_1001ef17:
            xor eax, eax
            jmp lbl_1001ef69
        lbl_1001ef1b:
            push edi
            push esi
            push ebx
            call FUN_10001000
            cmp esi, 1
            mov dword ptr [ebp + 0xc], eax
            jne lbl_1001ef37
            test eax, eax
            jne lbl_1001ef66
            push edi
            push eax
            push ebx
            call FUN_1001ee28
        lbl_1001ef37:
            test esi, esi
            je lbl_1001ef40
            cmp esi, 3
            jne lbl_1001ef66
        lbl_1001ef40:
            push edi
            push esi
            push ebx
            call FUN_1001ee28
            test eax, eax
            jne lbl_1001ef4f
            and dword ptr [ebp + 0xc], eax
        lbl_1001ef4f:
            cmp dword ptr [ebp + 0xc], 0
            je lbl_1001ef66
            mov eax, dword ptr [g_100275b8]
            test eax, eax
            je lbl_1001ef66
            push edi
            push esi
            push ebx
            call eax
            mov dword ptr [ebp + 0xc], eax
        lbl_1001ef66:
            mov eax, dword ptr [ebp + 0xc]
        lbl_1001ef69:
            pop edi
            pop esi
            pop ebx
            pop ebp
            ret 0xc
            push ecx
            cmp eax, 0x1000
            lea ecx, [esp + 8]
            jb lbl_1001ef90
        lbl_1001ef7c:
            sub ecx, 0x1000
            sub eax, 0x1000
            test dword ptr [ecx], eax
            cmp eax, 0x1000
            jae lbl_1001ef7c
        lbl_1001ef90:
            sub ecx, eax
            mov eax, esp
            test dword ptr [ecx], eax
            mov esp, ecx
            mov ecx, dword ptr [eax]
            mov eax, dword ptr [eax + 4]
            push eax
            ret
            int 3
    }
}
