/*
 * FUN_00612120 (207 B true extent; 216 B slice incl. next fn) — in-.text
 * data block function (block 0x612120). Uses 0x7dab44/0x7dab40 XOR-keyed
 * pointer scheme; calls FUN_00416bc0 / FUN_00416cc0 / FUN_004d1f80 /
 * FUN_0060d3d0 / FUN_004d21c0 / FUN_00416c60.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_0060d3d0(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_00416c60(void);

extern int  g_007dab44;   /* DAT_007dab44 */
extern int  g_007dab40;   /* DAT_007dab40 */
extern char g_77a3cc[];   /* object/vtable @ 0x77a3cc */

__declspec(naked) void FUN_00612120(void)
{
    __asm {
        sub     esp, 0x5c
        mov     eax, dword ptr [g_007dab44]
        push    esi
        mov     dword ptr [esp + 4], ecx
        mov     ecx, dword ptr [eax]
        push    edi
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x24]
        add     eax, 0x34
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00416bc0
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0xc], offset g_77a3cc
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        je      L21E0
        push    ebx
        push    ebp
L2168:
        push    1
        lea     ebp, [esi + 0x14]
        push    ebp
        lea     ecx, [esp + 0x30]
        call    FUN_004d1f80
        mov     ecx, dword ptr [esp + 0x3c]
        mov     edi, dword ptr [ecx + 0x30]
        cmp     edi, 0x83
        jl      L21A6
        cmp     edi, 0x8c
        jg      L21A6
        mov     ecx, dword ptr [esp + 0x10]
        push    edi
        push    ebp
        add     esi, 0x18
        push    esi
        call    FUN_0060d3d0
        mov     dword ptr [eax + 0x1c], 0xffffffff
        jmp     L21C6
L21A6:
        mov     eax, dword ptr [esi + 0x1c]
        xor     ebx, ebx
        test    eax, eax
        jle     L21C6
L21AF:
        mov     ecx, dword ptr [esp + 0x10]
        push    edi
        push    ebp
        lea     eax, [esi + 0x18]
        push    eax
        call    FUN_0060d3d0
        mov     eax, dword ptr [esi + 0x1c]
        inc     ebx
        cmp     ebx, eax
        jl      L21AF
L21C6:
        lea     ecx, [esp + 0x28]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x14]
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jne     L2168
        pop     ebp
        pop     ebx
L21E0:
        lea     ecx, [esp + 0xc]
        call    FUN_00416c60
        pop     edi
        pop     esi
        add     esp, 0x5c
        ret
    }
}
