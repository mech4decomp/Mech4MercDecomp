/*
 * FUN_005070B0 (736 B) — __cdecl (1 stack arg) gameplay/UI options loader.
 *
 * Reads a config object via virtual calls, queries global config (0x7db0a0)
 * and screen-size globals (0x7db0ac/0x7db0ae), builds a resolution/options
 * descriptor, and processes a linked list of option entries (allocating
 * nodes via malloc FUN_004084d0, freeing via FUN_004084e0). Contains a
 * backward-jump loop (0x5072D1 -> 0x507248) that walks the list.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_7db0a0;
extern short g_7db0ac;
extern short g_7db0ae;
extern int   g_7db0b0;

extern void __cdecl FUN_00501b70(void);
extern void __cdecl FUN_004cfbd0(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_00412390(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d24f0(void);
extern void __cdecl FUN_004d2630(void);
extern void __cdecl FUN_004d2840(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0040ed60(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004c41d0(void);
extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_0041f3d0(void);
extern void __cdecl FUN_0041f480(void);
extern void __cdecl FUN_0041a070(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004cfc90(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_0040de20(void);

__declspec(naked) void FUN_005070B0(void)
{
    __asm {
        sub     esp, 0x108
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x118]
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    0x64
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_00501b70
        mov     edx, dword ptr [esi]
        add     esp, 4
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     edi, dword ptr [edi + 4]
        mov     ecx, dword ptr [g_7db0a0]
        mov     ebp, eax
        mov     eax, dword ptr [edi + 0x10]
        push    eax
        mov     dword ptr [ebp], 0x64
        call    FUN_004cfbd0
        mov     cx, word ptr [g_7db0ac]
        mov     dx, word ptr [g_7db0ae]
        mov     word ptr [ebp + 0x60], cx
        push    0
        lea     ecx, [esp + 0xc8]
        mov     word ptr [ebp + 0x62], dx
        call    FUN_0040dd50
        push    0
        lea     eax, [esp + 0xc8]
        push    eax
        push    0x776fa0
        mov     ecx, edi
        call    FUN_00412390
        test    al, al
        je      L_50736f
        mov     ecx, dword ptr [esp + 0xc4]
        push    0
        push    ecx
        lea     ecx, [esp + 0x4c]
        call    FUN_004d2000
        mov     eax, dword ptr [esp + 0x80]
        test    eax, eax
        je      L_5071a5
        mov     eax, dword ptr [esp + 0x60]
        test    eax, eax
        jbe     L_5071a5
        lea     ecx, [esp + 0x44]
        call    FUN_004d24f0
        test    al, al
        je      L_5071a5
        lea     ecx, [esp + 0x44]
        call    FUN_004d2630
        test    al, al
        jne     L_507188
        mov     edx, dword ptr [g_7db0b0]
        push    edx
        lea     ecx, [esp + 0x48]
        call    FUN_004d2840
L_507188:
        mov     ax, word ptr [esp + 0x84]
        mov     cx, word ptr [esp + 0x86]
        mov     word ptr [ebp + 0x60], ax
        mov     word ptr [ebp + 0x62], cx
        jmp     L_507366
L_5071a5:
        mov     ecx, dword ptr [g_7db0a0]
        push    ebx
        lea     edx, [esp + 0xc8]
        push    edx
        call    FUN_004cfbd0
        push    0
        lea     ecx, [esp + 0x24]
        call    FUN_0041ee70
        push    0x776fa0
        lea     ecx, [esp + 0xcc]
        call    FUN_0040ed60
        push    0x776f94
        lea     ecx, [esp + 0xcc]
        mov     edi, eax
        call    FUN_0040ed60
        push    0xc
        mov     ebx, eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        je      L_50720d
        add     edi, 0x18
        push    edi
        mov     ecx, esi
        call    FUN_004c41d0
        mov     dword ptr [esi], 0x76cc9c
        jmp     L_50720f
L_50720d:
        xor     esi, esi
L_50720f:
        push    0xc
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        test    edi, edi
        je      L_507234
        add     ebx, 0x18
        push    ebx
        mov     ecx, edi
        call    FUN_004c41d0
        mov     dword ptr [edi], 0x76cc9c
        mov     ebx, edi
        jmp     L_507236
L_507234:
        xor     ebx, ebx
L_507236:
        mov     ecx, dword ptr [esi + 4]
        call    FUN_00417a40
        mov     dword ptr [esp + 0x10], eax
        push    4
        lea     eax, [esp + 0x14]
L_507248:
        mov     edx, dword ptr [esp + 0x24]
        push    eax
        lea     ecx, [esp + 0x28]
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [esi + 8]
        test    eax, eax
        je      L_5072d6
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     eax, dword ptr [eax + 4]
        mov     dword ptr [esi + 8], eax
        je      L_5072d6
        mov     eax, dword ptr [ebx + 8]
        test    eax, eax
        je      L_507278
        mov     edx, dword ptr [eax + 4]
        mov     edi, dword ptr [eax]
        mov     dword ptr [ebx + 8], edx
        jmp     L_50727a
L_507278:
        xor     edi, edi
L_50727a:
        lea     eax, [esp + 0x14]
        push    eax
        call    FUN_0041f3d0
        lea     ecx, [esp + 0x8c]
        push    ecx
        mov     ecx, edi
        call    FUN_0041f480
        lea     edx, [esp + 0x8c]
        push    edx
        lea     ecx, [esp + 0x9c]
        call    FUN_0041a070
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0xa4], eax
        mov     dword ptr [esp + 0xb4], ecx
        mov     dword ptr [esp + 0xc4], edx
        push    0x30
        lea     eax, [esp + 0x9c]
        jmp     L_507248
L_5072d6:
        mov     eax, dword ptr [esp + 0x34]
        sub     eax, dword ptr [esp + 0x30]
        je      L_50732d
        lea     ecx, [esp + 0xd4]
        push    ecx
        lea     edx, [esp + 0x24]
        push    edx
        lea     ecx, [esp + 0x50]
        call    FUN_004d2680
        mov     cx, word ptr [esp + 0x8a]
        mov     ax, word ptr [esp + 0x88]
        mov     word ptr [ebp + 0x62], cx
        lea     ecx, [esp + 0x48]
        mov     word ptr [ebp + 0x60], ax
        call    FUN_004d2630
        test    al, al
        jne     L_507342
        mov     edx, dword ptr [g_7db0b0]
        push    edx
        lea     ecx, [esp + 0x4c]
        call    FUN_004d2840
        jmp     L_507342
L_50732d:
        mov     ax, word ptr [g_7db0ac]
        mov     cx, word ptr [g_7db0ae]
        mov     word ptr [ebp + 0x60], ax
        mov     word ptr [ebp + 0x62], cx
L_507342:
        push    ebx
        call    FUN_004084e0
        push    esi
        call    FUN_004084e0
        mov     ecx, dword ptr [g_7db0a0]
        add     esp, 8
        call    FUN_004cfc90
        lea     ecx, [esp + 0x20]
        call    FUN_0041ef60
        pop     ebx
L_507366:
        lea     ecx, [esp + 0x44]
        call    FUN_004d21c0
L_50736f:
        mov     ecx, dword ptr [g_7db0a0]
        call    FUN_004cfc90
        lea     ecx, [esp + 0xc4]
        call    FUN_0040de20
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x108
        ret
    }
}
