/*
 * FUN_100075E0 (122 B) - __stdcall, RET 0x8.  Crypto helper: acquires a
 * provider via FUN_10007ac0, computes a key-flag word from arg1->field_0x01
 * and arg2, then calls an IAT crypto routine (0x1004900c) with (key, 1,
 * flags, &local), storing the result into arg1->field_0x0c.  Maps
 * GetLastError (IAT 0x100490e4) into an HRESULT.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004900c;   /* IAT: crypto routine (CryptExportKey-family) */
extern void *g_100490e4;   /* IAT: GetLastError */
extern void __stdcall FUN_10007ac0(void);   /* rel32 call, RET 0x8 (2 args) */

__declspec(naked) void __stdcall FUN_100075E0(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        push    1
        push    esi
        mov     dword ptr [esp + 0x10], 0
        call    FUN_10007ac0
        mov     edi, eax
        test    edi, edi
        jl      L_7652
        mov     al, byte ptr [esi + 1]
        mov     cl, byte ptr [esp + 0x14]
        neg     al
        sbb     eax, eax
        and     eax, 0xfa000000
        add     eax, 0x8000000
        test    cl, cl
        je      L_7619
        or      eax, 1
L_7619:
        mov     edx, dword ptr [esi + 8]
        lea     ecx, [esp + 8]
        push    ecx
        push    eax
        push    1
        push    edx
        call    dword ptr [g_1004900c]
        test    eax, eax
        jne     L_764b
        call    dword ptr [g_100490e4]
        test    eax, eax
        jl      L_7654
        jle     L_7654
        and     eax, 0xffff
        pop     edi
        or      eax, 0x80070000
        pop     esi
        pop     ecx
        ret     0x8
L_764b:
        mov     eax, dword ptr [esp + 8]
        mov     dword ptr [esi + 0xc], eax
L_7652:
        mov     eax, edi
L_7654:
        pop     edi
        pop     esi
        pop     ecx
        ret     0x8
    }
}
