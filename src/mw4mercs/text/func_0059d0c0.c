/*
 * FUN_0059d0c0 (585 B) — __thiscall (RET 4). Iterates a list, applies
 * threshold checks against obfuscated globals (DAT_007dab44 ^ DAT_007dab40),
 * accumulates a total, and returns it (with FPU ftol conversion).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_0040f060(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_005178d0(void);
extern void __cdecl FUN_006140c0(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004da8d0(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_00416c60(void);

extern int g_007dab44;
extern int g_007dab40;
extern float g_0076ed00;

__declspec(naked) void __cdecl FUN_0059d0c0(void)
{
    __asm {
        sub     esp, 0xf0
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax]
        push    ebx
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x44]
        push    ebp
        push    esi
        xor     edx, 0x85739531
        push    edi
        add     edx, 0x54
        xor     ebx, ebx
        xor     edi, edi
        push    edx
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x1c], edi
        call    FUN_00416bc0
        lea     ecx, [esp + 0xbc]
        mov     dword ptr [esp + 0x20], 0x779f0c
        call    FUN_004d1f10
        lea     ecx, [esp + 0x20]
        call    FUN_00416cc0
        test    eax, eax
        jz      label_d28c
        mov     ebp, dword ptr [esp + 0x104]
label_d127:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0xc]
        xor     edx, 0x85739531
        jz      label_d154
        mov     ecx, dword ptr [ecx + 0x44]
        xor     ecx, 0x85739531
        jz      label_d154
        mov     ecx, dword ptr [eax + 0x20]
        test    ecx, ecx
        jz      label_d183
label_d154:
        mov     ecx, 1
        cmp     ebp, ecx
        jl      label_d167
        cmp     dword ptr [eax + 0x20], ecx
        jnz     label_d167
        cmp     dword ptr [eax + 0x2c], ecx
        jz      label_d183
label_d167:
        cmp     ebp, 2
        jnz     label_d277
        cmp     dword ptr [eax + 0x20], 3
        jnz     label_d277
        cmp     dword ptr [eax + 0x2c], ecx
        jnz     label_d277
label_d183:
        add     eax, 0x14
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_0040f060
        mov     edx, dword ptr [esp + 0x1c]
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_00412570
        lea     ecx, [esp + 0x1c]
        call    FUN_0040d9b0
        mov     edx, dword ptr [esp + 0x14]
        xor     esi, esi
label_d1ad:
        test    edx, edx
        jz      label_d1d7
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        cmp     esi, ecx
        jnc     label_d1d7
label_d1c1:
        mov     al, byte ptr [esi + edx]
        cmp     al, 0x30
        jl      label_d1cc
        cmp     al, 0x39
        jle     label_d1cf
label_d1cc:
        inc     esi
        jmp     label_d1ad
label_d1cf:
        mov     byte ptr [esi + edx], 0
        mov     edx, dword ptr [esp + 0x14]
label_d1d7:
        push    ecx
        mov     eax, esp
        mov     dword ptr [eax], edx
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      label_d1e7
        inc     byte ptr [eax - 1]
label_d1e7:
        call    FUN_005178d0
        mov     ecx, dword ptr [eax + 0x84]
        call    FUN_006140c0
        mov     cx, word ptr [eax + 0x10]
        mov     dx, word ptr [eax + 0x12]
        push    1
        lea     eax, [esp + 0x14]
        mov     word ptr [esp + 0x14], cx
        push    eax
        lea     ecx, [esp + 0x80]
        mov     word ptr [esp + 0x1a], dx
        call    FUN_004d1f80
        mov     esi, dword ptr [esp + 0x8c]
        lea     ecx, [esp + 0x34]
        call    FUN_004d1f10
        add     esi, 0x54
        lea     ecx, [esp + 0x34]
        push    esi
        push    ecx
        call    FUN_004da8d0
        mov     edx, dword ptr [esp + 0x50]
        mov     esi, dword ptr [edx + 0x78]
        add     esp, 8
        lea     ecx, [esp + 0x34]
        add     ebx, esi
        call    FUN_004d21c0
        lea     ecx, [esp + 0x78]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      label_d273
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     label_d273
        push    eax
        call    FUN_004084e0
        add     esp, 4
label_d273:
        mov     edi, dword ptr [esp + 0x18]
label_d277:
        lea     ecx, [esp + 0x20]
        call    FUN_00416cc0
        test    eax, eax
        jnz     label_d127
        mov     dword ptr [esp + 0x10], ebx
label_d28c:
        fild    dword ptr [esp + 0x10]
        fmul    dword ptr [g_0076ed00]
        call    FUN_0075db4a
        mov     ebp, dword ptr [g_007dab40]
        mov     esi, eax
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, ebp
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x38]
        mov     ecx, dword ptr [eax + 0x10]
        add     eax, 0x10
label_d2be:
        test    ecx, ecx
        jz      label_d2e4
        mov     eax, dword ptr [ecx]
        test    eax, eax
        mov     ecx, dword ptr [ecx + 4]
        jz      label_d2e4
        mov     dl, byte ptr [eax + 0x24]
        test    dl, dl
        jz      label_d2be
        mov     edx, dword ptr [eax + 0x6c]
        cmp     edx, 1
        jz      label_d2df
        cmp     edx, 2
        jnz     label_d2be
label_d2df:
        add     edi, dword ptr [eax + 0x68]
        jmp     label_d2be
label_d2e4:
        lea     ecx, [esp + 0xbc]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x20]
        call    FUN_00416c60
        lea     eax, [edi + esi]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xf0
        ret     4
    }
}
