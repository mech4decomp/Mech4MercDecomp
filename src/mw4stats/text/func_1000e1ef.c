/* auto-transcribed gap function 0x1000E1EF (257 B); review against reference; stepping stone */
extern void __cdecl FUN_1000a120(void);
extern void __cdecl FUN_10012360(void);
extern void __cdecl FUN_10012570(void);
extern void __cdecl FUN_10012ae0(void);
extern void __cdecl FUN_1001fabb(void);
extern int g_10021090;
extern int g_10021094;
__declspec(naked) void FUN_1000e1ef(void)
{
    __asm {
            nop
            mov eax, dword ptr fs:[0]
            push -1
            push offset FUN_1001fabb
            push eax
            mov dword ptr fs:[0], esp
            sub esp, 0x10
            push esi
            mov esi, dword ptr [esp + 0x24]
            push edi
            mov eax, dword ptr [esi + 0x38]
            test eax, eax
            jne lbl_1000e2a5
            push 0x200
            call FUN_1000a120
            add esp, 4
            mov dword ptr [esp + 0x28], eax
            test eax, eax
            mov dword ptr [esp + 0x20], 0
            je lbl_1000e23f
            mov ecx, eax
            call FUN_10012360
            jmp lbl_1000e241
        lbl_1000e23f:
            xor eax, eax
        lbl_1000e241:
            test eax, eax
            mov dword ptr [esp + 0x20], 0xffffffff
            mov dword ptr [esi + 0x38], eax
            jne lbl_1000e268
            pop edi
            mov eax, 0x80040252
            pop esi
            mov ecx, dword ptr [esp + 0x10]
            mov dword ptr fs:[0], ecx
            add esp, 0x1c
            ret 4
        lbl_1000e268:
            mov edx, dword ptr [esi + 0x44]
            lea ecx, [esi + 0x48]
            push ecx
            push edx
            push eax
            call FUN_10012570
            mov edi, eax
            test edi, edi
            je lbl_1000e2a5
            mov ecx, dword ptr [esi + 0x38]
            test ecx, ecx
            je lbl_1000e289
            mov eax, dword ptr [ecx]
            push 1
            call dword ptr [eax]
        lbl_1000e289:
            mov eax, edi
            mov dword ptr [esi + 0x38], 0
            pop edi
            pop esi
            mov ecx, dword ptr [esp + 0x10]
            mov dword ptr fs:[0], ecx
            add esp, 0x1c
            ret 4
        lbl_1000e2a5:
            mov edx, dword ptr [esi + 0x38]
            lea ecx, [esi + 0xc]
            push ecx
            push edx
            call FUN_10012ae0
            lea eax, [esp + 8]
            push eax
            call dword ptr [g_10021094]
            add esi, 0x3c
            lea ecx, [esp + 8]
            push esi
            push ecx
            call dword ptr [g_10021090]
            pop edi
            xor eax, eax
            mov ecx, dword ptr [esp + 0x14]
            pop esi
            mov dword ptr fs:[0], ecx
            add esp, 0x1c
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
            nop
            nop
            nop
            nop
            nop
            nop
    }
}
