/*
 * FUN_0074b180 (216 B) — Texture format detection.
 *
 * Inspects a format descriptor (param_1) and writes a result code through
 * param_2, returning a boolean in AL.
 *
 * __stdcall, RET 8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8b2520;
extern int g_8b7a28;

__declspec(naked) unsigned char __stdcall FUN_0074b180(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     edx, dword ptr [esi + 4]
        test    edx, 0x1838
        push    edi
        jnz     L_251
        mov     eax, dword ptr [esi + 0xc]
        cmp     eax, 0x10
        jz      L_1a6
        cmp     eax, 0x20
        jnz     L_251
    L_1a6:
        test    dh, 2
        jnz     L_251
        mov     ecx, dword ptr [g_8b2520]
        test    ch, 0x20
        mov     edi, dword ptr [esp + 0x10]
        mov     dword ptr [edi], 0
        jz      L_1d7
        cmp     eax, 0x10
        jnz     L_1d7
        test    dl, 1
        jz      L_1d7
        cmp     dword ptr [esi + 0x1c], 0xf000
        jz      L_251
    L_1d7:
        test    ecx, 0x4000000
        jz      L_1ec
        cmp     eax, 0x20
        jz      L_251
        test    edx, 0xc0004
        jnz     L_251
    L_1ec:
        test    dl, 4
        jz      L_23f
        mov     eax, dword ptr [esi + 8]
        cmp     eax, 0x31545844
        jnz     L_213
        mov     eax, dword ptr [g_8b7a28]
        inc     eax
        mov     dword ptr [edi], 1
        pop     edi
        mov     dword ptr [g_8b7a28], eax
        mov     al, 1
        pop     esi
        ret     8
    L_213:
        cmp     eax, 0x33545844
        jnz     L_232
        mov     eax, dword ptr [g_8b7a28]
        inc     eax
        mov     dword ptr [edi], 2
        pop     edi
        mov     dword ptr [g_8b7a28], eax
        mov     al, 1
        pop     esi
        ret     8
    L_232:
        cmp     eax, 0x35545844
        jnz     L_251
        mov     dword ptr [edi], 3
    L_23f:
        mov     eax, dword ptr [g_8b7a28]
        inc     eax
        pop     edi
        mov     dword ptr [g_8b7a28], eax
        mov     al, 1
        pop     esi
        ret     8
    L_251:
        pop     edi
        xor     al, al
        pop     esi
        ret     8
    }
}
