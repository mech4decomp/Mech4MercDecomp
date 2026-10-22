/*
 * FUN_004c8f70 (188 B) — __cdecl, no args, returns char. Registry
 * telephony-location check: opens HKLM key, enumerates subkeys, closes,
 * and calls a function pointer (g_007dac50). Uses IAT calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00704820(void);
extern char  g_007dac4c;
extern int*  g_0085a230;
extern int   g_00858bf8;
extern int*  g_0076b014;   /* RegOpenKeyA */
extern int*  g_0076b010;   /* RegEnumKeyExA */
extern int*  g_0076b00c;   /* RegCloseKey */
extern int*  g_007dac50;   /* function pointer */

__declspec(naked) void FUN_004c8f70(void)
{
    __asm {
        mov     al, byte ptr [g_007dac4c]
        sub     esp, 0x410
        test    al, al
        jnz     L_8f88
        xor     al, al
        add     esp, 0x410
        ret
    L_8f88:
        mov     eax, dword ptr [g_0085a230]
        test    eax, eax
        jz      L_8f97
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x28]
    L_8f97:
        /* __emit: MSVC6 drops the 00 disp byte for lea edx,[esp] (8D 14 24); ref needs 8D 54 24 00 */
        __emit 0x8D
        __emit 0x54
        __emit 0x24
        __emit 0x00
        push    edx
        push    0x7718a8
        push    0x80000002
        call    dword ptr [g_0076b014]
        test    eax, eax
        jnz     L_900c
        lea     eax, [esp + 0x8]
        push    eax
        mov     eax, dword ptr [esp + 0x4]
        push    0x0
        push    0x0
        push    0x0
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0x24]
        push    edx
        push    0x0
        push    eax
        mov     dword ptr [esp + 0x24], 0x400
        call    dword ptr [g_0076b010]
        test    eax, eax
        jnz     L_9001
        /* __emit: MSVC6 drops the 00 disp byte for mov ecx,[esp] (8B 0C 24); ref needs 8B 4C 24 00 */
        __emit 0x8B
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        push    ecx
        call    dword ptr [g_0076b00c]
        mov     edx, dword ptr [g_00858bf8]
        push    0x0
        push    edx
        call    dword ptr [g_007dac50]
        xor     al, al
        add     esp, 0x410
        ret
    L_9001:
        /* __emit: MSVC6 drops the 00 disp byte for mov eax,[esp] (8B 04 24); ref needs 8B 44 24 00 */
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push    eax
        call    dword ptr [g_0076b00c]
    L_900c:
        push    0x0
        push    0x8
        call    FUN_00704820
        push    0x0
        push    0x0
        call    dword ptr [g_007dac50]
        neg     eax
        sbb     al, al
        inc     al
        add     esp, 0x410
        ret
    }
}
