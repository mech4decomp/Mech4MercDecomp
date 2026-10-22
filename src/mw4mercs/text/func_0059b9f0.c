/*
 * FUN_0059b9f0 (651 B) — __thiscall (this in ECX, plain RET). Iterates a
 * linked list of objects, applying threshold checks against obfuscated
 * global data (DAT_007dab44 ^ DAT_007dab40).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004c41d0(void);
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_0059ced0(void);
extern void __cdecl FUN_0059cf10(void);
extern void __cdecl FUN_0059cf30(void);
extern void __cdecl FUN_0059cef0(void);
extern void __cdecl FUN_0059cf50(void);
extern void __cdecl FUN_00595b60(void);
extern void __cdecl FUN_0059bf30(void);

extern int g_007dab44;
extern int g_007dab40;

__declspec(naked) void __cdecl FUN_0059b9f0(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        mov     ebx, ecx
        push    esi
        lea     eax, [ebx + 0x10]
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_004c41d0
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x8], 0x7838a0
        call    FUN_0040c0e0
        mov     esi, eax
        test    esi, esi
        jz      label_bc75
        push    ebp
        push    edi
label_ba21:
        mov     eax, dword ptr [esi + 0x1c]
        test    eax, eax
        jnz     label_bc60
        mov     ecx, dword ptr [g_007dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [g_007dab40]
        mov     edx, dword ptr [eax + 0x44]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x1c]
        mov     edx, dword ptr [esi + 0x34]
        cmp     edx, dword ptr [ecx + 0x28]
        jg      label_ba74
        mov     eax, dword ptr [eax + 0x44]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x1c]
        mov     edx, dword ptr [ecx + 0x28]
        push    esi
        lea     ecx, [ebx + 0x18]
        mov     dword ptr [esi + 0x1c], 1
        mov     dword ptr [esi + 0x4c], edx
        call    FUN_004179b0
        jmp     label_bc60
label_ba74:
        mov     eax, dword ptr [eax + 0x44]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x1c]
        call    FUN_0059ced0
        cmp     dword ptr [esi + 0x20], eax
        jg      label_babd
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx + 0x44]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x1c]
        mov     edx, dword ptr [ecx + 0x28]
        push    esi
        lea     ecx, [ebx + 0x18]
        mov     dword ptr [esi + 0x1c], 1
        mov     dword ptr [esi + 0x4c], edx
        call    FUN_004179b0
        jmp     label_bc60
label_babd:
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x44]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1c]
        call    FUN_0059cf10
        cmp     dword ptr [esi + 0x24], eax
        jle     label_bbb6
        mov     ecx, dword ptr [g_007dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [g_007dab40]
        mov     edx, dword ptr [eax + 0x44]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x1c]
        call    FUN_0059cf30
        cmp     dword ptr [esi + 0x28], eax
        jg      label_bb3c
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x1c]
        mov     ecx, dword ptr [eax + 0x28]
        mov     dword ptr [esi + 0x4c], ecx
        push    esi
        lea     ecx, [ebx + 0x18]
        mov     dword ptr [esi + 0x1c], 1
        call    FUN_004179b0
        jmp     label_bc60
label_bb3c:
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     eax, dword ptr [eax + 0x44]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x1c]
        call    FUN_0059cef0
        cmp     dword ptr [esi + 0x2c], eax
        jg      label_bb93
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx + 0x44]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x1c]
        mov     edx, dword ptr [ecx + 0x28]
        push    esi
        lea     ecx, [ebx + 0x18]
        mov     dword ptr [esi + 0x1c], 1
        mov     dword ptr [esi + 0x4c], edx
        call    FUN_004179b0
        jmp     label_bc60
label_bb93:
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x44]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1c]
        call    FUN_0059cf50
        cmp     dword ptr [esi + 0x30], eax
        jg      label_bbe8
label_bbb6:
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x44]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x1c]
        mov     eax, dword ptr [edx + 0x28]
        push    esi
        lea     ecx, [ebx + 0x18]
        mov     dword ptr [esi + 0x1c], 1
        mov     dword ptr [esi + 0x4c], eax
        call    FUN_004179b0
        jmp     label_bc60
label_bbe8:
        xor     edi, edi
        lea     ebp, [esi + 0x38]
label_bbed:
        mov     ecx, dword ptr [ebp]
        test    ecx, ecx
        jl      label_bc60
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     eax, dword ptr [eax + 0x44]
        xor     eax, 0x85739531
        push    ecx
        mov     ecx, dword ptr [eax + 0x34]
        call    FUN_00595b60
        cmp     dword ptr [eax + 0x18], 2
        jnz     label_bc53
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx + 0x44]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x1c]
        mov     edx, dword ptr [ecx + 0x28]
        push    esi
        lea     ecx, [ebx + 0x18]
        mov     dword ptr [esi + 0x1c], 1
        mov     dword ptr [esi + 0x4c], edx
        call    FUN_004179b0
        inc     edi
        add     ebp, 4
        cmp     edi, 5
        jl      label_bbed
        jmp     label_bc60
label_bc53:
        mov     eax, dword ptr [esi + 0x18]
        push    eax
        push    0
        mov     ecx, ebx
        call    FUN_0059bf30
label_bc60:
        lea     ecx, [esp + 0x10]
        call    FUN_0040c0e0
        mov     esi, eax
        test    esi, esi
        jnz     label_ba21
        pop     edi
        pop     ebp
label_bc75:
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret
    }
}
