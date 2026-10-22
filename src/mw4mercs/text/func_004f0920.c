/*
 * FUN_004f0920 (149 B) - Adept/MLR state-engine handler. Looks up an
 * object in g_7dc830 via FUN_004164b0; if absent, dispatches on a type
 * code (0x4b -> FUN_00487900, 0x74 -> FUN_00429860, else assert via
 * FUN_006fab90), stores it via FUN_00416470 and bumps a refcount.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004164b0(void);
extern void __cdecl FUN_00429860(void);
extern void __cdecl FUN_00487900(void);
extern void __cdecl FUN_00416470(void);
extern int __cdecl FUN_006fab90(void);
extern int g_7dc830;   /* 0x007dc830 */
extern int g_7dc828;   /* 0x007dc828 */
extern char g_7715bc[]; /* 0x007715bc string */

__declspec(naked) void *func_004f0920(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [g_7dc830]
        push    esi
        push    offset g_7dc828
        call    FUN_004164b0
        mov     esi, eax
        test    esi, esi
        jnz     L_4f09a2
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        push    0x4
        lea     ecx, [ebp + 0x8]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        mov     eax, dword ptr [ebp + 0x8]
        cmp     eax, 0x4b
        jz      L_4f0978
        cmp     eax, 0x74
        jz      L_4f096c
        push    offset g_7715bc
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_4f0987
        int     3
        jmp     L_4f0987
    L_4f096c:
        mov     edx, dword ptr [ebp + 0xc]
        push    edx
        push    edi
        call    FUN_00429860
        jmp     L_4f0982
    L_4f0978:
        mov     eax, dword ptr [ebp + 0xc]
        push    eax
        push    edi
        call    FUN_00487900
    L_4f0982:
        add     esp, 0x8
        mov     esi, eax
    L_4f0987:
        mov     ecx, dword ptr [g_7dc830]
        push    offset g_7dc828
        push    esi
        call    FUN_00416470
        inc     word ptr [esi + 0x10]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        ret
    L_4f09a2:
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x18]
        inc     word ptr [esi + 0x10]
        mov     eax, esi
        pop     esi
        pop     ebp
        ret
    }
}
