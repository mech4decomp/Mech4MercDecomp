/*
 * FUN_004dabf0 (222 B) — __thiscall. MLR/Adept node setup. Calls
 * FUN_004d8e50, checks flags, and if the node is uninitialized builds
 * a new object (FUN_004d1f80), allocates a 0xa0-byte block
 * (FUN_004084d0), initializes it (FUN_004fec10 / FUN_004fdfc0), and
 * stores it at this+0x124. Finally updates a flag byte.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int           g_007dc574;
extern unsigned short g_007db0ac;
extern unsigned short g_007db0ae;
extern int           g_007dc68c;
extern void __cdecl FUN_004d8e50(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004fec10(void);
extern void __cdecl FUN_004fdfc0(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void FUN_004dabf0(void)
{
    __asm {
        sub     esp, 0x44
        push    ebx
        mov     ebx, dword ptr [esp+0x4c]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [g_007dc574]
        push    ebx
        push    esi
        call    FUN_004d8e50
        mov     eax, dword ptr [esi+0x124]
        test    eax, eax
        jnz     L_aca9
        mov     eax, dword ptr [esi+0x128]
        test    eax, eax
        jnz     L_aca9
        mov     eax, dword ptr [esi+0x78]
        lea     ecx, [esi+0x78]
        call    dword ptr [eax+0x4]
        mov     cx, word ptr [eax+0x10]
        add     eax, 0x10
        cmp     cx, word ptr [g_007db0ac]
        jnz     L_ac4a
        mov     dx, word ptr [eax+0x2]
        cmp     dx, word ptr [g_007db0ae]
        jz      L_aca9
L_ac4a:
        push    edi
        push    0x1
        push    eax
        lea     ecx, [esp+0x14]
        call    FUN_004d1f80
        mov     eax, dword ptr [g_007dc68c]
        push    eax
        call    FUN_006f4950
        push    0xa0
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        jz      L_ac92
        lea     ecx, [esp+0xc]
        push    ecx
        call    FUN_004fec10
        add     esp, 0x4
        push    eax
        lea     edx, [esp+0x10]
        push    edx
        push    esi
        mov     ecx, edi
        call    FUN_004fdfc0
        jmp     L_ac94
L_ac92:
        xor     eax, eax
L_ac94:
        mov     dword ptr [esi+0x124], eax
        call    FUN_006f49a0
        lea     ecx, [esp+0xc]
        call    FUN_004d21c0
        pop     edi
L_aca9:
        mov     eax, dword ptr [esi+0x10]
        neg     bl
        sbb     ebx, ebx
        and     ebx, 0x80
        add     ebx, 0x80
        and     eax, 0xfffffe7f
        or      ebx, eax
        mov     dword ptr [esi+0x10], ebx
        pop     esi
        pop     ebx
        add     esp, 0x44
        ret     0x4
    }
}
