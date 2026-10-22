/*
 * FUN_0040dca0 (171 B) — __thiscall object constructor in the loader region.
 * Initializes a member object, conditionally loads a file (FUN_006fc4d0),
 * and calls FUN_0040ded0. RET 0xc (3 stack params + this in ECX).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_76d0ec[];                  /* string literal "%s is missing or empty!" */
extern void __cdecl FUN_00412b30(void);
extern void __cdecl FUN_0041de50(void);
extern void __cdecl FUN_006fc4d0(void);
extern void __cdecl FUN_0041dee0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00412bf0(void);
extern void __cdecl FUN_0040ded0(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_0041dec0(void);

__declspec(naked) void FUN_0040dca0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x30
        mov     al, byte ptr [ebp+0x10]
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi+0xc]
        xor     ebx, ebx
        mov     ecx, edi
        mov     dword ptr [esi], ebx
        mov     byte ptr [esi+6], al
        call    FUN_00412b30
        lea     ecx, [ebp-0x30]
        mov     dword ptr [esi+0x48], ebx
        mov     dword ptr [esi+0x44], ebx
        call    FUN_0041de50
        mov     ebx, dword ptr [ebp+8]
        push    ebx
        call    FUN_006fc4d0
        test    al, al
        jz      L_dcfd
        push    0
        push    ebx
        lea     ecx, [ebp-0x30]
        call    FUN_0041dee0
        mov     ecx, dword ptr [ebp-0xc]
        push    ecx
        mov     ecx, esi
        call    FUN_00412780
        lea     edx, [ebp-0x30]
        push    edx
        mov     ecx, edi
        call    FUN_00412bf0
        jmp     L_dd05
L_dcfd:
        push    ebx
        mov     ecx, esi
        call    FUN_00412780
L_dd05:
        mov     eax, dword ptr [ebp+0xc]
        push    0
        lea     ecx, [ebp-0x30]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esi+8], eax
        call    FUN_0040ded0
        cmp     dword ptr [esi+8], 1
        jnz     L_dd38
        mov     eax, dword ptr [esi+0x44]
        test    eax, eax
        jnz     L_dd38
        push    ebx
        push    offset g_76d0ec
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        jz      L_dd38
        int     3
L_dd38:
        lea     ecx, [ebp-0x30]
        call    FUN_0041dec0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
