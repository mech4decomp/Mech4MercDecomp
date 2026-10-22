/*
 * FUN_0040ddb0 (99 B) — __thiscall object constructor in the loader region.
 * RET 0x8 (2 stack params + this in ECX). Reads global DAT_007b8ee8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8ee8;
extern void __cdecl FUN_00412b30(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00412bf0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_0040ded0(void);

__declspec(naked) void FUN_0040ddb0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        xor     ebx, ebx
        lea     ebp, [esi+0xc]
        push    edi
        mov     ecx, ebp
        mov     dword ptr [esi], ebx
        mov     byte ptr [esi+6], bl
        call    FUN_00412b30
        mov     edi, dword ptr [esp+0x14]
        cmp     edi, ebx
        mov     dword ptr [esi+0x48], ebx
        mov     dword ptr [esi+0x44], ebx
        jz      L_ddfa
        mov     eax, dword ptr [g_007b8ee8]
        mov     ecx, dword ptr [edi+4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_ddfa
        push    edi
        mov     ecx, ebp
        call    FUN_00412bf0
        mov     eax, dword ptr [edi+0x24]
        push    eax
        mov     ecx, esi
        call    FUN_00412780
L_ddfa:
        mov     ecx, dword ptr [esp+0x18]
        push    ecx
        push    edi
        mov     ecx, esi
        mov     dword ptr [esi+8], ebx
        call    FUN_0040ded0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
