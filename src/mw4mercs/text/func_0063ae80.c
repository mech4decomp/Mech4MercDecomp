/*
 * FUN_0063AE80 (187 B) — Counts entries in a list whose flag bit is set.
 *
 * Uses two global pointers (0x007dab44, 0x007dab40) XORed to derive a
 * key, calls FUN_00600940 / FUN_0064e600 to validate, then iterates a
 * list via FUN_0064e100, counting entries where FUN_004fcb30 returns
 * NULL or the bit at 0x10>>0x13 is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_ab44;   /* 0x007dab44 */
extern unsigned long g_ab40;   /* 0x007dab40 */

extern void __cdecl FUN_00600940(void);
extern void __cdecl FUN_0064e600(void);
extern void __cdecl FUN_0064e5a0(void);
extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_004fcb30(void);

__declspec(naked) int FUN_0063ae80(void)
{
    __asm {
        mov     eax, dword ptr [g_ab44]
        mov     eax, dword ptr [eax]
        push    ebx
        mov     ebx, dword ptr [g_ab40]
        push    esi
        mov     esi, dword ptr [esp + 0xC]
        xor     eax, ebx
        mov     ecx, dword ptr [eax + 0x20]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_00600940
        mov     ecx, eax
        call    FUN_0064e600
        test    al, al
        jnz     l_b4
        pop     esi
        xor     eax, eax
        pop     ebx
        ret
    l_b4:
        mov     ecx, dword ptr [g_ab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [g_ab40]
        mov     ecx, dword ptr [eax + 0x20]
        push    edi
        push    esi
        xor     ecx, 0x85739531
        call    FUN_00600940
        mov     ecx, eax
        call    FUN_0064e5a0
        mov     edi, eax
        mov     ecx, edi
        xor     ebx, ebx
        call    FUN_0064e100
        mov     esi, dword ptr [eax]
        mov     ecx, edi
        call    FUN_0064e100
        cmp     esi, dword ptr [eax + 0x4]
        jz      l_af35
    l_aef2:
        mov     edx, dword ptr [g_ab44]
        mov     ecx, dword ptr [g_ab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [esi]
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        test    eax, eax
        jz      l_af25
        mov     edx, dword ptr [eax + 0x10]
        shr     edx, 0x13
        and     dl, 0x1
        cmp     dl, 0x1
        jnz     l_af26
    l_af25:
        inc     ebx
    l_af26:
        mov     ecx, edi
        add     esi, 0x4
        call    FUN_0064e100
        cmp     esi, dword ptr [eax + 0x4]
        jnz     l_aef2
    l_af35:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret
    }
}
