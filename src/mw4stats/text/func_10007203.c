/* auto-transcribed gap function 0x10007203 (189 B); review against reference; stepping stone */
extern int g_100210e0;
extern int g_10021150;
__declspec(naked) void FUN_10007203(void)
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
            push ebx
            push ebp
            mov ebp, dword ptr [ecx + 4]
            push esi
            test ebp, ebp
            push edi
            je lbl_100072b2
            mov bl, byte ptr [esp + 0x1c]
            mov esi, dword ptr [esp + 0x18]
            mov edi, dword ptr [esp + 0x14]
        lbl_1000722b:
            mov eax, dword ptr [ebp + 0xc]
            test bl, bl
            je lbl_1000724b
            test eax, eax
            jne lbl_1000723d
            test edi, edi
            sete al
            jmp lbl_10007265
        lbl_1000723d:
            test edi, edi
            je lbl_100072b2
            push edi
            push eax
            call dword ptr [g_10021150]
            jmp lbl_10007262
        lbl_1000724b:
            test eax, eax
            jne lbl_10007256
            test edi, edi
            sete al
            jmp lbl_10007265
        lbl_10007256:
            test edi, edi
            je lbl_100072b2
            push edi
            push eax
            call dword ptr [g_100210e0]
        lbl_10007262:
            add esp, 8
        lbl_10007265:
            test eax, eax
            je lbl_100072b2
            mov eax, dword ptr [ebp + 0x18]
            test bl, bl
            je lbl_10007289
            test eax, eax
            jne lbl_1000727b
            test esi, esi
            sete al
            jmp lbl_100072a3
        lbl_1000727b:
            test esi, esi
            je lbl_100072b2
            push esi
            push eax
            call dword ptr [g_10021150]
            jmp lbl_100072a0
        lbl_10007289:
            test eax, eax
            jne lbl_10007294
            test esi, esi
            sete al
            jmp lbl_100072a3
        lbl_10007294:
            test esi, esi
            je lbl_100072b2
            push esi
            push eax
            call dword ptr [g_100210e0]
        lbl_100072a0:
            add esp, 8
        lbl_100072a3:
            test eax, eax
            je lbl_100072b2
            mov ebp, dword ptr [ebp + 4]
            test ebp, ebp
            jne lbl_1000722b
        lbl_100072b2:
            pop edi
            mov eax, ebp
            pop esi
            pop ebp
            pop ebx
            ret 0xc
            nop
            nop
            nop
            nop
            nop
    }
}
