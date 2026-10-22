/*
 * FUN_0061E080 (563 B) — ABL module "forward/extern" declaration handler.
 * Compares the current token (DAT_007f3254) against "forward"/"extern" and
 * sets up the module object (EDI) accordingly, driving the ABL state machine
 * (FUN_0069c6b0 / FUN_0069ae70 / FUN_0069ae90). __cdecl, no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_8058e0;   /* DAT_008058e0 */
extern int  g_8058ac;   /* DAT_008058ac */
extern int  g_8058d8;   /* DAT_008058d8 */
extern char g_8058d4;   /* DAT_008058d4 */

extern void __cdecl FUN_0061e2c0(void);
extern void __cdecl FUN_00649920(void);
extern void __cdecl FUN_00649150(void);
extern char __cdecl FUN_006498f0(void);
extern void __cdecl FUN_00562f40(void);
extern void __cdecl FUN_0069ae90(void);
extern void __cdecl FUN_00649e60(void);
extern void __cdecl FUN_0069c6b0(void);
extern void __cdecl FUN_0069ae70(void);
extern void __cdecl FUN_0064a0e0(void);
extern void __cdecl FUN_00650580(void);

__declspec(naked) void FUN_0061e080(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        call    FUN_0061e2c0
        mov     ebp, dword ptr [g_8058e0]
        push    0x7b5890
        mov     edi, eax
        push    0x7b58e0
        push    0x7b5570
        mov     dword ptr [g_8058e0], edi
        call    FUN_00649920
        mov     eax, dword ptr [g_8058ac]
        add     esp, 0xc
        cmp     eax, 0xe
        jnz     L_e0bf
        call    FUN_00649150
        jmp     L_e0eb
L_e0bf:
        push    0x7b58e0
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jnz     L_e0e1
        push    0x7b5890
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jz      L_e0eb
L_e0e1:
        push    0x14
        call    FUN_00562f40
        add     esp, 0x4
L_e0eb:
        mov     esi, 0x78c990
        mov     eax, 0x7f3254
        xor     ebx, ebx
L_e0f7:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_e11b
        cmp     cl, bl
        jz      L_e117
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_e11b
        add     eax, 0x2
        add     esi, 0x2
        cmp     cl, bl
        jnz     L_e0f7
L_e117:
        xor     eax, eax
        jmp     L_e120
L_e11b:
        sbb     eax, eax
        sbb     eax, -0x1
L_e120:
        cmp     eax, ebx
        jz      L_e23e
        mov     esi, 0x78c988
        mov     eax, 0x7f3254
L_e132:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_e156
        cmp     cl, bl
        jz      L_e152
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_e156
        add     eax, 0x2
        add     esi, 0x2
        cmp     cl, bl
        jnz     L_e132
L_e152:
        xor     eax, eax
        jmp     L_e15b
L_e156:
        sbb     eax, eax
        sbb     eax, -0x1
L_e15b:
        cmp     eax, ebx
        jz      L_e23e
        push    ebx
        push    ebx
        push    edi
        mov     dword ptr [edi + 0x1c], ebx
        mov     dword ptr [edi + 0x2c], ebx
        call    FUN_0069ae90
        push    ebx
        push    ebx
        push    0x7b55d0
        call    FUN_00649920
        mov     eax, dword ptr [g_8058ac]
        add     esp, 0x18
        cmp     eax, 0x1a
        jz      L_e194
        push    0x2e
        call    FUN_00562f40
        add     esp, 0x4
L_e194:
        call    FUN_00649e60
        mov     eax, 0x1
        mov     dword ptr [g_8058d8], eax
        mov     byte ptr [g_8058d4], al
        call    FUN_00649150
        cmp     dword ptr [g_8058ac], 0x27
        jz      L_e1f6
L_e1b6:
        call    FUN_0069c6b0
        mov     eax, dword ptr [g_8058ac]
        cmp     eax, 0xe
        jnz     L_e1d4
L_e1c5:
        call    FUN_00649150
        mov     eax, dword ptr [g_8058ac]
        cmp     eax, 0xe
        jz      L_e1c5
L_e1d4:
        cmp     eax, 0x27
        jz      L_e1f6
        push    ebx
        push    ebx
        push    0x7b5890
        call    FUN_00649920
        push    0x7b5890
        call    FUN_006498f0
        add     esp, 0x10
        test    al, al
        jnz     L_e1b6
L_e1f6:
        push    0x32
        push    0x27
        call    FUN_0069ae70
        mov     esi, dword ptr [g_8058ac]
        mov     byte ptr [g_8058d4], bl
        mov     dword ptr [g_8058ac], ebx
        call    FUN_00649e60
        lea     eax, [edi + 0x38]
        push    eax
        mov     dword ptr [g_8058ac], esi
        call    FUN_0064a0e0
        add     esp, 0xc
        mov     dword ptr [edi + 0x34], eax
        call    FUN_00650580
        mov     dword ptr [edi + 0x30], eax
        pop     edi
        pop     esi
        mov     dword ptr [g_8058e0], ebp
        pop     ebp
        pop     ebx
        ret
L_e23e:
        mov     esi, 0x78c990
        mov     eax, 0x7f3254
L_e248:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_e26c
        cmp     cl, bl
        jz      L_e268
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_e26c
        add     eax, 0x2
        add     esi, 0x2
        cmp     cl, bl
        jnz     L_e248
L_e268:
        xor     eax, eax
        jmp     L_e271
L_e26c:
        sbb     eax, eax
        sbb     eax, -0x1
L_e271:
        cmp     eax, ebx
        jnz     L_e294
        call    FUN_00649150
        mov     dword ptr [edi + 0x1c], 0x2
        call    FUN_00650580
        mov     dword ptr [edi + 0x30], eax
        pop     edi
        pop     esi
        mov     dword ptr [g_8058e0], ebp
        pop     ebp
        pop     ebx
        ret
L_e294:
        call    FUN_00649150
        mov     dword ptr [edi + 0x1c], 0x1
        call    FUN_00650580
        mov     dword ptr [edi + 0x30], eax
        pop     edi
        pop     esi
        mov     dword ptr [g_8058e0], ebp
        pop     ebp
        pop     ebx
        ret
    }
}
