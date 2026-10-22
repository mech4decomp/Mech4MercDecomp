/*
 * FUN_00693660 (802 B) - in-.text data block transcription. Builds a
 * descriptor/result object at [ebp] (size 0x10c), copies a cached string
 * (0x7b8de8 / param string) into it, and fills coordinate fields
 * (0x84/0x86) from a lookup, with a fallback path.
 *
 * CFLAGS: /O1
 */

extern int g_007db0a0;
extern unsigned short g_007db0ac;
extern unsigned short g_007db0ae;
extern int g_007db0b0;
extern unsigned char g_007b8ef0;
extern int g_007b8c10;

extern void __cdecl FUN_00637ac0(void);
extern void __cdecl FUN_00508160(void);
extern void __cdecl FUN_004cfbd0(void);
extern void __cdecl FUN_00411d60(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_006fc4d0(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_00412390(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d24f0(void);
extern void __cdecl FUN_004d2630(void);
extern void __cdecl FUN_004d2840(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_00412b80(void);
extern void __cdecl FUN_005d7cb0(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_00412e70(void);
extern void __cdecl FUN_004cfc90(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_00412b60(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_00637b10(void);
extern void __cdecl FUN_0040de20(void);

__declspec(naked) void FUN_00693660(void)
{
    __asm {
        sub     esp, 0xfc
        push    ebx
        push    ebp
        push    esi
        push    edi
        call    FUN_00637ac0
        mov     edi, dword ptr [esp + 0x110]
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    0x10c
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_00508160
        mov     edx, dword ptr [esi]
        add     esp, 4
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     ebx, dword ptr [edi + 4]
        mov     ecx, dword ptr [g_007db0a0]
        mov     ebp, eax
        mov     eax, dword ptr [ebx + 0x10]
        push    eax
        mov     dword ptr [ebp], 0x10c
        call    FUN_004cfbd0
        push    0
        lea     ecx, [esp + 0x18]
        push    ecx
        push    0x7993f0
        mov     ecx, ebx
        mov     dword ptr [esp + 0x20], 0x44960000
        call    FUN_00411d60
        mov     edx, dword ptr [esp + 0x14]
        push    0
        lea     eax, [esp + 0x14]
        push    eax
        push    0x797ee4
        mov     ecx, ebx
        mov     dword ptr [ebp + 0x108], edx
        mov     byte ptr [ebp + 0x88], 0
        call    FUN_00411bf0
        test    al, al
        je      L_376b
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        call    FUN_006fc4d0
        test    al, al
        je      L_3764
        mov     al, byte ptr [g_007b8ef0]
        test    al, al
        je      L_3736
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7b8de8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 2
        lea     edi, [ebp + 0x88]
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     byte ptr [g_007b8ef0], al
        jmp     L_376b
L_3736:
        mov     edi, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        lea     edi, [ebp + 0x88]
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     byte ptr [g_007b8ef0], 0
        jmp     L_376b
L_3764:
        mov     byte ptr [ebp + 0x88], 0
L_376b:
        mov     cx, word ptr [g_007db0ac]
        mov     dx, word ptr [g_007db0ae]
        mov     word ptr [ebp + 0x84], cx
        xor     edi, edi
        push    edi
        lea     ecx, [esp + 0xc0]
        mov     word ptr [ebp + 0x86], dx
        call    FUN_0040dd50
        push    edi
        lea     eax, [esp + 0xc0]
        push    eax
        push    0x7993e4
        mov     ecx, ebx
        call    FUN_00412390
        test    al, al
        je      L_395b
        mov     ecx, dword ptr [esp + 0xbc]
        push    edi
        push    ecx
        lea     ecx, [esp + 0x58]
        call    FUN_004d2000
        cmp     dword ptr [esp + 0x8c], edi
        je      L_3825
        cmp     dword ptr [esp + 0x6c], edi
        jbe     L_3825
        lea     ecx, [esp + 0x50]
        call    FUN_004d24f0
        test    al, al
        je      L_3825
        mov     dx, word ptr [esp + 0x90]
        mov     ax, word ptr [esp + 0x92]
        lea     ecx, [esp + 0x50]
        mov     word ptr [ebp + 0x84], dx
        mov     word ptr [ebp + 0x86], ax
        call    FUN_004d2630
        test    al, al
        jne     L_3952
        mov     ecx, dword ptr [g_007db0b0]
        push    ecx
        lea     ecx, [esp + 0x54]
        call    FUN_004d2840
        jmp     L_3952
L_3825:
        mov     edx, dword ptr [g_007b8c10]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_00415180
        push    edi
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x24], edi
        mov     dword ptr [esp + 0x28], edi
        mov     dword ptr [esp + 0x1c], 0x76cd9c
        call    FUN_0041ee70
        lea     eax, [esp + 0xc8]
        push    eax
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x1c], 0x76d1f0
        call    FUN_00412b80
        mov     esi, dword ptr [g_007db0b0]
        lea     ecx, [esp + 0x18]
        lea     edx, [esp + 0xbc]
        mov     dword ptr [g_007db0b0], ecx
        mov     ecx, dword ptr [g_007db0a0]
        push    edx
        call    FUN_004cfbd0
        push    edi
        lea     ecx, [esp + 0x98]
        call    FUN_0041ee70
        lea     eax, [esp + 0xbc]
        push    eax
        lea     ecx, [esp + 0x98]
        push    ecx
        call    FUN_005d7cb0
        mov     edx, dword ptr [esp + 0xb0]
        mov     eax, dword ptr [esp + 0xac]
        add     esp, 8
        sub     edx, eax
        je      L_3911
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x98]
        push    ecx
        lea     ecx, [esp + 0x58]
        call    FUN_004d2680
        lea     ecx, [esp + 0x50]
        call    FUN_004d2630
        test    al, al
        jne     L_38f1
        lea     edx, [esp + 0x18]
        push    edx
        mov     ecx, esi
        call    FUN_00412e70
L_38f1:
        mov     ax, word ptr [esp + 0x90]
        mov     cx, word ptr [esp + 0x92]
        mov     word ptr [ebp + 0x84], ax
        mov     word ptr [ebp + 0x86], cx
        jmp     L_392c
L_3911:
        mov     dx, word ptr [g_007db0ac]
        mov     ax, word ptr [g_007db0ae]
        mov     word ptr [ebp + 0x84], dx
        mov     word ptr [ebp + 0x86], ax
L_392c:
        mov     ecx, dword ptr [g_007db0a0]
        mov     dword ptr [g_007db0b0], esi
        call    FUN_004cfc90
        lea     ecx, [esp + 0x94]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x18]
        call    FUN_00412b60
L_3952:
        lea     ecx, [esp + 0x50]
        call    FUN_004d21c0
L_395b:
        mov     ecx, dword ptr [g_007db0a0]
        call    FUN_004cfc90
        call    FUN_00637b10
        lea     ecx, [esp + 0xbc]
        call    FUN_0040de20
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xfc
        ret
    }
}
