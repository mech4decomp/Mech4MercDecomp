/*
 * FUN_1001c300 (169 B) - __thiscall (6 args, RET 0x18). InternetConnectW
 * wrapper: if *this != 0 connect with context this+0x30, wait via
 * FUN_1001c040 (120000 ms), and return the handle or clean up via
 * FUN_1001c2f0; else connect without context.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_1002116c;   /* IAT: InternetConnectW */
extern void __cdecl FUN_1001c040(void);
extern void __cdecl FUN_1001c2f0(void);

__declspec(naked) void __cdecl FUN_1001c300(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        cmp     dword ptr [esi], 0x0
        jz      L_c37a
        mov     eax, dword ptr [esi + 0x20]
        mov     edx, dword ptr [esp + 0x20]
        lea     ecx, [esi + 0x30]
        mov     dword ptr [esi + 0x3c], eax
        mov     eax, dword ptr [esp + 0x1c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x1c]
        push    edx
        mov     edx, dword ptr [esp + 0x1c]
        push    eax
        mov     eax, dword ptr [esp + 0x1c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x1c]
        push    edx
        mov     edx, dword ptr [esi + 0x2c]
        push    eax
        push    ecx
        push    edx
        mov     dword ptr [esi + 0x34], 0x1
        call    dword ptr [g_1002116c]
        mov     edi, eax
        lea     eax, [esp + 0x20]
        push    eax
        push    0x1d4c0
        mov     ecx, esi
        call    FUN_1001c040
        test    al, al
        jnz     L_c368
L_c359:
        push    edi
        mov     ecx, esi
        call    FUN_1001c2f0
        pop     edi
        xor     eax, eax
        pop     esi
        ret     0x18
L_c368:
        test    edi, edi
        jz      L_c359
        mov     al, byte ptr [esi + 0x31]
        test    al, al
        jz      L_c359
        mov     eax, edi
        pop     edi
        pop     esi
        ret     0x18
L_c37a:
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x18]
        push    0x0
        push    ecx
        mov     ecx, dword ptr [esp + 0x1c]
        push    edx
        mov     edx, dword ptr [esp + 0x1c]
        push    eax
        mov     eax, dword ptr [esp + 0x1c]
        push    ecx
        mov     ecx, dword ptr [esi + 0x2c]
        push    edx
        push    eax
        push    ecx
        call    dword ptr [g_1002116c]
        pop     edi
        pop     esi
        ret     0x18
    }
}
