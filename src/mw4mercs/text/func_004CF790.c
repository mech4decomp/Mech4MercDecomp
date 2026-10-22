/*
 * FUN_004CF790 (138 B) — __stdcall RET 0x8 (2 params). Gets an object via
 * FUN_006F89F0, calls FUN_006F5B80 with a string (0x79fad4), does a
 * byte-wise string compare against 0x79fb40, and on match calls a virtual
 * method (vtable+8) with two strings. Returns bool.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006F89F0(void);
extern void __cdecl FUN_006F5B80(void);

__declspec(naked) void FUN_004CF790(void)
{
    __asm {
        push    ebp
        push    edi
        call    FUN_006F89F0
        mov     edi, eax
        test    edi, edi
        jne     L4cf7a4
        pop     edi
        xor     al, al
        pop     ebp
        ret     8
    L4cf7a4:
        mov     ebp, dword ptr [esp + 0x10]
        push    0x79fad4
        push    ebp
        mov     ecx, edi
        call    FUN_006F5B80
        test    eax, eax
        jne     L4cf7c0
        pop     edi
        xor     al, al
        pop     ebp
        ret     8
    L4cf7c0:
        push    ebx
        push    esi
        mov     esi, 0x79fb40
    L4cf7c7:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jne     L4cf7ef
        test    cl, cl
        je      L4cf7eb
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jne     L4cf7ef
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     L4cf7c7
    L4cf7eb:
        xor     eax, eax
        jmp     L4cf7f4
    L4cf7ef:
        sbb     eax, eax
        sbb     eax, -1
    L4cf7f4:
        test    eax, eax
        pop     esi
        pop     ebx
        je      L4cf801
        pop     edi
        xor     al, al
        pop     ebp
        ret     8
    L4cf801:
        mov     eax, dword ptr [edi]
        push    0x771d60
        push    0x79fae8
        push    ebp
        mov     ecx, edi
        call    dword ptr [eax + 8]
        pop     edi
        mov     al, 1
        pop     ebp
        ret     8
    }
}
