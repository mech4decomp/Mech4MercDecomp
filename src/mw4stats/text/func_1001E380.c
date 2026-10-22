/*
 * FUN_1001e380 (125 B) - __stdcall (2 args, RET 0x8). Validates the output
 * pointer via IsBadWritePtr, checks a sub-object at +0x18, and dispatches on
 * its +0xc type field to return a pointer through param_2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021064;   /* IAT: IsBadWritePtr */
extern char g_100274ec;    /* DAT_100274ec */

__declspec(naked) void __cdecl FUN_1001e380(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    0x4
        push    esi
        call    dword ptr [g_10021064]
        test    eax, eax
        jz      L_e39b
        mov     eax, 0x80070057
        pop     esi
        ret     0x8
L_e39b:
        mov     eax, dword ptr [esp + 0x8]
        mov     eax, dword ptr [eax + 0x18]
        test    eax, eax
        jnz     L_e3af
        mov     eax, 0x80040290
        pop     esi
        ret     0x8
L_e3af:
        mov     ecx, dword ptr [eax + 0xc]
        cmp     ecx, 0x7
        jnz     L_e3c6
        mov     dword ptr [esi], 0x0
        mov     eax, 0x80040260
        pop     esi
        ret     0x8
L_e3c6:
        cmp     ecx, 0x1
        jnz     L_e3ee
        mov     ecx, dword ptr [eax + 0x1c]
        test    ecx, ecx
        jz      L_e3ee
        test    ecx, ecx
        jbe     L_e3e1
        mov     eax, dword ptr [eax + 0x10]
        mov     dword ptr [esi], eax
        xor     eax, eax
        pop     esi
        ret     0x8
L_e3e1:
        mov     eax, offset g_100274ec
        mov     dword ptr [esi], eax
        xor     eax, eax
        pop     esi
        ret     0x8
L_e3ee:
        mov     dword ptr [esi], 0x0
        mov     eax, 0x80040286
        pop     esi
        ret     0x8
    }
}
