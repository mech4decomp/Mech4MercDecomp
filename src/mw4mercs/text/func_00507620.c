/*
 * FUN_00507620 (363 B) — __cdecl (1 stack param), RET 0.
 *
 * In-.text data block at 0x5070A9 (368 B). Builds a 0x7c-byte object via a
 * vtable-dispatched allocator (call [eax+0x14]), then fills it from a
 * config object (FUN_00412390 with vtable 0x776fc0 / 0x772b38), reads
 * globals 0x7dc694/0x7dc696, and accumulates into [edi+8]. Trailing 5 NOPs
 * excluded from the slice.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00507790(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_00412390(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004d0690(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_0040de20(void);

extern char  g_7dc694;   /* DAT_007dc694 */
extern short g_7dc696;   /* DAT_007dc696 */
extern int   g_7db0a0;   /* DAT_007db0a0 */

__declspec(naked) void __cdecl FUN_00507620(void)
{
    __asm {
        sub     esp, 0x9c
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xb0]
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    0x7c
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_00507790
        mov     edx, dword ptr [esi]
        add     esp, 4
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     ebp, dword ptr [edi + 4]
        mov     esi, eax
        xor     ebx, ebx
        push    ebx
        lea     ecx, [esp + 0x60]
        mov     dword ptr [esi], 0x7c
        call    FUN_0040dd50
        push    1
        lea     eax, [esp + 0x60]
        push    eax
        push    0x776fc0
        mov     ecx, ebp
        call    FUN_00412390
        lea     ecx, [esp + 0x18]
        call    FUN_004d1f10
        mov     cl, byte ptr [g_7dc694]
        mov     dx, word ptr [g_7dc696]
        mov     byte ptr [esp + 0x10], cl
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x60]
        mov     word ptr [esp + 0x16], dx
        push    ecx
        mov     ecx, dword ptr [g_7db0a0]
        lea     edx, [esp + 0x20]
        push    edx
        call    FUN_004d0690
        mov     edi, dword ptr [edi + 8]
        mov     al, byte ptr [esp + 0x10]
        add     byte ptr [edi], al
        mov     cx, word ptr [esp + 0x12]
        add     word ptr [edi + 2], cx
        mov     dx, word ptr [esp + 0x58]
        mov     ax, word ptr [esp + 0x5a]
        lea     ecx, [esp + 0x18]
        mov     word ptr [esi + 0x68], dx
        mov     word ptr [esi + 0x6a], ax
        call    FUN_004d21c0
        lea     ecx, [esp + 0x5c]
        call    FUN_0040de20
        push    ebx
        lea     ecx, [esp + 0x60]
        call    FUN_0040dd50
        push    1
        lea     ecx, [esp + 0x60]
        push    ecx
        push    0x772b38
        mov     ecx, ebp
        call    FUN_00412390
        lea     ecx, [esp + 0x18]
        call    FUN_004d1f10
        mov     dl, byte ptr [g_7dc694]
        mov     ax, word ptr [g_7dc696]
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, dword ptr [g_7db0a0]
        mov     byte ptr [esp + 0x14], dl
        lea     edx, [esp + 0x60]
        mov     word ptr [esp + 0x16], ax
        push    edx
        lea     eax, [esp + 0x20]
        push    eax
        call    FUN_004d0690
        mov     cl, byte ptr [esp + 0x10]
        add     byte ptr [edi], cl
        mov     dx, word ptr [esp + 0x12]
        add     word ptr [edi + 2], dx
        mov     cx, word ptr [esp + 0x5a]
        mov     ax, word ptr [esp + 0x58]
        mov     word ptr [esi + 0x66], cx
        lea     ecx, [esp + 0x18]
        mov     word ptr [esi + 0x64], ax
        call    FUN_004d21c0
        lea     ecx, [esp + 0x5c]
        call    FUN_0040de20
        pop     edi
        mov     dword ptr [esi + 0x6c], ebx
        mov     byte ptr [esi + 0x70], bl
        mov     dword ptr [esi + 0x74], ebx
        mov     dword ptr [esi + 0x78], ebx
        mov     dword ptr [esi + 0x60], 0xffffffff
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x9c
        ret
    }
}
