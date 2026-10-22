/* func_0073DFC0.c -- in-.text data block (block 0x73D430), 401 bytes.
   Two functions: a large initializer that frees a free-list, sets up a
   buffer, and calls FUN_0073D750 in a loop; plus a bare ret. */

extern int g_8aba8c;
extern int g_8aaf40;
extern int g_8aaf3c;
extern int g_8ab9d8;
extern int g_8ab9d4;
extern int g_8ab9d0;
extern int g_87bbf8;
extern int g_87bc48;
extern int g_8ab960;
extern int g_8ab980;
extern int g_8ab9a0;
extern int g_8ab9c0;
extern int g_8ab968;
extern int g_8ab988;
extern int g_8ab9a8;
extern int g_8ab9c8;
extern int g_8ab96c;
extern int g_8ab98c;
extern int g_8ab9ac;
extern int g_8ab9cc;
extern int g_8ab958;
extern int g_8ab978;
extern int g_8ab998;
extern int g_8ab9b8;
extern int g_8ab95c;
extern int g_8ab97c;
extern int g_8ab99c;
extern int g_8ab9bc;

extern void FUN_006F4230(void);
extern void FUN_0073D750(void);

__declspec(naked) void func_0073DFC0(void)
{
    __asm {
        mov eax, dword ptr [g_8aba8c]
        test eax, eax
        je L_73dfe0
L_73dfc9:
        mov ecx, dword ptr [eax]
        push eax
        mov dword ptr [g_8aba8c], ecx
        call FUN_006F4230
        mov eax, dword ptr [g_8aba8c]
        test eax, eax
        jne L_73dfc9
L_73dfe0:
        mov edx, dword ptr [g_8aaf40]
        mov eax, dword ptr [g_8aaf3c]
        push esi
        add edx, 4
        add eax, 0x14c
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov dword ptr [g_8ab9d8], edx
        mov dword ptr [g_8ab9d4], eax
        mov dword ptr [g_8ab9d0], 0
        mov esi, 0x1000
L_73e013:
        push edi
        push esi
        call FUN_0073D750
        sar esi, 1
        cmp esi, 4
        jge L_73e013
        mov ecx, dword ptr [g_8aaf3c]
        mov eax, dword ptr [g_8ab9d4]
        mov edx, ecx
        sub edx, eax
        mov eax, dword ptr [g_87bbf8]
        add edx, 0x28c
        cmp eax, edx
        jge L_73e046
        mov eax, edx
        mov dword ptr [g_87bbf8], eax
L_73e046:
        test eax, eax
        jle L_73e051
        xor eax, eax
        mov dword ptr [g_87bbf8], eax
L_73e051:
        mov edx, dword ptr [g_8aaf40]
        lea eax, [eax + ecx + 0x12]
        mov ecx, dword ptr [g_87bc48]
        mov dword ptr [g_8ab9d4], eax
        lea eax, [ecx + 0xffffff]
        add edx, 4
        mov dword ptr [g_8ab9d8], edx
        mov dword ptr [g_8ab9d0], 0
        mov dword ptr [g_8ab960], eax
        mov dword ptr [g_8ab980], eax
        mov dword ptr [g_8ab9a0], eax
        mov dword ptr [g_8ab9c0], eax
        mov dword ptr [g_8ab968], 0
        mov dword ptr [g_8ab988], 0
        mov dword ptr [g_8ab9a8], 0x3f800000
        mov dword ptr [g_8ab9c8], 0x3f800000
        mov dword ptr [g_8ab96c], 0
        mov dword ptr [g_8ab98c], 0x3f800000
        mov dword ptr [g_8ab9ac], 0x3f800000
        mov dword ptr [g_8ab9cc], 0
        mov dword ptr [g_8ab958], 0
        mov dword ptr [g_8ab978], 0
        mov dword ptr [g_8ab998], 0
        mov dword ptr [g_8ab9b8], 0
        mov dword ptr [g_8ab95c], 0x3f800000
        mov dword ptr [g_8ab97c], 0x3f800000
        mov dword ptr [g_8ab99c], 0x3f800000
        mov dword ptr [g_8ab9bc], 0x3f800000
        mov esi, 0x1000
L_73e138:
        push edi
        push esi
        call FUN_0073D750
        sar esi, 1
        cmp esi, 4
        jge L_73e138
        pop edi
        pop esi
        ret 4
        nop
        nop
        nop
        nop
        nop
        ret
    }
}
