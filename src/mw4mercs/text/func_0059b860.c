/*
 * 82 bytes — factory function.
 * Creates a temporary stack object, allocates a 0x20-byte object,
 * initializes it, then returns the result.
 * __cdecl.
 */

void FUN_004D1F80(void);
void * FUN_004084D0(int size);
int FUN_0059B6F0(void);
void FUN_004D21C0(void);

__declspec(naked) void FUN_0059B860(void)
{
    __asm {
        sub     esp, 0x44
        push    esi
        push    1
        lea     eax, dword ptr [esp + 0x50]
        push    eax
        lea     ecx, dword ptr [esp + 0xC]
        call    FUN_004D1F80
        push    0x20
        call    FUN_004084D0
        add     esp, 4
        test    eax, eax
        je      null_path

        lea     ecx, dword ptr [esp + 4]
        push    ecx
        mov     ecx, eax
        call    FUN_0059B6F0
        lea     ecx, dword ptr [esp + 4]
        mov     esi, eax
        call    FUN_004D21C0
        mov     eax, esi
        pop     esi
        add     esp, 0x44
        ret

    null_path:
        lea     ecx, dword ptr [esp + 4]
        xor     esi, esi
        call    FUN_004D21C0
        mov     eax, esi
        pop     esi
        add     esp, 0x44
        ret
    }
}
