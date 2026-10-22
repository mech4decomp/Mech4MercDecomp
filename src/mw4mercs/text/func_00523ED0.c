/*
 * FUN_00523ED0 (385 B) — data block 0x523E77. Contains three RET 0xC
 * routines (0x523ED0, 0x523F70, 0x524010) that validate an index, walk the
 * XOR-obfuscated globals [0x7dab44]/[0x7dab40] (key 0x85739531), and copy
 * a string via 0x6f3c80 / 0x6f4230.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;

extern void __cdecl FUN_006F4230(void);
extern void __cdecl FUN_006F3C80(void);

__declspec(naked) void FUN_00523ED0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [edx]
        mov     eax, dword ptr [eax]
        test    eax, eax
        push    edi
        jge     L_ee3
        xor     eax, eax
        pop     edi
        ret     0xc
L_ee3:
        cmp     eax, 0x18
        jl      L_eee
        xor     eax, eax
        pop     edi
        ret     0xc
L_eee:
        mov     ecx, dword ptr [g_7dab44]
        imul    eax, eax, 0x22ac
        mov     ecx, dword ptr [ecx]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        lea     edi, [eax + ecx]
        mov     al, byte ptr [edi + 0x205f34]
        test    al, al
        jne     L_f1e
        xor     eax, eax
        pop     edi
        ret     0xc
L_f1e:
        push    esi
        mov     esi, dword ptr [edx + 4]
        mov     eax, dword ptr [esi]
        test    eax, eax
        je      L_f2e
        push    eax
        call    FUN_006F4230
L_f2e:
        push    0
        push    0x100
        call    FUN_006F3C80
        or      ecx, -1
        mov     edx, eax
        add     edi, 0x205d34
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     dword ptr [esi], edx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        pop     esi
        mov     eax, 1
        pop     edi
        ret     0xc
        nop
        nop
        nop
        nop
        nop
        mov     edx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [edx]
        mov     eax, dword ptr [eax]
        test    eax, eax
        push    edi
        jge     L_f83
        xor     eax, eax
        pop     edi
        ret     0xc
L_f83:
        cmp     eax, 0x18
        jl      L_f8e
        xor     eax, eax
        pop     edi
        ret     0xc
L_f8e:
        mov     ecx, dword ptr [g_7dab44]
        imul    eax, eax, 0x22ac
        mov     ecx, dword ptr [ecx]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        lea     edi, [eax + ecx]
        mov     al, byte ptr [edi + 0x205f34]
        test    al, al
        jne     L_fbe
        xor     eax, eax
        pop     edi
        ret     0xc
L_fbe:
        push    esi
        mov     esi, dword ptr [edx + 4]
        mov     eax, dword ptr [esi]
        test    eax, eax
        je      L_fce
        push    eax
        call    FUN_006F4230
L_fce:
        push    0
        push    0x100
        call    FUN_006F3C80
        or      ecx, -1
        mov     edx, eax
        add     edi, 0x205e34
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     dword ptr [esi], edx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        pop     esi
        mov     eax, 1
        pop     edi
        ret     0xc
        nop
        nop
        nop
        nop
        nop
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        mov     ecx, dword ptr [ecx]
        test    ecx, ecx
        jl      L_4049
        cmp     ecx, 0x18
        jge     L_4049
        mov     edx, dword ptr [g_7dab44]
        imul    ecx, ecx, 0x22ac
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_7dab40]
        mov     eax, dword ptr [eax + 0xc]
        xor     eax, 0x85739531
        mov     eax, dword ptr [ecx + eax + 0x205f3c]
        cmp     eax, 0x2d
        jne     L_404e
L_4049:
        mov     eax, 0x2c
L_404e:
        ret     0xc
    }
}
