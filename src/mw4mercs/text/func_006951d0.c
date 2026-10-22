/*
 * FUN_006951d0 (1130 B) — __thiscall, RET 0xc. Recursive string/format
 * builder using sprintf (IAT) and repeated repne-scasb string-length
 * computations.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_77b874;          /* 0x0077b874 */
extern int *g_76b420;         /* 0x0076b420 (IAT - sprintf) */

extern void __cdecl FUN_005e1bf0(void);
extern void __cdecl FUN_005cbd00(void);
extern void __cdecl FUN_006950b0(void);
extern void __cdecl FUN_005dddb0(void);
extern void __cdecl FUN_005cb1c0(void);
extern void __cdecl FUN_0067c040(void);
extern void __cdecl FUN_00696eb0(void);
extern void __cdecl FUN_00625110(void);
extern void __cdecl FUN_005dda40(void);
extern void __cdecl FUN_005ddbe0(void);
extern void __cdecl FUN_005cbe50(void);
extern void __cdecl FUN_005cbf80(void);
extern void __cdecl FUN_00547c60(void);
extern void __cdecl FUN_006951d0(void);

__declspec(naked) void FUN_006951d0(void)
{
    __asm {
        sub     esp, 0x9c
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    8
        lea     eax, [esp + 0x1b]
        mov     ebp, ecx
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_005e1bf0
        mov     edx, dword ptr [ebp + 4]
        sub     edx, dword ptr [ebp]
        mov     ecx, dword ptr [esp + 0x28]
        mov     esi, dword ptr [esp + 0xb0]
        mov     byte ptr [ecx], 0
        jz      L_954a4
        mov     ebx, dword ptr [esp + 0xb4]
        test    ebx, ebx
        jbe     L_9523d
L_95211:
        mov     eax, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        push    eax
        xor     eax, eax
        mov     edi, 0x7994ac
        repne scasb
        not     ecx
        dec     ecx
        add     ecx, 0x7994ac
        push    ecx
        push    0x7994ac
        lea     ecx, [esp + 0x30]
        call    FUN_005cbd00
        dec     ebx
        jnz     L_95211
L_9523d:
        mov     ecx, ebp
        call    FUN_006950b0
        cmp     eax, 2
        jnz     L_9525f
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x24]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005dddb0
L_9525f:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebp + 4]
        mov     eax, dword ptr [ebp]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005dddb0
        mov     ecx, dword ptr [ebp + 0x10]
        sub     ecx, dword ptr [ebp + 0xc]
        jz      L_952dd
        mov     edx, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7994a8
        repne scasb
        not     ecx
        dec     ecx
        push    edx
        add     ecx, 0x7994a8
        push    ecx
        push    0x7994a8
        mov     ecx, esi
        call    FUN_005cbd00
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ebp + 0xc]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_005dddb0
        mov     eax, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        push    eax
        xor     eax, eax
        mov     edi, 0x77e7d8
        repne scasb
        not     ecx
        dec     ecx
        add     ecx, 0x77e7d8
        push    ecx
        push    0x77e7d8
        mov     ecx, esi
        call    FUN_005cbd00
L_952dd:
        mov     ecx, dword ptr [ebp + 0x2c]
        sub     ecx, dword ptr [ebp + 0x28]
        jz      L_95471
        mov     dl, byte ptr [ebp + 0x30]
        lea     eax, [esp + 0x17]
        push    eax
        lea     ecx, [esp + 0x34]
        mov     byte ptr [esp + 0x1b], dl
        call    FUN_005cb1c0
        mov     ecx, dword ptr [ebp + 0x2c]
        mov     edx, dword ptr [ebp + 0x28]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x38]
        call    FUN_0067c040
        mov     bl, 0x5c
L_95311:
        mov     edx, dword ptr [esp + 0x34]
        mov     edi, dword ptr [esp + 0x30]
        mov     eax, edx
        sub     eax, edi
        mov     byte ptr [esp + 0x17], bl
        jz      L_95350
        lea     ecx, [esp + 0x17]
        push    ecx
        lea     edx, [esp + 0x23]
        push    edx
        lea     ecx, [esp + 0x28]
        call    FUN_00696eb0
        mov     edi, dword ptr [esp + 0x30]
        mov     edx, dword ptr [esp + 0x34]
        cmp     edi, edx
        mov     ax, word ptr [eax]
        mov     ecx, edi
        jz      L_95350
L_95347:
        cmp     byte ptr [ecx], ah
        jz      L_9538c
        inc     ecx
        cmp     ecx, edx
        jnz     L_95347
L_95350:
        mov     ecx, dword ptr [g_77b874]
L_95356:
        cmp     ecx, dword ptr [g_77b874]
        jz      L_95394
        sub     edx, edi
        cmp     edx, 1
        mov     dword ptr [esp + 0x18], 1
        mov     dword ptr [esp + 0x10], edx
        lea     eax, [esp + 0x10]
        jc      L_95379
        lea     eax, [esp + 0x18]
L_95379:
        mov     edx, dword ptr [eax]
        mov     ecx, edi
        add     ecx, edx
        push    ecx
        push    edi
        lea     ecx, [esp + 0x38]
        call    FUN_00625110
        jmp     L_95311
L_9538c:
        cmp     ecx, edx
        jz      L_95350
        sub     ecx, edi
        jmp     L_95356
L_95394:
        mov     edx, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7994a4
        repne scasb
        not     ecx
        dec     ecx
        push    edx
        add     ecx, 0x7994a4
        push    ecx
        push    0x7994a4
        mov     ecx, esi
        call    FUN_005cbd00
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x34]
        mov     edx, dword ptr [esp + 0x30]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_005dddb0
        mov     eax, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        push    eax
        xor     eax, eax
        mov     edi, 0x79949c
        repne scasb
        not     ecx
        dec     ecx
        add     ecx, 0x79949c
        push    ecx
        push    0x79949c
        mov     ecx, esi
        call    FUN_005cbd00
        mov     ecx, dword ptr [ebp + 0x34]
        push    ecx
        lea     edx, [esp + 0x4c]
        push    0x76b9a8
        push    edx
        call    dword ptr [g_76b420]
        add     esp, 0xc
        lea     eax, [esp + 0x1f]
        push    eax
        lea     ecx, [esp + 0x4c]
        push    ecx
        lea     ecx, [esp + 0x44]
        call    FUN_005dda40
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x40]
        mov     ecx, dword ptr [esp + 0x3c]
        push    edx
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005dddb0
        lea     ecx, [esp + 0x3c]
        call    FUN_005ddbe0
        mov     edx, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7927a0
        repne scasb
        not     ecx
        dec     ecx
        push    edx
        add     ecx, 0x7927a0
        push    ecx
        push    0x7927a0
        mov     ecx, esi
        call    FUN_005cbd00
        lea     ecx, [esp + 0x30]
        call    FUN_005ddbe0
L_95471:
        mov     ecx, ebp
        call    FUN_006950b0
        cmp     eax, 2
        jnz     L_954a4
        mov     eax, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        push    eax
        xor     eax, eax
        mov     edi, 0x77a078
        repne scasb
        not     ecx
        dec     ecx
        add     ecx, 0x77a078
        push    ecx
        push    0x77a078
        mov     ecx, esi
        call    FUN_005cbd00
L_954a4:
        mov     edi, dword ptr [ebp + 0x18]
        mov     ebp, dword ptr [ebp + 0x1c]
        xor     bl, bl
        cmp     edi, ebp
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x20], ebp
        jz      L_95536
L_954bc:
        mov     ebp, dword ptr [edi]
        mov     ecx, ebp
        call    FUN_006950b0
        test    eax, eax
        jnz     L_95525
        test    bl, bl
        jnz     L_954e5
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x24]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005cbe50
        jmp     L_95510
L_954e5:
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x794df4
        repne scasb
        not     ecx
        dec     ecx
        add     ecx, 0x794df4
        push    ecx
        push    0x794df4
        mov     ecx, esi
        call    FUN_005cbd00
        mov     edi, dword ptr [esp + 0x18]
L_95510:
        mov     edx, dword ptr [esp + 0xb4]
        push    0
        inc     edx
        push    edx
        push    esi
        mov     ecx, ebp
        call    FUN_006951d0
        mov     bl, 1
L_95525:
        mov     eax, dword ptr [esp + 0x20]
        add     edi, 4
        cmp     edi, eax
        mov     dword ptr [esp + 0x18], edi
        jnz     L_954bc
        mov     ebp, eax
L_95536:
        mov     edi, dword ptr [esp + 0x10]
        cmp     edi, ebp
        mov     dword ptr [esp + 0x18], edi
        jz      L_955bd
L_95542:
        mov     ebp, dword ptr [edi]
        mov     ecx, ebp
        call    FUN_006950b0
        cmp     eax, 1
        jnz     L_955ac
        test    bl, bl
        jnz     L_9556c
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x24]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_005cbe50
        jmp     L_95597
L_9556c:
        mov     eax, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        push    eax
        xor     eax, eax
        mov     edi, 0x794df4
        repne scasb
        not     ecx
        dec     ecx
        add     ecx, 0x794df4
        push    ecx
        push    0x794df4
        mov     ecx, esi
        call    FUN_005cbd00
        mov     edi, dword ptr [esp + 0x18]
L_95597:
        mov     ecx, dword ptr [esp + 0xb4]
        push    0
        inc     ecx
        push    ecx
        push    esi
        mov     ecx, ebp
        call    FUN_006951d0
        mov     bl, 1
L_955ac:
        mov     eax, dword ptr [esp + 0x20]
        add     edi, 4
        cmp     edi, eax
        mov     dword ptr [esp + 0x18], edi
        jnz     L_95542
        mov     ebp, eax
L_955bd:
        cmp     bl, 1
        jnz     L_955e9
        mov     edx, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77a078
        repne scasb
        not     ecx
        dec     ecx
        push    edx
        add     ecx, 0x77a078
        push    ecx
        push    0x77a078
        mov     ecx, esi
        call    FUN_005cbf80
L_955e9:
        mov     edi, dword ptr [esp + 0x10]
        cmp     edi, ebp
        jz      L_95619
L_955f1:
        mov     ebx, dword ptr [edi]
        mov     ecx, ebx
        call    FUN_006950b0
        cmp     eax, 2
        jnz     L_95612
        mov     eax, dword ptr [esp + 0xb4]
        push    0
        inc     eax
        push    eax
        push    esi
        mov     ecx, ebx
        call    FUN_006951d0
L_95612:
        add     edi, 4
        cmp     edi, ebp
        jnz     L_955f1
L_95619:
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x2c]
        sub     ecx, eax
        push    ecx
        push    eax
        call    FUN_00547c60
        add     esp, 8
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x9c
        ret     0xc
    }
}
