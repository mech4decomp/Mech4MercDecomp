/* auto-transcribed gap function 0x10012C01 (399 B); review against reference; stepping stone */
extern void __cdecl FUN_1000b450(void);
extern void __cdecl FUN_1000b480(void);
extern void __cdecl FUN_10012bb0(void);
extern void __cdecl FUN_1001da90(void);
extern void __cdecl FUN_1001de20(void);
extern int g_100210a0;
extern int g_100210a4;
extern int g_10025f10;
extern int g_10025f2c;
extern int g_10025f40;
extern int g_10025f54;
extern int g_10025f70;
extern int g_10025f84;
extern int g_10025f9c;
__declspec(naked) void FUN_10012c01(void)
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
            nop
            nop
            nop
            nop
            sub esp, 8
            push ebx
            push ebp
            mov ebp, dword ptr [g_100210a4]
            push esi
            mov esi, dword ptr [esp + 0x18]
            push edi
            mov ebx, 1
            mov eax, dword ptr [esi + 0x98]
            mov ecx, dword ptr [esi + 0x9c]
            mov dword ptr [esp + 0x10], eax
            mov dword ptr [esp + 0x14], ecx
        lbl_10012c3a:
            mov edi, dword ptr [esi + 0x88]
            push edi
            push esi
            call FUN_1001da90
            cmp eax, ebx
            je lbl_10012c54
            push 3
            push edi
            push esi
            call FUN_10012bb0
        lbl_10012c54:
            mov eax, dword ptr [esi + 0x64]
            mov edx, dword ptr [esi + 0xa0]
            mov dword ptr [esi + 0x1c], ebx
            push edx
            mov ecx, dword ptr [eax + 0x10]
            push offset g_10025f40
            push ecx
            call FUN_1000b450
            mov eax, dword ptr [esi + 0x64]
            mov edx, dword ptr [esi + 0xa4]
            push edx
            push offset g_10025f70
            mov ecx, dword ptr [eax + 0x10]
            push ecx
            call FUN_1000b450
            mov eax, dword ptr [esi + 0x64]
            mov edx, dword ptr [esi + 0xa8]
            push edx
            push offset g_10025f54
            mov ecx, dword ptr [eax + 0x10]
            push ecx
            call FUN_1000b450
            mov eax, dword ptr [esi + 0x64]
            mov edx, dword ptr [esi + 0xac]
            push edx
            push offset g_10025f2c
            mov ecx, dword ptr [eax + 0x10]
            push ecx
            call FUN_1000b450
            mov eax, dword ptr [esi + 0x64]
            mov edx, dword ptr [esi + 0xb0]
            push edx
            push offset g_10025f10
            mov ecx, dword ptr [eax + 0x10]
            push ecx
            call FUN_1000b450
            mov edx, dword ptr [esi + 0xbc]
            mov ecx, dword ptr [esi + 0x64]
            mov eax, dword ptr [esi + 0xb8]
            push edx
            mov edx, dword ptr [ecx + 0x10]
            push eax
            push offset g_10025f9c
            push edx
            call FUN_1000b480
            mov eax, dword ptr [esi + 0xc4]
            mov edx, dword ptr [esi + 0x64]
            mov ecx, dword ptr [esi + 0xc0]
            add esp, 0x4c
            push eax
            mov eax, dword ptr [edx + 0x10]
            push ecx
            push offset g_10025f84
            push eax
            call FUN_1000b480
            mov ecx, dword ptr [esi + 0x68]
            add esp, 0x10
            test byte ptr [ecx + 4], bl
            jne lbl_10012d65
            push 0x7d0
            lea edx, [esp + 0x14]
            push 0
            push edx
            push 2
            call ebp
            cmp eax, ebx
            je lbl_10012d65
            cmp eax, 0x102
            jne lbl_10012d4f
            push 0
            push esi
            call FUN_1001de20
            push -1
            lea eax, [esp + 0x14]
            push 0
            push eax
            push 2
            call ebp
            cmp eax, ebx
            je lbl_10012d65
        lbl_10012d4f:
            mov eax, dword ptr [esi + 0x98]
            test eax, eax
            je lbl_10012d65
            push eax
            call dword ptr [g_100210a0]
            jmp lbl_10012c3a
        lbl_10012d65:
            mov eax, dword ptr [esi + 0x9c]
            test eax, eax
            je lbl_10012d76
            push eax
            call dword ptr [g_100210a0]
        lbl_10012d76:
            push ebx
            push esi
            call FUN_1001de20
            pop edi
            pop esi
            pop ebp
            pop ebx
            add esp, 8
            ret 4
            nop
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
