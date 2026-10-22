/*
 * FUN_1001d970 (97 B) - __stdcall (1 arg, RET 0x4). Variant of
 * FUN_1001c6c0: initializes a ZoneStatsClient connection on the object at
 * [arg+0x18], using a channel name selected from [arg+0xd0]/[arg+0xdc].
 * Returns whether the client handle is non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_1001c3b0(void);
extern int __cdecl FUN_1001c300(void);

__declspec(naked) int __cdecl FUN_1001d970(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
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
        jnz     L_d997
        pop     edi
        pop     esi
        ret     0x4
L_d997:
        mov     eax, dword ptr [esi + 0xdc]
        test    eax, eax
        jbe     L_d9a9
        mov     eax, dword ptr [esi + 0xd0]
        jmp     L_d9ae
L_d9a9:
        mov     eax, 0x100274ec
L_d9ae:
        push    0x0
        push    0x3
        push    0x0
        push    0x0
        push    0x50
        push    eax
        mov     ecx, edi
        call    FUN_1001c300
        xor     ecx, ecx
        mov     dword ptr [esi + 0x40], eax
        test    eax, eax
        setnz   cl
        pop     edi
        mov     eax, ecx
        pop     esi
        ret     0x4
    }
}
