/*
 * FUN_005fabe0 (363 B) — __thiscall weapon/mech render helper (sibling of
 * FUN_005fa610). Validates a 2-word tag, builds a render/stream object from a
 * fixed source block plus a param block, returns it (or NULL). RET 0xc.
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
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_005347f0(void);
extern void __cdecl FUN_00767400(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_0041e710(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void FUN_005fabe0(void)
{
    __asm {
        sub     esp, 0x128
        push    ebx
        mov     ebx, dword ptr [esp + 0x130]
        mov     ax, word ptr [ebx]
        cmp     ax, word ptr [g_007db0ac]
        jnz     Lac13
        mov     cx, word ptr [ebx + 0x2]
        cmp     cx, word ptr [g_007db0ae]
        jnz     Lac13
        xor     eax, eax
        pop     ebx
        add     esp, 0x128
        ret     0xc
Lac13:
        push    ebp
        push    esi
        push    edi
        push    0x1
        push    ebx
        lea     ecx, [esp + 0xfc]
        call    FUN_004d1f80
        push    ebx
        call    FUN_004da920
        mov     edx, dword ptr [esp + 0x148]
        add     esp, 0x4
        push    0x2
        push    0x0
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        lea     edi, [esp + 0x1c]
        push    0x1
        rep movsd
        push    edx
        lea     ecx, [esp + 0x24]
        mov     ebp, eax
        call    FUN_0041fde0
        mov     eax, dword ptr [esp + 0x140]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x8]
        push    0x0
        push    -0x1
        push    0x2
        push    0x0
        mov     dword ptr [esp + 0x30], ecx
        lea     ecx, [esp + 0x24]
        push    ecx
        push    ebx
        push    0x2
        push    ebp
        push    0x0
        push    0x2
        push    0x90
        lea     ecx, [esp + 0x90]
        mov     dword ptr [esp + 0x5c], edx
        mov     dword ptr [esp + 0x6c], eax
        call    FUN_005347f0
        push    0x8bd5e8
        lea     ecx, [esp + 0xc8]
        call    FUN_00767400
        push    0x8bd5e8
        lea     ecx, [esp + 0xe0]
        call    FUN_00767400
        mov     edx, dword ptr [esp + 0x64]
        push    0x0
        push    edx
        lea     eax, [esp + 0x6c]
        push    eax
        lea     ecx, [esp + 0x50]
        call    FUN_0041e690
        mov     ecx, dword ptr [g_007db098]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp + 0x10], cl
        mov     dx, word ptr [eax + 0x2]
        push    0x0
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x4c]
        push    ecx
        mov     word ptr [esp + 0x1e], dx
        call    FUN_004d9910
        mov     edx, dword ptr [g_007dab44]
        mov     ebp, dword ptr [g_007dab40]
        mov     esi, eax
        mov     eax, dword ptr [edx]
        xor     eax, ebp
        mov     ecx, dword ptr [eax + 0x1c]
        add     esp, 0xc
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0x28]
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax + 0x48]
        lea     ecx, [esp + 0x44]
        call    FUN_0041e710
        lea     ecx, [esp + 0xf4]
        call    FUN_004d21c0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x128
        ret     0xc
    }
}
