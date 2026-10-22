/*
 * FUN_0060bed0 (605 B) — __thiscall handler. Compares two 16-bit IDs
 * against globals (DAT_007db0ac/ae); on match builds a string via a
 * chain of helpers and dispatches through a vtable; else builds a
 * different string. Returns 1 on success.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short g_7db0ac;  /* 0x007db0ac */
extern unsigned short g_7db0ae;  /* 0x007db0ae */
extern int g_7db0b8;             /* 0x007db0b8 */
extern int g_7db090;             /* 0x007db090 */
extern int g_7dab44;             /* 0x007dab44 */
extern int g_7dab40;             /* 0x007dab40 */

extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004d2a90(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_004d2d00(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0060fcf0(void);
extern void __cdecl FUN_00412780(void);

__declspec(naked) int __stdcall FUN_0060bed0(void)
{
    __asm {
        sub     esp, 0x50
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x5c]
        mov     eax, dword ptr [esi + 0xc]
        mov     dx, word ptr [eax + ecx*4]
        lea     eax, [eax + ecx*4]
        mov     ecx, dword ptr [esi + 0x4]
        test    ecx, ecx
        mov     word ptr [esp + 0x8], dx
        mov     ax, word ptr [eax + 0x2]
        push    edi
        mov     word ptr [esp + 0xe], ax
        jz      L_bf08
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
        mov     dword ptr [esi + 0x4], 0x0
L_bf08:
        mov     ax, word ptr [esp + 0xc]
        cmp     ax, word ptr [g_7db0ac]
        mov     ebx, dword ptr [esp + 0x64]
        jnz     L_c08b
        mov     cx, word ptr [esp + 0xe]
        cmp     cx, word ptr [g_7db0ae]
        jnz     L_c08b
        mov     edx, dword ptr [esp + 0x68]
        push    edx
        lea     ecx, [esp + 0x68]
        call    FUN_00412570
        mov     eax, dword ptr [esp + 0x64]
        push    ebx
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x68]
        call    FUN_00412740
        lea     ecx, [esp + 0x14]
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp + 0x64]
        test    eax, eax
        mov     dword ptr [esp + 0x60], eax
        jz      L_bf6f
        inc     byte ptr [eax + -0x1]
L_bf6f:
        lea     ecx, [esp + 0x60]
        push    ecx
        lea     ecx, [esi + 0x8]
        call    FUN_00412740
        mov     edx, dword ptr [esp + 0x60]
        push    0x779f4c
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x64]
        call    FUN_00412740
        lea     ecx, [esp + 0x14]
        call    FUN_0040d9b0
        lea     edi, [esi + 0x30]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_bfd8
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, eax
        call    FUN_004d2a90
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_bfd1
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
L_bfd1:
        mov     ecx, edi
        call    FUN_0041fcb0
L_bfd8:
        mov     eax, dword ptr [esp + 0x60]
        mov     ecx, dword ptr [g_7db0b8]
        push    0x1
        push    0x0
        push    0x0
        push    0x3f
        push    0x6
        push    0x0
        push    eax
        call    FUN_004d2d00
        push    eax
        mov     ecx, edi
        call    FUN_0041fcd0
        push    0x1
        lea     ecx, [esp + 0x6c]
        push    ecx
        lea     ecx, [esp + 0x20]
        mov     word ptr [esp + 0x70], 0x6
        mov     word ptr [esp + 0x72], 0x1
        call    FUN_004d1f80
        mov     ecx, dword ptr [g_7db090]
        call    FUN_004cec10
        mov     dl, byte ptr [eax]
        mov     byte ptr [esp + 0x10], dl
        mov     ax, word ptr [eax + 0x2]
        push    0x1
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        mov     word ptr [esp + 0x1e], ax
        call    FUN_004d9910
        add     esp, 0xc
        lea     ecx, [esp + 0x18]
        mov     edi, eax
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0x60]
        test    eax, eax
        jz      L_c06e
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_c06e
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_c06e:
        mov     eax, dword ptr [esp + 0x64]
        test    eax, eax
        jz      L_c0d4
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_c0d4
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        jmp     L_c0d4
L_c08b:
        push    0x1
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_004d1f80
        mov     ecx, dword ptr [g_7db090]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp + 0x60], cl
        mov     dx, word ptr [eax + 0x2]
        push    0x1
        lea     eax, [esp + 0x64]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     word ptr [esp + 0x6e], dx
        call    FUN_004d9910
        add     esp, 0xc
        lea     ecx, [esp + 0x18]
        mov     edi, eax
        call    FUN_004d21c0
L_c0d4:
        mov     edx, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        cmp     eax, 0x1
        jnz     L_c124
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     edi, dword ptr [ecx + 0xc]
        xor     edi, 0x85739531
        lea     ecx, [edi + 0xf4]
        call    FUN_0060fcf0
        mov     eax, dword ptr [esi + 0x40]
        test    eax, eax
        jnz     L_c11f
        push    ebx
        lea     ecx, [edi + 0xc8]
        mov     dword ptr [edi + 0xc4], 0xffffffff
        call    FUN_00412780
L_c11f:
        mov     eax, 0x1
L_c124:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x50
        ret     0xc
    }
}
