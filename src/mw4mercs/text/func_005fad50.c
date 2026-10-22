/*
 * FUN_005fad50 (334 B) — __thiscall weapon/mech render helper (sibling of
 * FUN_005fa610). Validates a 2-word tag passed on the stack, builds a
 * render/stream object, returns it (or NULL). RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short g_007db0ac;
extern unsigned short g_007db0ae;
extern int g_007db098;
extern int g_007dab44;
extern int g_007dab40;

extern void __cdecl FUN_004da920(void);
extern void __cdecl FUN_00534630(void);
extern void __cdecl FUN_004ea0f0(void);
extern void __cdecl FUN_00428850(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_0041e710(void);

__declspec(naked) void FUN_005fad50(void)
{
    __asm {
        mov     ax, word ptr [esp + 0x4]
        sub     esp, 0x84
        cmp     ax, word ptr [g_007db0ac]
        push    edi
        mov     edi, ecx
        jnz     Lad84
        mov     cx, word ptr [esp + 0x8e]
        cmp     cx, word ptr [g_007db0ae]
        jnz     Lad84
        xor     eax, eax
        pop     edi
        add     esp, 0x84
        ret     0x4
Lad84:
        lea     edx, [esp + 0x8c]
        push    esi
        push    edx
        call    FUN_004da920
        add     esp, 0x4
        push    0x0
        push    0x2
        push    0x60
        push    0x2
        lea     ecx, [esp + 0x1c]
        mov     esi, eax
        call    FUN_00534630
        push    0x7dc694
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x24], 0x2
        call    FUN_004ea0f0
        mov     eax, dword ptr [edi + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_00428850
        mov     cx, word ptr [esp + 0x90]
        mov     eax, dword ptr [esp + 0xc]
        mov     dx, word ptr [esp + 0x92]
        push    0x0
        mov     word ptr [esp + 0x64], cx
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x78]
        mov     dword ptr [esp + 0x64], 0x1
        mov     dword ptr [esp + 0x68], 0x0
        mov     word ptr [esp + 0x6e], dx
        mov     dword ptr [esp + 0x70], 0x0
        mov     dword ptr [esp + 0x74], 0xffffffff
        call    FUN_0041e690
        mov     ecx, dword ptr [g_007db098]
        call    FUN_004cec10
        mov     dl, byte ptr [eax]
        mov     byte ptr [esp + 0x8], dl
        mov     ax, word ptr [eax + 0x2]
        push    0x0
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     edx, [esp + 0x74]
        push    edx
        mov     word ptr [esp + 0x16], ax
        call    FUN_004d9910
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        mov     esi, eax
        mov     eax, dword ptr [esi + 0x10]
        and     eax, 0xffffffef
        or      eax, 0x8
        mov     dword ptr [esi + 0x10], eax
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0x1c]
        add     esp, 0xc
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    esi
        call    dword ptr [eax + 0x28]
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx + 0x48]
        lea     ecx, [esp + 0x6c]
        call    FUN_0041e710
        mov     eax, esi
        pop     esi
        pop     edi
        add     esp, 0x84
        ret     0x4
    }
}
