/*
 * FUN_0059d400 (735 B) — __thiscall (this in ECX, plain RET). Iterates a
 * list, applies threshold checks against obfuscated globals
 * (DAT_007dab44 ^ DAT_007dab40), and manages a growable int vector.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005178d0(void);
extern void __cdecl FUN_006140c0(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004da8d0(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0059db40(void);
extern void __cdecl FUN_00580620(void);
extern void __cdecl FUN_00416c60(void);

extern int g_007dab44;
extern int g_007dab40;

__declspec(naked) void __cdecl FUN_0059d400(void)
{
    __asm {
        sub     esp, 0x110
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0x10]
        and     eax, 1
        cmp     al, 1
        push    esi
        push    edi
        mov     dword ptr [esp + 0x18], ebp
        jnz     label_d41e
        add     dword ptr [ebp + 0x58], -4
label_d41e:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx + 0x44]
        xor     ebx, ebx
        xor     eax, 0x85739531
        add     eax, 0x54
        push    eax
        lea     ecx, [esp + 0x44]
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x28], ebx
        mov     dword ptr [esp + 0x2c], ebx
        mov     dword ptr [esp + 0x30], ebx
        mov     dword ptr [esp + 0x34], ebx
        mov     dword ptr [esp + 0x38], ebx
        mov     dword ptr [esp + 0x3c], ebx
        mov     dword ptr [esp + 0x40], ebx
        call    FUN_00416bc0
        lea     ecx, [esp + 0xdc]
        mov     dword ptr [esp + 0x40], 0x779f0c
        call    FUN_004d1f10
        lea     ecx, [esp + 0x40]
        call    FUN_00416cc0
        cmp     eax, ebx
        jz      label_d5f9
label_d488:
        mov     ecx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [ecx]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx + 0xc]
        xor     edx, 0x85739531
        jz      label_d5e8
        mov     ecx, dword ptr [ecx + 0x44]
        xor     ecx, 0x85739531
        jz      label_d5e8
        cmp     dword ptr [eax + 0x20], ebx
        jnz     label_d5e8
        mov     esi, dword ptr [eax + 0x14]
        cmp     esi, ebx
        jz      label_d4c7
        inc     byte ptr [esi - 1]
label_d4c7:
        push    esi
        lea     ecx, [esp + 0x14]
        call    FUN_00412570
        cmp     esi, ebx
        jz      label_d4e8
        mov     al, byte ptr [esi - 1]
        dec     esi
        dec     al
        mov     byte ptr [esi], al
        jnz     label_d4e8
        push    esi
        call    FUN_004084e0
        add     esp, 4
label_d4e8:
        mov     edx, dword ptr [esp + 0x10]
        xor     esi, esi
label_d4ee:
        cmp     edx, ebx
        jz      label_d518
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        cmp     esi, ecx
        jnc     label_d518
label_d502:
        mov     al, byte ptr [esi + edx]
        cmp     al, 0x30
        jl      label_d50d
        cmp     al, 0x39
        jle     label_d510
label_d50d:
        inc     esi
        jmp     label_d4ee
label_d510:
        mov     byte ptr [esi + edx], 0
        mov     edx, dword ptr [esp + 0x10]
label_d518:
        push    ecx
        mov     eax, esp
        mov     dword ptr [eax], edx
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        jz      label_d528
        inc     byte ptr [eax - 1]
label_d528:
        call    FUN_005178d0
        mov     ecx, dword ptr [eax + 0x84]
        call    FUN_006140c0
        mov     dx, word ptr [eax + 0x10]
        mov     ax, word ptr [eax + 0x12]
        push    1
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     ecx, [esp + 0xa0]
        mov     word ptr [esp + 0x1c], dx
        mov     word ptr [esp + 0x1e], ax
        call    FUN_004d1f80
        mov     esi, dword ptr [esp + 0xac]
        lea     ecx, [esp + 0x54]
        call    FUN_004d1f10
        add     esi, 0x54
        lea     edx, [esp + 0x54]
        push    esi
        push    edx
        call    FUN_004da8d0
        mov     esi, dword ptr [esp + 0x28]
        add     esp, 8
        xor     edi, edi
        mov     eax, 1
        lea     edx, [esp + 0x24]
label_d58d:
        mov     ecx, dword ptr [edx]
        cmp     ecx, esi
        jge     label_d597
        mov     esi, ecx
        mov     edi, eax
label_d597:
        inc     eax
        add     edx, 4
        cmp     eax, 8
        jl      label_d58d
        mov     ecx, dword ptr [esp + 0x68]
        mov     ecx, dword ptr [ecx + 0x660]
        mov     edx, dword ptr [esp + edi*4 + 0x20]
        cmp     ecx, edx
        lea     eax, [esp + edi*4 + 0x20]
        jle     label_d5b8
        mov     dword ptr [eax], ecx
label_d5b8:
        lea     ecx, [esp + 0x54]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x98]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        jz      label_d5e8
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     label_d5e8
        push    eax
        call    FUN_004084e0
        add     esp, 4
label_d5e8:
        lea     ecx, [esp + 0x40]
        call    FUN_00416cc0
        cmp     eax, ebx
        jnz     label_d488
label_d5f9:
        xor     ecx, ecx
        lea     eax, [esp + 0x20]
        mov     edx, 8
label_d604:
        add     ecx, dword ptr [eax]
        add     eax, 4
        dec     edx
        jnz     label_d604
        mov     esi, dword ptr [ebp + 0x58]
        mov     edi, dword ptr [ebp + 0x5c]
        cmp     esi, edi
        mov     dword ptr [esp + 0x1c], ecx
        jz      label_d62b
        cmp     esi, ebx
        jz      label_d620
        mov     dword ptr [esi], ecx
label_d620:
        add     esi, 4
        mov     dword ptr [ebp + 0x58], esi
        jmp     label_d6b1
label_d62b:
        mov     ebp, dword ptr [ebp + 0x54]
        mov     eax, esi
        sub     eax, ebp
        sar     eax, 2
        cmp     eax, 1
        mov     dword ptr [esp + 0x14], 1
        mov     dword ptr [esp + 0x10], eax
        lea     ecx, [esp + 0x14]
        jc      label_d64e
        lea     ecx, [esp + 0x10]
label_d64e:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x14], ecx
        jz      label_d66a
        lea     edx, [ecx*4]
        push    edx
        call    FUN_004084d0
        add     esp, 4
        mov     ebx, eax
label_d66a:
        push    ebx
        push    esi
        push    ebp
        call    FUN_0059db40
        add     esp, 0xc
        test    eax, eax
        jz      label_d67f
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [eax], ecx
label_d67f:
        add     eax, 4
        push    eax
        push    esi
        push    esi
        call    FUN_0059db40
        sub     edi, ebp
        sar     edi, 2
        push    edi
        push    ebp
        mov     esi, eax
        call    FUN_00580620
        mov     eax, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x28]
        lea     ecx, [ebx + edx*4]
        add     esp, 0x14
        mov     dword ptr [eax + 0x54], ebx
        mov     dword ptr [eax + 0x58], esi
        mov     dword ptr [eax + 0x5c], ecx
        mov     ebp, eax
label_d6b1:
        mov     eax, dword ptr [ebp + 0x10]
        or      eax, 1
        lea     ecx, [esp + 0xdc]
        mov     dword ptr [ebp + 0x10], eax
        call    FUN_004d21c0
        lea     ecx, [esp + 0x40]
        call    FUN_00416c60
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0x110
        ret
    }
}
