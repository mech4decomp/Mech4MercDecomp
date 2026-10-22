/*
 * FUN_00622a00 (150 B) — __thiscall (ECX=this), RET 4.
 *
 * Reads a global table pointer (0x7dab44 ^ 0x7dab40), walks a
 * linked list of entries via FUN_00416bc0/FUN_00416cc0, calls
 * FUN_00622c30 per entry, then FUN_00622aa0 8 times, and finally
 * FUN_00416c60.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;
extern void __cdecl FUN_00416bc0(void);
extern int __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00622c30(void);
extern void __cdecl FUN_00622aa0(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void __stdcall FUN_00622a00(int param_1)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        mov     edx, dword ptr [g_7dab40]
        sub     esp, 0x14
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     eax, dword ptr [ecx + 0x20]
        xor     eax, 0x85739531
        jz      L_22a8f
        push    esi
        push    edi
        add     eax, 0x19c
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00416bc0
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0xc], 0x78cf94
        call    FUN_00416cc0
        test    eax, eax
        mov     edi, dword ptr [esp + 0x24]
        jz      L_22a73
    L_22a49:
        mov     dl, byte ptr [eax + 0x10]
        mov     ax, word ptr [eax + 0x12]
        lea     ecx, [esp + 0x24]
        push    ecx
        push    edi
        mov     ecx, ebx
        mov     byte ptr [esp + 0x2c], dl
        mov     word ptr [esp + 0x2e], ax
        call    FUN_00622c30
        lea     ecx, [esp + 0xc]
        call    FUN_00416cc0
        test    eax, eax
        jnz     L_22a49
    L_22a73:
        xor     esi, esi
    L_22a75:
        push    esi
        push    edi
        mov     ecx, ebx
        call    FUN_00622aa0
        inc     esi
        cmp     esi, 0x8
        jl      L_22a75
        lea     ecx, [esp + 0xc]
        call    FUN_00416c60
        pop     edi
        pop     esi
    L_22a8f:
        pop     ebx
        add     esp, 0x14
        ret     4
    }
}
