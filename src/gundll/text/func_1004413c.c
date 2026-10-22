/*
 * FUN_1004413c (164 B) — __cdecl.
 * Iterates a global object array, invoking per-object handlers based on
 * flags and a mode parameter; returns a count or a flag accumulator.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10039b19(void);
extern void __cdecl FUN_10039b7a(void);
extern void __cdecl FUN_10040cbd(void);
extern void __cdecl FUN_10040d0f(void);
extern void __cdecl FUN_100440a9(void);
extern int g_10076840;
extern int g_10075820;

__declspec(naked) void __cdecl FUN_1004413c(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        push    0x2
        xor     ebx, ebx
        xor     edi, edi
        call    FUN_10039b19
        xor     esi, esi
        pop     ecx
        cmp     dword ptr [g_10076840], esi
        jle     L_c9
    L_55:
        mov     eax, dword ptr [g_10075820]
        mov     eax, dword ptr [eax + esi*0x4]
        test    eax, eax
        jz      L_c0
        test    byte ptr [eax + 0xc], 0x83
        jz      L_c0
        push    eax
        push    esi
        call    FUN_10040cbd
        mov     eax, dword ptr [g_10075820]
        pop     ecx
        pop     ecx
        mov     eax, dword ptr [eax + esi*0x4]
        mov     ecx, dword ptr [eax + 0xc]
        test    cl, 0x83
        jz      L_b0
        cmp     dword ptr [esp + 0x10], 0x1
        jnz     L_96
        push    eax
        call    FUN_100440a9
        cmp     eax, -1
        pop     ecx
        jz      L_b0
        inc     ebx
        jmp     L_b0
    L_96:
        cmp     dword ptr [esp + 0x10], 0x0
        jnz     L_b0
        test    cl, 0x2
        jz      L_b0
        push    eax
        call    FUN_100440a9
        cmp     eax, -1
        pop     ecx
        jnz     L_b0
        or      edi, eax
    L_b0:
        mov     eax, dword ptr [g_10075820]
        push    dword ptr [eax + esi*0x4]
        push    esi
        call    FUN_10040d0f
        pop     ecx
        pop     ecx
    L_c0:
        inc     esi
        cmp     esi, dword ptr [g_10076840]
        jl      L_55
    L_c9:
        push    0x2
        call    FUN_10039b7a
        cmp     dword ptr [esp + 0x14], 0x1
        pop     ecx
        mov     eax, ebx
        jz      L_dc
        mov     eax, edi
    L_dc:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
