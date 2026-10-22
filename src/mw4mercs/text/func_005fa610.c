/*
 * FUN_005fa610 (385 B) — __thiscall weapon/mech render helper. Validates a
 * 2-word tag, builds a render/stream object, and returns it (or NULL).
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
extern void __cdecl FUN_004f5030(void);
extern void __cdecl FUN_004f5430(void);
extern void __cdecl FUN_0041e710(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void FUN_005fa610(void)
{
    __asm {
        sub     esp, 0x128
        push    ebx
        mov     ebx, dword ptr [esp + 0x130]
        mov     ax, word ptr [ebx]
        cmp     ax, word ptr [g_007db0ac]
        push    esi
        mov     esi, ecx
        jnz     L647
        mov     cx, word ptr [ebx + 0x2]
        cmp     cx, word ptr [g_007db0ae]
        jnz     L647
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x128
        ret     0xc
L647:
        push    ebp
        push    edi
        push    0x1
        push    ebx
        lea     ecx, [esp + 0xfc]
        call    FUN_004d1f80
        push    ebx
        call    FUN_004da920
        mov     esi, dword ptr [esi + 0xd8]
        mov     ebp, dword ptr [esp + 0x144]
        add     esi, 0x80
        add     esp, 0x4
        test    ebp, ebp
        mov     ecx, 0xc
        lea     edi, [esp + 0x34]
        rep movsd
        jz      L69a
        mov     esi, dword ptr [ebp + 0xd8]
        add     esi, 0x80
        mov     ecx, 0xc
        lea     edi, [esp + 0x34]
        rep movsd
L69a:
        push    0x0
        push    -0x1
        push    0x2
        push    0x0
        lea     edx, [esp + 0x44]
        push    edx
        push    ebx
        push    0x800002
        push    eax
        push    0x0
        push    0x2
        push    0x90
        lea     ecx, [esp + 0x90]
        call    FUN_005347f0
        push    0x8bd5e8
        lea     ecx, [esp + 0xc8]
        call    FUN_00767400
        push    0x8bd5e8
        lea     ecx, [esp + 0xe0]
        call    FUN_00767400
        mov     eax, dword ptr [esp + 0x64]
        push    0x0
        push    eax
        lea     ecx, [esp + 0x6c]
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_0041e690
        mov     ecx, dword ptr [g_007db098]
        call    FUN_004cec10
        mov     dl, byte ptr [eax]
        mov     byte ptr [esp + 0x10], dl
        mov     ax, word ptr [eax + 0x2]
        push    0x0
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        mov     word ptr [esp + 0x1e], ax
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
        test    ebp, ebp
        jz      L764
        mov     al, byte ptr [esp + 0x144]
        test    al, al
        jz      L764
        push    ebp
        mov     ecx, esi
        call    FUN_004f5030
        mov     ecx, esi
        call    FUN_004f5430
L764:
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax + 0x48]
        lea     ecx, [esp + 0x14]
        call    FUN_0041e710
        lea     ecx, [esp + 0xf4]
        call    FUN_004d21c0
        pop     edi
        pop     ebp
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x128
        ret     0xc
    }
}
