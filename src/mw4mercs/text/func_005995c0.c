/*
 * 84 bytes — __thiscall release/decrement function.
 * Calls a function, decrements refcount on result, frees result,
 * then decrements this->field_4.
 * ret 4 (one stack param).
 */

void FUN_00410500(void);
void FUN_004084E0(void *ptr);

__declspec(naked) void FUN_005995C0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    edi
        lea     ecx, dword ptr [eax + 0xC]
        push    ecx
        lea     edx, dword ptr [eax + 8]
        push    edx
        add     eax, 4
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        call    FUN_00410500
        mov     edi, eax
        mov     eax, dword ptr [edi + 0x10]
        add     esp, 0x10
        test    eax, eax
        je      free_edi
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     free_edi
        push    eax
        call    FUN_004084E0
        add     esp, 4

    free_edi:
        test    edi, edi
        je      dec_counter
        push    edi
        call    FUN_004084E0
        add     esp, 4

    dec_counter:
        mov     eax, dword ptr [esi + 4]
        dec     eax
        pop     edi
        mov     dword ptr [esi + 4], eax
        pop     esi
        ret     4
    }
}
