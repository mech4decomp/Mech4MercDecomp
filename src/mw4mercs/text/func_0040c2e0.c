/*
 * FUN_0040c2e0 (97 B) — __thiscall buffer-resize helper. If the requested
 * count differs from the stored count, frees the old buffer and allocates
 * a new one of count*0xc bytes (FUN_004084d0), storing it at [EDI].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004084d0(void);

__declspec(naked) void FUN_0040c2e0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+8]
        push    edi
        mov     edi, ecx
        cmp     esi, dword ptr [edi+4]
        jz      L_0040c33c
        test    esi, esi
        jbe     L_0040c32b
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      L_0040c300
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_0040c300:
        lea     eax, [esi+esi*2]
        shl     eax, 2
        push    eax
        mov     dword ptr [edi+4], esi
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_0040c322
        dec     esi
        mov     dword ptr [edi], eax
        pop     edi
        mov     dword ptr [esp+8], esi
        pop     esi
        ret     4
    L_0040c322:
        xor     eax, eax
        mov     dword ptr [edi], eax
        pop     edi
        pop     esi
        ret     4
    L_0040c32b:
        mov     ecx, dword ptr [edi]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi], 0
    L_0040c33c:
        pop     edi
        pop     esi
        ret     4
    }
}
