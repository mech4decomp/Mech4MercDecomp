// FUN_00536360 (71 bytes)
extern void __cdecl FUN_0070e390(void *a);
extern void __cdecl FUN_0070e3c0(void *a, void *b, int c);
extern void __cdecl FUN_0070e460(void *a, void *b);

__declspec(naked) void func_00536360(void)
{
    __asm {
        sub     esp, 0x68
        lea     eax, [esp + 0x10]
        push    eax
        call    FUN_0070e390
        push    0x08
        lea     ecx, [esp + 0x70]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        call    FUN_0070e3c0
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x04]
        push    ecx
        call    FUN_0070e460
        mov     edx, dword ptr [esp + 0x08]
        /* __emit: MSVC6 collapses zero-disp [esp+0] to 8B 04 24; need 8B 44 24 00 */
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00
        mov     ecx, dword ptr [esp + 0x0c]
        xor     eax, edx
        mov     edx, dword ptr [esp + 0x04]
        xor     edx, ecx
        add     esp, 0x68
        ret     0x08
    }
}
