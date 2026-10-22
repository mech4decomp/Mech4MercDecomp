/*
 * FUN_005faa90 (333 B) — __thiscall weapon/mech render helper (sibling of
 * FUN_005fa7a0). Validates a 2-word tag, builds a render/stream object from a
 * fixed source block, returns it (or NULL). RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short g_007db0ac;
extern unsigned short g_007db0ae;
extern int g_007db098;
extern int g_007dab44;
extern int g_007dab40;

extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004da920(void);
extern void __cdecl FUN_005347f0(void);
extern void __cdecl FUN_00767400(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_0041e710(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void FUN_005faa90(void)
{
    __asm {
        sub     esp, 0x128
        push    ebx
        mov     ebx, dword ptr [esp + 0x130]
        mov     ax, word ptr [ebx]
        cmp     ax, word ptr [g_007db0ac]
        jnz     Laac3
        mov     cx, word ptr [ebx + 0x2]
        cmp     cx, word ptr [g_007db0ae]
        jnz     Laac3
        xor     eax, eax
        pop     ebx
        add     esp, 0x128
        ret     0x8
Laac3:
        push    esi
        push    edi
        push    0x1
        push    ebx
        lea     ecx, [esp + 0xf8]
        call    FUN_004d1f80
        push    ebx
        call    FUN_004da920
        add     esp, 0x4
        push    0x0
        push    -0x1
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        lea     edi, [esp + 0x18]
        rep movsd
        mov     ecx, dword ptr [esp + 0x144]
        mov     edx, dword ptr [ecx]
        push    0x2
        push    0x0
        mov     dword ptr [esp + 0x2c], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx + 0x8]
        mov     dword ptr [esp + 0x3c], edx
        lea     edx, [esp + 0x20]
        push    edx
        push    ebx
        push    0x2
        push    eax
        push    0x0
        push    0x2
        mov     dword ptr [esp + 0x64], ecx
        push    0x90
        lea     ecx, [esp + 0x8c]
        call    FUN_005347f0
        push    0x8bd5e8
        lea     ecx, [esp + 0xc4]
        call    FUN_00767400
        push    0x8bd5e8
        lea     ecx, [esp + 0xdc]
        call    FUN_00767400
        mov     eax, dword ptr [esp + 0x60]
        push    0x0
        push    eax
        lea     ecx, [esp + 0x68]
        push    ecx
        lea     ecx, [esp + 0x4c]
        call    FUN_0041e690
        mov     ecx, dword ptr [g_007db098]
        call    FUN_004cec10
        mov     dl, byte ptr [eax]
        mov     byte ptr [esp + 0xc], dl
        mov     ax, word ptr [eax + 0x2]
        push    0x0
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x48]
        push    edx
        mov     word ptr [esp + 0x1a], ax
        call    FUN_004d9910
        mov     esi, eax
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx + 0x1c]
        add     esp, 0xc
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0x28]
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax + 0x48]
        lea     ecx, [esp + 0x40]
        call    FUN_0041e710
        lea     ecx, [esp + 0xf0]
        call    FUN_004d21c0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x128
        ret     0x8
    }
}
