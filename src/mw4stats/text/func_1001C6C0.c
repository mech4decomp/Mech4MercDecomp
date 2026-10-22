/*
 * FUN_1001c6c0 (92 B) - __fastcall. Initializes a ZoneStatsClient connection:
 * calls FUN_1001c3b0 to create the client, then FUN_1001c300 to open a
 * channel. Returns whether the client handle is non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_1001c3b0(void);
extern int __cdecl FUN_1001c300(void);

__declspec(naked) int __cdecl FUN_1001c6c0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        push    0x0
        lea     edi, [esi + 0x18]
        push    0x0
        push    0x0
        push    0x100269ec
        mov     ecx, edi
        call    FUN_1001c3b0
        test    eax, eax
        mov     dword ptr [esi + 0x44], eax
        jnz     L_c6e3
        pop     edi
        pop     esi
        ret
L_c6e3:
        mov     eax, dword ptr [esi + 0x158]
        test    eax, eax
        jbe     L_c6f5
        mov     eax, dword ptr [esi + 0x14c]
        jmp     L_c6fa
L_c6f5:
        mov     eax, 0x100274ec
L_c6fa:
        push    0x0
        push    0x3
        push    0x0
        push    0x0
        push    0x50
        push    eax
        mov     ecx, edi
        call    FUN_1001c300
        mov     ecx, dword ptr [esi + 0x44]
        mov     dword ptr [esi + 0x40], eax
        xor     eax, eax
        pop     edi
        test    ecx, ecx
        setnz   al
        pop     esi
        ret
    }
}
