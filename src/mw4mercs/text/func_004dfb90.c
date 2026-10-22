extern void __cdecl FUN_004DD8B0(int a, int b);

extern void __cdecl FUN_004DD8B0(int a, int b);

__declspec(naked) void __fastcall FUN_004DFB90(int this, int dummy_edx, int param1, int param2)
{
    __asm {
        mov     edx, [esp + 4]
        mov     eax, [edx]
        cmp     [ecx + 0x18], eax
        jz      l_skip_all
        mov     [ecx + 0x18], eax
        mov     eax, [esp + 8]
        push    eax
        push    edx
        call    FUN_004DD8B0
    l_skip_all:
        ret     8
    }
}
