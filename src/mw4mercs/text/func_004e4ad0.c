extern void __stdcall FUN_004F0810(int a);

__declspec(naked) void __fastcall FUN_004E4AD0(int this, int dummy_edx, int param1)
{
    __asm {
        push    esi
        mov     esi, [esp + 8]
        push    esi
        call    FUN_004F0810
        mov     eax, [esi]
        push    4
        lea     ecx, [esp + 0x0c]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        pop     esi
        ret     4
    }
}
