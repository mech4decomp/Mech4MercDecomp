/*
 * FUN_10044328 (94 B) - __cdecl.  Compares two 3-dword structs
 * (arg1, arg2) field-by-field via FUN_10044307, incrementing
 * arg1[2] on each successful match (with a special 2nd-field pass
 * using constant 1).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __cdecl FUN_10044307(int a, int b, int c);

__declspec(naked) void FUN_10044328(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        push    esi
        push    dword ptr [edi]
        push    dword ptr [esi]
        call    FUN_10044307
        add     esp, 0xc
        test    eax, eax
        je      L_skip1
        lea     eax, [esi + 4]
        push    eax
        push    1
        push    dword ptr [eax]
        call    FUN_10044307
        add     esp, 0xc
        test    eax, eax
        je      L_skip1
        inc     dword ptr [esi + 8]
L_skip1:
        lea     eax, [esi + 4]
        push    eax
        push    dword ptr [edi + 4]
        push    dword ptr [eax]
        call    FUN_10044307
        add     esp, 0xc
        test    eax, eax
        je      L_skip2
        inc     dword ptr [esi + 8]
L_skip2:
        lea     eax, [esi + 8]
        push    eax
        push    dword ptr [edi + 8]
        push    dword ptr [eax]
        call    FUN_10044307
        add     esp, 0xc
        pop     edi
        pop     esi
        ret
    }
}
