/* auto-transcribed gap function 0x100073CB (357 B); review against reference; stepping stone */
extern void __cdecl FUN_100072c0(void);
extern void __cdecl FUN_10007340(void);
__declspec(naked) void FUN_100073cb(void)
{
    __asm {
            nop
            nop
            nop
            nop
            nop
        lbl_100073d0:
            mov ecx, dword ptr [ecx + 4]
            xor eax, eax
            test ecx, ecx
            je lbl_100073e8
        lbl_100073d9:
            mov edx, dword ptr [ecx + 4]
            test edx, edx
            jne lbl_100073e1
            inc eax
        lbl_100073e1:
            mov ecx, dword ptr [ecx + 8]
            test ecx, ecx
            jne lbl_100073d9
        lbl_100073e8:
            ret
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, dword ptr [ecx + 4]
            xor edx, edx
            push esi
            test eax, eax
            je lbl_10007416
            mov esi, dword ptr [esp + 8]
            mov ecx, 1
            je lbl_1000740f
        lbl_10007405:
            cmp dword ptr [eax + 4], ecx
            jne lbl_1000740f
            cmp edx, esi
            je lbl_1000741c
            inc edx
        lbl_1000740f:
            mov eax, dword ptr [eax + 8]
            test eax, eax
            jne lbl_10007405
        lbl_10007416:
            xor eax, eax
            pop esi
            ret 4
        lbl_1000741c:
            test eax, eax
            je lbl_10007425
            cmp dword ptr [eax + 4], ecx
            je lbl_10007427
        lbl_10007425:
            xor ecx, ecx
        lbl_10007427:
            neg cl
            sbb ecx, ecx
            and ecx, eax
            je lbl_10007416
            lea eax, [ecx + 0xc]
            pop esi
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
            mov eax, dword ptr [ecx + 4]
            xor ecx, ecx
            test eax, eax
            push esi
            je lbl_10007463
            mov edx, dword ptr [esp + 8]
            je lbl_1000745c
        lbl_10007450:
            mov esi, dword ptr [eax + 4]
            test esi, esi
            jne lbl_1000745c
            cmp ecx, edx
            je lbl_10007469
            inc ecx
        lbl_1000745c:
            mov eax, dword ptr [eax + 8]
            test eax, eax
            jne lbl_10007450
        lbl_10007463:
            xor eax, eax
            pop esi
            ret 4
        lbl_10007469:
            test eax, eax
            je lbl_1000747b
            mov ecx, dword ptr [eax + 4]
            test ecx, ecx
            jne lbl_1000747b
            mov ecx, 1
            jmp lbl_1000747d
        lbl_1000747b:
            xor ecx, ecx
        lbl_1000747d:
            neg cl
            sbb ecx, ecx
            and ecx, eax
            je lbl_10007463
            lea eax, [ecx + 0xc]
            pop esi
            ret 4
            nop
            nop
            nop
            nop
            mov ecx, dword ptr [ecx + 4]
            xor eax, eax
            test ecx, ecx
            je lbl_100074ad
            mov edx, dword ptr [esp + 4]
        lbl_1000749d:
            cmp eax, edx
            jae lbl_100074b2
            test ecx, ecx
            je lbl_100074a8
            mov ecx, dword ptr [ecx + 8]
        lbl_100074a8:
            inc eax
            test ecx, ecx
            jne lbl_1000749d
        lbl_100074ad:
            xor eax, eax
            ret 4
        lbl_100074b2:
            test ecx, ecx
            je lbl_100074ad
            mov eax, dword ptr [ecx]
            call dword ptr [eax]
            ret 4
            nop
            nop
            nop
            mov eax, dword ptr [ecx + 0xc]
            ret
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
            jmp lbl_100073d0
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
            mov eax, dword ptr [esp + 8]
            mov edx, dword ptr [esp + 4]
            push eax
            push edx
            call FUN_100072c0
            test eax, eax
            je lbl_100074f9
            add eax, 0xc
            ret 8
        lbl_100074f9:
            xor eax, eax
            ret 8
            nop
            nop
            mov eax, dword ptr [esp + 0x10]
            mov edx, dword ptr [esp + 0xc]
            push eax
            mov eax, dword ptr [esp + 0xc]
            push edx
            mov edx, dword ptr [esp + 0xc]
            push eax
            push edx
            call FUN_10007340
            test eax, eax
            je lbl_10007523
            add eax, 0xc
            ret 0x10
        lbl_10007523:
            xor eax, eax
            ret 0x10
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
