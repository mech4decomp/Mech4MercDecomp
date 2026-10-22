/* auto-transcribed gap function 0x1001EFA0 (128 B); review against reference; stepping stone */
extern int g_100210c8;
extern int g_100210d8;
__declspec(naked) void FUN_1001efa0(void)
{
    __asm {
            push ebx
            push esi
            mov eax, dword ptr [esp + 0x18]
            or eax, eax
            jne lbl_1001efc2
            mov ecx, dword ptr [esp + 0x14]
            mov eax, dword ptr [esp + 0x10]
            xor edx, edx
            div ecx
            mov ebx, eax
            mov eax, dword ptr [esp + 0xc]
            div ecx
            mov edx, ebx
            jmp lbl_1001f003
        lbl_1001efc2:
            mov ecx, eax
            mov ebx, dword ptr [esp + 0x14]
            mov edx, dword ptr [esp + 0x10]
            mov eax, dword ptr [esp + 0xc]
        lbl_1001efd0:
            shr ecx, 1
            rcr ebx, 1
            shr edx, 1
            rcr eax, 1
            or ecx, ecx
            jne lbl_1001efd0
            div ebx
            mov esi, eax
            mul dword ptr [esp + 0x18]
            mov ecx, eax
            mov eax, dword ptr [esp + 0x14]
            mul esi
            add edx, ecx
            jb lbl_1001effe
            cmp edx, dword ptr [esp + 0x10]
            ja lbl_1001effe
            jb lbl_1001efff
            cmp eax, dword ptr [esp + 0xc]
            jbe lbl_1001efff
        lbl_1001effe:
            dec esi
        lbl_1001efff:
            xor edx, edx
            mov eax, esi
        lbl_1001f003:
            pop esi
            pop ebx
            ret 0x10
            jmp dword ptr [g_100210c8]
            jmp dword ptr [g_100210d8]
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
    }
}
