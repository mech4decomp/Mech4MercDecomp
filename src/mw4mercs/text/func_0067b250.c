/*
 * FUN_0067B250 (540 B) — __cdecl (2 stack params). Cookie-obfuscated
 * prologue (XOR with DAT_007dab40, XOR with 0x85739531). Searches two
 * object arrays (FUN_0041fd80 + FUN_00415230) for the param_2-th match,
 * then builds a string result via FUN_005cb1c0/005480c0/00563480/
 * 00547ba0/005634e0/00563520. Uses repne scasb for strlen.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;
extern int g_7f25c0;
extern int g_7f2574;
extern void __cdecl FUN_0067a640(void);
extern void __cdecl FUN_005cb1c0(void);
extern void __cdecl FUN_005480c0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00563480(void);
extern void __cdecl FUN_00547ba0(void);
extern void __cdecl FUN_005634e0(void);
extern void __cdecl FUN_00563520(void);

__declspec(naked) void __cdecl FUN_0067b250(void)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        push    ebx
        mov     ebx, dword ptr [g_7dab40]
        push    ebp
        push    esi
        xor     ecx, ebx
        mov     esi, dword ptr [ecx + 0x10]
        push    edi
        mov     edi, dword ptr [ecx + 0x10]
        lea     eax, [ecx + 0x10]
        xor     esi, 0x85739531
        xor     edi, 0x85739531
        xor     ebx, ebx
        add     esi, 0x18
        add     edi, 0x70
        mov     dword ptr [esp + 0x10], ebx
        call    FUN_0067a640
        mov     eax, dword ptr [eax + 0x14]
        mov     ecx, dword ptr [esp + 0x24]
        mov     ebp, dword ptr [esi + 0x4]
        lea     edx, [eax + eax*0x4]
        shl     edx, 0x3
        sub     edx, eax
        mov     eax, dword ptr [edi + 0x4]
        add     ecx, edx
        lea     edx, [eax + ebp*0x1]
        cmp     ecx, edx
        mov     dword ptr [esp + 0x24], ecx
        mov     dword ptr [esp + 0x18], eax
        jc      L_b2ee
        mov     esi, dword ptr [esp + 0x20]
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, esi
        call    FUN_005cb1c0
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x76b768
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x76b768
        push    ecx
        push    0x76b768
        mov     ecx, esi
        call    FUN_005480c0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
L_b2ee:
        test    ebp, ebp
        mov     dword ptr [esp + 0x14], 0x0
        jbe     L_b347
        mov     ebx, dword ptr [esi]
        add     ebx, 0x14
L_b2ff:
        mov     ecx, dword ptr [ebx]
        call    FUN_0041fd80
        mov     esi, eax
        test    esi, esi
        jz      L_b32f
        mov     eax, dword ptr [g_7f25c0]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_b32f
        mov     ecx, dword ptr [esp + 0x10]
        cmp     ecx, dword ptr [esp + 0x24]
        jz      L_b38d
        mov     eax, ecx
        inc     eax
        mov     dword ptr [esp + 0x10], eax
L_b32f:
        mov     eax, dword ptr [esp + 0x14]
        inc     eax
        add     ebx, 0x1c
        cmp     eax, ebp
        mov     dword ptr [esp + 0x14], eax
        jc      L_b2ff
        mov     ebx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x18]
L_b347:
        xor     ebp, ebp
        test    eax, eax
        jbe     L_b410
        mov     edi, dword ptr [edi]
        add     edi, 0x14
L_b356:
        mov     ecx, dword ptr [edi]
        call    FUN_0041fd80
        mov     esi, eax
        test    esi, esi
        jz      L_b37c
        mov     eax, dword ptr [g_7f2574]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_b37c
        cmp     ebx, dword ptr [esp + 0x24]
        jz      L_b3c6
        inc     ebx
L_b37c:
        mov     eax, dword ptr [esp + 0x18]
        inc     ebp
        add     edi, 0x1c
        cmp     ebp, eax
        jc      L_b356
        jmp     L_b410
L_b38d:
        mov     ebx, dword ptr [esp + 0x20]
        mov     esi, dword ptr [esi + 0x2c]
        lea     edx, [esp + 0x24]
        push    edx
        mov     ecx, ebx
        call    FUN_005cb1c0
        mov     eax, dword ptr [esp + 0x24]
        or      ecx, 0xffffffff
        push    eax
        xor     eax, eax
        mov     edi, esi
L_b3ac:
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, esi
        push    ecx
        push    esi
        mov     ecx, ebx
        call    FUN_00563480
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0xc
        ret
L_b3c6:
        mov     ebp, dword ptr [esi + 0x2c]
        mov     esi, dword ptr [esp + 0x20]
        lea     ecx, [esp + 0x20]
        xor     eax, eax
        push    ecx
        lea     edx, [esp + 0x28]
        push    edx
        lea     ecx, [esi + 0x8]
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esp + 0x28], eax
        call    FUN_00547ba0
        mov     eax, dword ptr [esp + 0x24]
        or      ecx, 0xffffffff
        push    eax
        xor     eax, eax
        mov     edi, ebp
L_b3f6:
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, ebp
        push    ecx
        push    ebp
        mov     ecx, esi
        call    FUN_00563480
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
L_b410:
        mov     cl, byte ptr [esp + 0x24]
        mov     esi, dword ptr [esp + 0x20]
        xor     eax, eax
        mov     dword ptr [esi], eax
        mov     byte ptr [esi + 0x8], cl
        mov     edi, 0x76b768
        mov     dword ptr [esi + 0x4], eax
        or      ecx, 0xffffffff
        repne   scasb
        not     ecx
        dec     ecx
        mov     edi, ecx
        add     edi, 0x76b768
        mov     edx, edi
        sub     edx, 0x76b768
        inc     edx
        push    edx
        mov     ecx, esi
        mov     dword ptr [esi + 0x8], eax
        call    FUN_005634e0
        mov     eax, dword ptr [esi]
        push    eax
        push    edi
        push    0x76b768
        call    FUN_00563520
        add     esp, 0xc
        pop     edi
        mov     dword ptr [esi + 0x4], eax
        mov     byte ptr [eax], 0x0
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
    }
}
