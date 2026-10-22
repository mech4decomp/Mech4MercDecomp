/*
 * FUN_0066b370 (126 B) — Linked-list lookup with fallback creation.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * Walks the list at this+0x60 comparing names via an indirect call
 * (g_76b2ac); on miss, creates via FUN_00606c00 / FUN_004179b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00606c00(void);
extern void __cdecl FUN_004179b0(void);

extern int g_76b2ac;
extern int g_7f27b0;

__declspec(naked) int __stdcall FUN_0066b370(char *param_1)
{
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        mov     ebp, dword ptr [g_76b2ac]
        mov     eax, ecx
        push    esi
        mov     dword ptr [esp + 0xc], eax
        add     eax, 0x60
        push    edi
        mov     edi, dword ptr [eax]
        mov     dword ptr [esp + 0x14], eax
    l_90:
        test    edi, edi
        jz      l_bd
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     edi, dword ptr [edi + 4]
        jz      l_bd
        mov     eax, dword ptr [esi + 0x10]
        mov     ecx, dword ptr [eax + 4]
        add     ecx, 0x2c
        push    ebx
        push    ecx
        call    ebp
        add     esp, 8
        test    eax, eax
        jnz     l_90
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     4
    l_bd:
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edx + 0x18]
        mov     ecx, dword ptr [g_7f27b0]
        push    eax
        push    0x5f8ec0
        push    ebx
        call    FUN_00606c00
        mov     ecx, dword ptr [esp + 0x14]
        mov     esi, eax
        push    esi
        call    FUN_004179b0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     4
    }
}
