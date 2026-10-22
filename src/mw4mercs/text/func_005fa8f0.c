/*
 * FUN_005fa8f0 (401 B) — __thiscall weapon/mech render helper (sibling of
 * FUN_005fa610). Validates a 2-word tag, builds a render/stream object,
 * optionally copies a source block via FUN_00507f90, returns it (or NULL).
 * RET 0xc.
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
extern void __cdecl FUN_00507f90(void);
extern void __cdecl FUN_005347f0(void);
extern void __cdecl FUN_00767400(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_004f5060(void);
extern void __cdecl FUN_004f5630(void);
extern void __cdecl FUN_0041e710(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void FUN_005fa8f0(void)
{
    __asm {
        sub     esp, 0x15c
        push    ebx
        mov     ebx, dword ptr [esp + 0x164]
        mov     ax, word ptr [ebx]
        cmp     ax, word ptr [g_007db0ac]
        push    esi
        mov     esi, ecx
        jnz     L927
        mov     cx, word ptr [ebx + 0x2]
        cmp     cx, word ptr [g_007db0ae]
        jnz     L927
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x15c
        ret     0xc
L927:
        push    ebp
        push    edi
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x100]
        call    FUN_004d1f80
        push    ebx
        call    FUN_004da920
        mov     esi, dword ptr [esi + 0xd8]
        mov     ebp, dword ptr [esp + 0x178]
        add     esi, 0x80
        add     esp, 0x4
        test    ebp, ebp
        mov     ecx, 0xc
        lea     edi, [esp + 0x38]
        mov     dword ptr [esp + 0x14], eax
        rep movsd
        jz      L983
        lea     edx, [esp + 0x13c]
        push    edx
        mov     ecx, ebp
        call    FUN_00507f90
        mov     ecx, 0xc
        mov     esi, eax
        lea     edi, [esp + 0x38]
        rep movsd
L983:
        mov     ecx, dword ptr [esp + 0x14]
        push    0x0
        push    -0x1
        push    0x2
        push    0x0
        lea     eax, [esp + 0x48]
        push    eax
        push    ebx
        push    0x800002
        push    ecx
        push    0x0
        push    0x2
        push    0x90
        lea     ecx, [esp + 0x94]
        call    FUN_005347f0
        push    0x8bd5e8
        lea     ecx, [esp + 0xcc]
        call    FUN_00767400
        push    0x8bd5e8
        lea     ecx, [esp + 0xe4]
        call    FUN_00767400
        mov     edx, dword ptr [esp + 0x68]
        push    0x0
        push    edx
        lea     eax, [esp + 0x70]
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_0041e690
        mov     ecx, dword ptr [g_007db098]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp + 0x10], cl
        mov     dx, word ptr [eax + 0x2]
        push    0x0
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     word ptr [esp + 0x1e], dx
        call    FUN_004d9910
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     esi, eax
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x1c]
        add     esp, 0xc
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0x28]
        test    ebp, ebp
        jz      Laa54
        mov     al, byte ptr [esp + 0x178]
        test    al, al
        jz      Laa54
        push    ebp
        mov     ecx, esi
        call    FUN_004f5060
        mov     ecx, esi
        call    FUN_004f5630
Laa54:
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax + 0x48]
        lea     ecx, [esp + 0x18]
        call    FUN_0041e710
        lea     ecx, [esp + 0xf8]
        call    FUN_004d21c0
        pop     edi
        pop     ebp
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x15c
        ret     0xc
    }
}
