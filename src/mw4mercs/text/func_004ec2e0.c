extern void __stdcall FUN_00725080(int a, int b);

__declspec(naked) void __fastcall FUN_004EC2E0(int this, int dummy_edx)
{
    __asm {
        push    esi
        mov     esi, ecx
        cmp     dword ptr [esi + 0x24], 4
        jz      l_skip_all
        mov     eax, [esi + 0x18]
        push    4
        push    eax
        call    FUN_00725080
        mov     edx, [esi]
        mov     ecx, esi
        call    dword ptr [edx + 8]
    l_skip_all:
        pop     esi
        ret
    }
}
