/*
 * FUN_100077A0 (129 B) - __stdcall, RET 0x4.  Crypto helper: validates
 * arg1->field_0x00, destroys a prior hash (IAT 0x1004904c), then creates a
 * hash via IAT 0x10049000 using a string selected by arg1->field_0x01
 * (0x100501bc / 0x10050194).  Maps GetLastError (IAT 0x100490e4) into an
 * HRESULT.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490e4;   /* IAT: GetLastError */
extern void *g_1004904c;   /* IAT: crypto routine (CryptDestroyHash-family) */
extern void *g_10049000;   /* IAT: crypto routine (CryptCreateHash-family) */

__declspec(naked) void __stdcall FUN_100077A0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     al, byte ptr [esi]
        push    edi
        xor     edi, edi
        test    al, al
        jne     L_77ba
        pop     edi
        pop     esi
        mov     eax, 0xc1120008
        pop     ebx
        ret     0x4
L_77ba:
        mov     eax, dword ptr [esi + 8]
        cmp     eax, edi
        mov     ebx, dword ptr [g_100490e4]
        je      L_77d8
        push    edi
        push    eax
        call    dword ptr [g_1004904c]
        test    eax, eax
        jne     L_77d5
        call    ebx
L_77d5:
        mov     dword ptr [esi + 8], edi
L_77d8:
        mov     al, byte ptr [esi + 1]
        test    al, al
        mov     eax, 0x100501bc
        jne     L_77e9
        mov     eax, 0x10050194
L_77e9:
        push    0x10
        push    1
        push    eax
        mov     eax, dword ptr [esi + 4]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        call    dword ptr [g_10049000]
        test    eax, eax
        jne     L_7819
        call    ebx
        cmp     eax, edi
        jl      L_781b
        jle     L_781b
        pop     edi
        and     eax, 0xffff
        pop     esi
        or      eax, 0x80070000
        pop     ebx
        ret     0x4
L_7819:
        mov     eax, edi
L_781b:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
