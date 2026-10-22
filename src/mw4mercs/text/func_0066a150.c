/*
 * FUN_0066a150 (616 B) — Loads trail-effect/shadow configuration from
 * the game database (FUN_00412390), builds a shadow object list, and
 * writes 16-bit IDs into a buffer (EBX+0x2e8..0x2ee).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short g_7db0ae;  /* 0x007db0ae */
extern unsigned short g_7db0ac;  /* 0x007db0ac */
extern int g_7db0a0;             /* 0x007db0a0 */
extern int g_7b8810;             /* 0x007b8810 */
extern int g_7db0b0;             /* 0x007db0b0 */

extern void __cdecl FUN_0062e8e0(void);
extern void __cdecl FUN_0040ed60(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_00412390(void);
extern void __cdecl FUN_0062f6e0(void);
extern void __cdecl FUN_004cfbd0(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_00421ec0(void);
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004900f0(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_004d2840(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_00412e70(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004cfc90(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_0040de20(void);

__declspec(naked) void FUN_0066a150(void)
{
    __asm {
        sub     esp, 0x110
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x120]
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    0x2f8
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_0062e8e0
        mov     edx, dword ptr [esi]
        add     esp, 0x4
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     cx, word ptr [g_7db0ae]
        mov     ebx, eax
        mov     ax, word ptr [g_7db0ac]
        mov     word ptr [ebx + 0x2ea], cx
        mov     ecx, dword ptr [edi + 0x4]
        push    0x7723e8
        mov     word ptr [ebx + 0x2e8], ax
        call    FUN_0040ed60
        push    0x0
        lea     ecx, [esp + 0xd0]
        mov     esi, eax
        call    FUN_0040dd50
        push    0x0
        lea     edx, [esp + 0xd0]
        push    edx
        push    0x796670
        mov     ecx, esi
        call    FUN_00412390
        test    al, al
        jz      L_a1fe
        push    0x18
        lea     eax, [esp + 0xd0]
        push    eax
        lea     ecx, [esp + 0x3c]
        push    ecx
        call    FUN_0062f6e0
        mov     dx, word ptr [eax]
        mov     ax, word ptr [eax + 0x2]
        add     esp, 0xc
        mov     word ptr [ebx + 0x2e8], dx
        mov     word ptr [ebx + 0x2ea], ax
L_a1fe:
        push    0x0
        lea     ecx, [esp + 0x3c]
        call    FUN_0040dd50
        push    0x0
        lea     ecx, [esp + 0x3c]
        push    ecx
        push    0x76ff94
        mov     ecx, esi
        call    FUN_00412390
        test    al, al
        jnz     L_a240
        mov     dx, word ptr [g_7db0ac]
        mov     ax, word ptr [g_7db0ae]
        mov     word ptr [ebx + 0x2ec], dx
        mov     word ptr [ebx + 0x2ee], ax
        jmp     L_a399
L_a240:
        lea     ecx, [esp + 0x38]
        push    ecx
        mov     ecx, dword ptr [g_7db0a0]
        call    FUN_004cfbd0
        push    0x0
        lea     ecx, [esp + 0x10]
        call    FUN_0041ee70
        lea     edx, [esp + 0xc]
        push    edx
        call    FUN_00421ec0
        mov     eax, dword ptr [g_7b8810]
        push    eax
        push    0xc
        call    FUN_004084c0
        add     esp, 0xc
        test    eax, eax
        jz      L_a291
        lea     ecx, [esp + 0x7c]
        mov     dword ptr [eax + 0x4], ecx
        mov     edx, dword ptr [esp + 0x7c]
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax], 0x76cd64
        mov     edi, eax
        jmp     L_a293
L_a291:
        xor     edi, edi
L_a293:
        mov     eax, dword ptr [edi + 0x8]
        test    eax, eax
        jz      L_a2cb
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     eax, dword ptr [eax + 0x4]
        mov     dword ptr [edi + 0x8], eax
        jz      L_a2cb
        push    ecx
        call    FUN_004900f0
        mov     esi, eax
        mov     edx, dword ptr [esi]
        add     esp, 0x4
        lea     eax, [esp + 0xc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        test    esi, esi
        jz      L_a293
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
        jmp     L_a293
L_a2cb:
        mov     eax, dword ptr [esp + 0x20]
        sub     eax, dword ptr [esp + 0x1c]
        jz      L_a351
        mov     edx, dword ptr [esp + 0xc]
        push    0x0
        lea     ecx, [esp + 0x10]
        call    dword ptr [edx + 0xc]
        mov     eax, dword ptr [esp + 0x38]
        push    0x0
        push    eax
        lea     ecx, [esp + 0x90]
        mov     dword ptr [esp + 0x1c], 0xffffffec
        call    FUN_004d2000
        lea     ecx, [esp + 0x44]
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        lea     ecx, [esp + 0x90]
        call    FUN_004d2680
        mov     eax, dword ptr [g_7db0b0]
        push    eax
        lea     ecx, [esp + 0x8c]
        call    FUN_004d2840
        mov     cx, word ptr [esp + 0xc8]
        mov     dx, word ptr [esp + 0xca]
        mov     word ptr [ebx + 0x2ec], cx
        lea     ecx, [esp + 0x88]
        mov     word ptr [ebx + 0x2ee], dx
        call    FUN_004d21c0
        jmp     L_a37c
L_a351:
        mov     cx, word ptr [g_7db0ae]
        mov     ax, word ptr [g_7db0ac]
        lea     edx, [esp + 0x44]
        mov     word ptr [ebx + 0x2ee], cx
        mov     ecx, dword ptr [g_7db0b0]
        push    edx
        mov     word ptr [ebx + 0x2ec], ax
        call    FUN_00412e70
L_a37c:
        push    edi
        call    FUN_004084e0
        mov     ecx, dword ptr [g_7db0a0]
        add     esp, 0x4
        call    FUN_004cfc90
        lea     ecx, [esp + 0xc]
        call    FUN_0041ef60
L_a399:
        lea     ecx, [esp + 0x38]
        call    FUN_0040de20
        lea     ecx, [esp + 0xcc]
        call    FUN_0040de20
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x110
        ret
    }
}
