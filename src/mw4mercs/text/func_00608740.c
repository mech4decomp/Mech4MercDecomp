/*
 * FUN_00608740 (430 B) — animation-blend/archive subsystem. Iterates
 * several object lists (via FUN_00416cc0 iterators) and dispatches
 * per-item work through FUN_00609590.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;

extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_00531f40(void);
extern void __cdecl FUN_00609590(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_00532030(void);
extern void __cdecl FUN_005dec20(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void FUN_00608740(void)
{
    __asm {
        sub     esp, 0x6c
        mov     eax, dword ptr [g_007dab44]
        push    ebx
        push    esi
        mov     ebx, ecx
        mov     ecx, dword ptr [eax]
        push    edi
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x24]
        add     eax, 0x34
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x20], 0x77a3cc
        call    FUN_00416cc0
        mov     edi, eax
        test    edi, edi
        jz      L_6087eb
L_608785:
        push    1
        lea     ecx, [edi + 0x14]
        push    ecx
        lea     ecx, [esp + 0x3c]
        call    FUN_004d1f80
        mov     edx, dword ptr [esp + 0x48]
        mov     esi, dword ptr [edx + 0x30]
        test    esi, esi
        jl      L_6087d3
        cmp     esi, 0x7b
        jg      L_6087d3
        mov     edi, dword ptr [edi + 0x1c]
        test    edi, edi
        jle     L_6087d3
L_6087ab:
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0xc]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_00531f40
        push    eax
        push    esi
        mov     ecx, ebx
        call    FUN_00609590
        dec     edi
        jnz     L_6087ab
L_6087d3:
        lea     ecx, [esp + 0x34]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x20]
        call    FUN_00416cc0
        mov     edi, eax
        test    edi, edi
        jnz     L_608785
L_6087eb:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx + 0x44]
        xor     eax, 0x85739531
        add     eax, 0x54
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00416bc0
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0xc], 0x779f0c
        call    FUN_00416cc0
        test    eax, eax
        jz      L_608873
L_608823:
        mov     ecx, dword ptr [eax + 0x20]
        cmp     ecx, 2
        jz      L_608866
        cmp     ecx, 1
        jz      L_608866
        cmp     ecx, 3
        jz      L_608866
        mov     ecx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [ecx]
        mov     edx, dword ptr [g_007dab40]
        mov     esi, dword ptr [eax + 0x24]
        xor     ecx, edx
        mov     ecx, dword ptr [ecx + 0xc]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_00532030
        push    eax
        add     esi, 0x96
        push    esi
        mov     ecx, ebx
        call    FUN_00609590
L_608866:
        lea     ecx, [esp + 0xc]
        call    FUN_00416cc0
        test    eax, eax
        jnz     L_608823
L_608873:
        mov     edx, dword ptr [g_007dab44]
        mov     esi, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, esi
        mov     ecx, dword ptr [eax + 0x44]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx + 0x38]
        mov     esi, dword ptr [eax + 0x10]
        add     eax, 0x10
        test    esi, esi
        jz      L_6088d5
L_608895:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      L_6088d5
        mov     al, byte ptr [ecx + 0x24]
        test    al, al
        /* __emit: backward jz to L_608895; MSVC6 miscomputes rel by +4 (call-reloc in loop) */
        __emit  0x74
        __emit  0xEC
        mov     eax, dword ptr [ecx + 0x6c]
        cmp     eax, 1
        jz      L_6088b6
        cmp     eax, 2
        /* __emit: backward jnz to L_608895; MSVC6 miscomputes rel by +4 */
        __emit  0x75
        __emit  0xDF
L_6088b6:
        mov     eax, dword ptr [ecx + 0x20]
        test    eax, eax
        /* __emit: backward jnz to L_608895; MSVC6 miscomputes rel by +4 */
        __emit  0x75
        __emit  0xD8
        mov     eax, dword ptr [ecx + 0x10]
        push    eax
        call    FUN_005dec20
        add     eax, 0xc8
        push    eax
        mov     ecx, ebx
        call    FUN_00609590
        /* __emit: backward jmp to L_608895; MSVC6 miscomputes rel by +4 */
        __emit  0xEB
        __emit  0xC0
L_6088d5:
        lea     ecx, [esp + 0xc]
        call    FUN_00416c60
        lea     ecx, [esp + 0x20]
        call    FUN_00416c60
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x6c
        ret
    }
}
