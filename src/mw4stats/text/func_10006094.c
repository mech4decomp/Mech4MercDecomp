/* auto-transcribed gap function 0x10006094 (156 B); review against reference; stepping stone */
extern void __cdecl FUN_10002fa0(void);
extern void __cdecl FUN_10003790(void);
extern void __cdecl FUN_10005a30(void);
extern int g_100252f0;
__declspec(naked) void FUN_10006094(void)
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
            push ebx
            push esi
            mov esi, dword ptr [esp + 0xc]
            test esi, esi
            mov ebx, ecx
            jne lbl_100060b3
            pop esi
            xor al, al
            pop ebx
            ret 4
        lbl_100060b3:
            push ebp
            mov ebp, dword ptr [esi]
            push edi
            lea edi, [ebx + 0x30]
            push 1
            mov ecx, edi
            call FUN_10002fa0
            push eax
            mov ecx, esi
            call dword ptr [ebp + 0x1c]
            mov esi, eax
            test esi, esi
            je lbl_10006115
        lbl_100060cf:
            mov eax, dword ptr [esi]
            mov ecx, esi
            call dword ptr [eax + 8]
            mov edx, dword ptr [eax]
            push 1
            push offset g_100252f0
            mov ecx, eax
            call dword ptr [edx + 4]
            test eax, eax
            je lbl_10006111
            mov edx, dword ptr [eax]
            mov ecx, eax
            call dword ptr [edx]
            push eax
            mov ecx, ebx
            call FUN_10003790
            mov edx, dword ptr [eax]
            push esi
            mov ecx, eax
            call dword ptr [edx + 4]
            mov ebp, dword ptr [esi]
            push 1
            mov ecx, edi
            call FUN_10002fa0
            push eax
            mov ecx, esi
            call dword ptr [ebp + 0x2c]
            mov esi, eax
        lbl_10006111:
            test esi, esi
            jne lbl_100060cf
        lbl_10006115:
            mov ecx, ebx
            call FUN_10005a30
            pop edi
            pop ebp
            pop esi
            mov al, 1
            pop ebx
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
    }
}
