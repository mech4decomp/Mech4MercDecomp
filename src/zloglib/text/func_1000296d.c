/* auto-transcribed gap function 0x1000296D (445 B); review against reference; stepping stone */
extern int g_10003000;
extern int g_10003014;
extern int g_10003048;
extern int g_1000304c;
extern int g_10003054;
extern int g_1000305c;
extern int g_10003060;
extern int g_10003064;
extern int g_10003068;
extern int g_10003070;
extern int g_10027024;
extern int g_100274ac;
extern int g_100274b0;
extern int g_100274b4;
extern int g_100274b8;
__declspec(naked) void FUN_1000296d(void)
{
    __asm {
            int 3
            jmp dword ptr [g_10003070]
            jmp dword ptr [g_10003068]
            jmp dword ptr [g_10003014]
            push ecx
            cmp eax, 0x1000
            lea ecx, [esp + 8]
            jb lbl_100029a0
        lbl_1000298c:
            sub ecx, 0x1000
            sub eax, 0x1000
            test dword ptr [ecx], eax
            cmp eax, 0x1000
            jae lbl_1000298c
        lbl_100029a0:
            sub ecx, eax
            mov eax, esp
            test dword ptr [ecx], eax
            mov esp, ecx
            mov ecx, dword ptr [eax]
            mov eax, dword ptr [eax + 4]
            push eax
            ret
            int 3
            jmp dword ptr [g_10003048]
            jmp dword ptr [g_1000304c]
        lbl_100029bc:
            mov eax, dword ptr [esp + 8]
            test eax, eax
            jne lbl_100029d2
            cmp dword ptr [g_10027024], eax
            jle lbl_100029fa
            dec dword ptr [g_10027024]
        lbl_100029d2:
            mov ecx, dword ptr [g_10003064]
            cmp eax, 1
            mov ecx, dword ptr [ecx]
            mov dword ptr [g_100274ac], ecx
            jne lbl_10002a24
            push 0x80
            call dword ptr [g_10003060]
            test eax, eax
            pop ecx
            mov dword ptr [g_100274b4], eax
            jne lbl_100029fe
        lbl_100029fa:
            xor eax, eax
            jmp lbl_10002a64
        lbl_100029fe:
            and dword ptr [eax], 0
            mov eax, dword ptr [g_100274b4]
            push 0x10004004
            push 0x10004000
            mov dword ptr [g_100274b0], eax
            call lbl_10002b04
            inc dword ptr [g_10027024]
            pop ecx
            pop ecx
            jmp lbl_10002a61
        lbl_10002a24:
            test eax, eax
            jne lbl_10002a61
            mov eax, dword ptr [g_100274b4]
            test eax, eax
            je lbl_10002a61
            mov ecx, dword ptr [g_100274b0]
            push esi
            lea esi, [ecx - 4]
        lbl_10002a3b:
            cmp esi, eax
            jb lbl_10002a51
            mov ecx, dword ptr [esi]
            test ecx, ecx
            je lbl_10002a4c
            call ecx
            mov eax, dword ptr [g_100274b4]
        lbl_10002a4c:
            sub esi, 4
            jmp lbl_10002a3b
        lbl_10002a51:
            push eax
            call dword ptr [g_10003054]
            and dword ptr [g_100274b4], 0
            pop ecx
            pop esi
        lbl_10002a61:
            push 1
            pop eax
        lbl_10002a64:
            ret 0xc
            push ebp
            mov ebp, esp
            push ebx
            mov ebx, dword ptr [ebp + 8]
            push esi
            mov esi, dword ptr [ebp + 0xc]
            push edi
            mov edi, dword ptr [ebp + 0x10]
            test esi, esi
            jne lbl_10002a83
            cmp dword ptr [g_10027024], 0
            jmp lbl_10002aa9
        lbl_10002a83:
            cmp esi, 1
            je lbl_10002a8d
            cmp esi, 2
            jne lbl_10002aaf
        lbl_10002a8d:
            mov eax, dword ptr [g_100274b8]
            test eax, eax
            je lbl_10002a9f
            push edi
            push esi
            push ebx
            call eax
            test eax, eax
            je lbl_10002aab
        lbl_10002a9f:
            push edi
            push esi
            push ebx
            call lbl_100029bc
            test eax, eax
        lbl_10002aa9:
            jne lbl_10002aaf
        lbl_10002aab:
            xor eax, eax
            jmp lbl_10002afd
        lbl_10002aaf:
            push edi
            push esi
            push ebx
            call lbl_10002b0a
            cmp esi, 1
            mov dword ptr [ebp + 0xc], eax
            jne lbl_10002acb
            test eax, eax
            jne lbl_10002afa
            push edi
            push eax
            push ebx
            call lbl_100029bc
        lbl_10002acb:
            test esi, esi
            je lbl_10002ad4
            cmp esi, 3
            jne lbl_10002afa
        lbl_10002ad4:
            push edi
            push esi
            push ebx
            call lbl_100029bc
            test eax, eax
            jne lbl_10002ae3
            and dword ptr [ebp + 0xc], eax
        lbl_10002ae3:
            cmp dword ptr [ebp + 0xc], 0
            je lbl_10002afa
            mov eax, dword ptr [g_100274b8]
            test eax, eax
            je lbl_10002afa
            push edi
            push esi
            push ebx
            call eax
            mov dword ptr [ebp + 0xc], eax
        lbl_10002afa:
            mov eax, dword ptr [ebp + 0xc]
        lbl_10002afd:
            pop edi
            pop esi
            pop ebx
            pop ebp
            ret 0xc
        lbl_10002b04:
            jmp dword ptr [g_1000305c]
        lbl_10002b0a:
            cmp dword ptr [esp + 8], 1
            jne lbl_10002b24
            cmp dword ptr [g_100274b8], 0
            jne lbl_10002b24
            push dword ptr [esp + 4]
            call dword ptr [g_10003000]
        lbl_10002b24:
            push 1
            pop eax
            ret 0xc
    }
}
