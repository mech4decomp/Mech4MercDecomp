/* auto-transcribed gap function 0x10004759 (134 B); review against reference; stepping stone */
extern void __cdecl FUN_100047f0(void);
extern int g_10024514;
extern int g_10024528;
extern int g_1002453c;
extern int g_10024564;
extern int g_10024578;
extern int g_10024590;
__declspec(naked) void FUN_10004759(void)
{
    __asm {
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            push esi
            push edi
            mov edi, dword ptr [esp + 0xc]
            mov esi, ecx
            mov eax, dword ptr [esi + 4]
            push eax
            push offset g_10024514
            push edi
            call lbl_100047d0
            mov ecx, dword ptr [esi + 8]
            push ecx
            push offset g_10024528
            push edi
            call lbl_100047d0
            mov edx, dword ptr [esi + 0xc]
            push edx
            push offset g_1002453c
            push edi
            call FUN_100047f0
            mov eax, dword ptr [esi + 0x10]
            push eax
            push offset g_10024564
            push edi
            call lbl_100047d0
            mov ecx, dword ptr [esi + 0x14]
            push ecx
            push offset g_10024578
            push edi
            call lbl_100047d0
            mov edx, dword ptr [esi + 0x18]
            push edx
            push offset g_10024590
            push edi
            call lbl_100047d0
            add esp, 0x48
            mov eax, edi
            pop edi
            pop esi
            ret 4
            nop
            nop
            nop
            nop
        lbl_100047d0:
            mov ecx, dword ptr [esp + 8]
            mov edx, dword ptr [esp + 4]
            lea eax, [esp + 0xc]
            push eax
            push ecx
            push edx
    }
}
