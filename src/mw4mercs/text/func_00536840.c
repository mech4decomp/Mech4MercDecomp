// FUN_00536840 (79 bytes)
extern void __cdecl FUN_00539d10(void);
extern void __cdecl FUN_00544b60(void);
extern void __cdecl FUN_0040dca0(void);
extern void __cdecl FUN_0040de20(void);

__declspec(naked) void func_00536840(void)
{
    __asm {
        sub     esp, 0x50
        push    esi
        mov     esi, ecx
        call    FUN_00539d10
        mov     ecx, esi
        call    FUN_00544b60
        push    0x01
        push    0x00
        push    0x76c6b4
        lea     ecx, [esp + 0x10]
        call    FUN_0040dca0
        mov     ecx, dword ptr [esp + 0x58]
        mov     esi, dword ptr [esi + 0x50]
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 4]
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x10]
        lea     ecx, [esp + 4]
        call    FUN_0040de20
        pop     esi
        add     esp, 0x50
        ret     0x04
    }
}
