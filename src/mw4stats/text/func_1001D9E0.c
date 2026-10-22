/*
 * FUN_1001d9e0 (174 B) - __stdcall (1 arg, RET 0x4). Connects a stats
 * client: if not already connected, calls FUN_1001d970 to open the client
 * (incrementing a retry counter at [esi+0xa4]); then calls FUN_1001c100 to
 * send a connect request. Returns 3 on failure, else a status derived from
 * [esi+0x58].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_1001d970(void);
extern int __cdecl FUN_1001c100(void);

__declspec(naked) int __cdecl FUN_1001d9e0(void)
{
    __asm {
        sub     esp, 0x8
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x4], 0x10026a2c
        mov     dword ptr [esp + 0x8], 0x0
        mov     eax, dword ptr [esi + 0x44]
        test    eax, eax
        jnz     L_da2f
        mov     eax, dword ptr [esi + 0x40]
        test    eax, eax
        jnz     L_da2f
        mov     eax, dword ptr [esi + 0xa4]
        push    esi
        inc     eax
        mov     dword ptr [esi + 0xa4], eax
        call    FUN_1001d970
        test    eax, eax
        jnz     L_da29
        mov     eax, 0x3
        pop     esi
        add     esp, 0x8
        ret     0x4
L_da29:
        inc     dword ptr [esi + 0xa8]
L_da2f:
        mov     eax, dword ptr [esi + 0x174]
        test    eax, eax
        jbe     L_da41
        mov     eax, dword ptr [esi + 0x168]
        jmp     L_da46
L_da41:
        mov     eax, 0x100274ec
L_da46:
        lea     ecx, [esp + 0x4]
        push    0x4000000
        push    ecx
        push    0x100269ec
        push    0x10026a18
        push    eax
        push    0x10026a0c
        lea     ecx, [esi + 0x18]
        call    FUN_1001c100
        mov     al, byte ptr [esi + 0x49]
        test    al, al
        jnz     L_da7b
        mov     eax, 0x3
        pop     esi
        add     esp, 0x8
        ret     0x4
L_da7b:
        mov     eax, dword ptr [esi + 0x58]
        pop     esi
        neg     eax
        sbb     eax, eax
        and     al, 0xfd
        add     eax, 0x3
        add     esp, 0x8
        ret     0x4
    }
}
