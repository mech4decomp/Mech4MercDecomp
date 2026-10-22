// FUN_1004631a (0x1004631A) __cdecl
extern int g_100754d4;
extern int __cdecl FUN_10045e3e(int a, int b, int c);

__declspec(naked) int FUN_1004631a(void)
{
    __asm {
        push esi
        mov esi, dword ptr [g_100754d4]
        push edi
        mov eax, dword ptr [esi]
        test eax, eax
        jz L_46355
        mov edi, dword ptr [esp+0x10]
L_4632c:
        push edi
        push eax
        push dword ptr [esp+0x14]
        call FUN_10045e3e
        add esp, 0xc
        test eax, eax
        jnz L_4634b
        mov eax, dword ptr [esi]
        mov al, byte ptr [eax+edi]
        cmp al, 0x3d
        jz L_46365
        test al, al
        jz L_46365
L_4634b:
        mov eax, dword ptr [esi+0x4]
        add esi, 0x4
        test eax, eax
        jnz L_4632c
L_46355:
        mov eax, esi
        sub eax, dword ptr [g_100754d4]
        sar eax, 0x2
        neg eax
L_46362:
        pop edi
        pop esi
        ret
L_46365:
        mov eax, esi
        sub eax, dword ptr [g_100754d4]
        sar eax, 0x2
        jmp L_46362
    }
}
