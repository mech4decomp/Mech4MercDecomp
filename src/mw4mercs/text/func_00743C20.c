/*
 * FUN_00743C20 (512 B) — __stdcall(2) helper that registers a resolution
 * entry into one of two static tables (0x8b2614 / 0x8b2618) keyed by the
 * [ecx+0x54] format field (0x10 or 0x20), subject to size gates on
 * [ecx+0xc]/[ecx+8] and global flags at 0x8b2520.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_8b2520;   /* DAT_008b2520 */
extern unsigned int g_8abe58;   /* DAT_008abe58 */
extern unsigned int g_8b2614;   /* DAT_008b2614 */
extern unsigned int g_8b260c;   /* DAT_008b260c */
extern unsigned int g_8b2608;   /* DAT_008b2608 */
extern unsigned int g_8b2618;   /* DAT_008b2618 */

__declspec(naked) void FUN_00743C20(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [ecx + 0xc]
        cmp     edx, 0x200
        push    ebx
        push    ebp
        push    esi
        push    edi
        jb      L_743dea
        mov     ebp, dword ptr [ecx + 8]
        cmp     ebp, 0x180
        mov     dword ptr [esp + 0x14], ebp
        jb      L_743dea
        mov     eax, dword ptr [g_8b2520]
        test    eax, 0x8000000
        je      L_743c6a
        cmp     edx, 0x640
        jb      L_743c6a
        cmp     ebp, 0x4b0
        jae     L_743dea
L_743c6a:
        test    eax, 0x10000000
        je      L_743c85
        cmp     edx, 0x500
        jb      L_743c85
        cmp     ebp, 0x400
        jae     L_743dea
L_743c85:
        test    eax, 0x200000
        je      L_743ca0
        cmp     edx, 0x400
        jb      L_743ca0
        cmp     ebp, 0x300
        jae     L_743dea
L_743ca0:
        mov     eax, dword ptr [ecx + 0x54]
        cmp     eax, 0x10
        mov     edi, dword ptr [g_8abe58]
        jne     L_743d5e
        mov     edx, dword ptr [g_8b2614]
        cmp     edx, 0x20
        jae     L_743d5e
        xor     eax, eax
        test    edx, edx
        jbe     L_743cee
        mov     bx, word ptr [ecx + 0xc]
        lea     esi, [edi + 0x8ea]
L_743cd1:
        cmp     word ptr [esi - 2], bx
        jne     L_743ce4
        mov     bp, word ptr [esi]
        cmp     bp, word ptr [ecx + 8]
        je      L_743d3d
        mov     ebp, dword ptr [esp + 0x14]
L_743ce4:
        add     eax, 2
        add     esi, 4
        cmp     eax, edx
        jb      L_743cd1
L_743cee:
        mov     eax, dword ptr [g_8b260c]
        test    eax, eax
        jne     L_743d0a
        mov     esi, dword ptr [g_8b2608]
        mov     eax, ebp
        imul    eax, dword ptr [ecx + 0xc]
        lea     eax, [eax + eax*8]
        cmp     esi, eax
        jbe     L_743d5e
L_743d0a:
        mov     ax, word ptr [ecx + 0xc]
        mov     si, word ptr [ecx + 0x18]
        mov     word ptr [edi + edx*2 + 0x8e8], ax
        mov     ax, word ptr [ecx + 8]
        mov     word ptr [edi + edx*2 + 0x8ea], ax
        mov     eax, edx
        shr     eax, 1
        add     edx, 2
        mov     word ptr [edi + eax*2 + 0x928], si
        mov     dword ptr [g_8b2614], edx
        jmp     L_743d5e
L_743d3d:
        cdq
        sub     eax, edx
        mov     dx, word ptr [ecx + 0x18]
        sar     eax, 1
        cmp     word ptr [edi + eax*2 + 0x928], dx
        lea     eax, [edi + eax*2 + 0x928]
        jae     L_743d5a
        mov     word ptr [eax], dx
L_743d5a:
        mov     ebp, dword ptr [esp + 0x14]
L_743d5e:
        cmp     dword ptr [ecx + 0x54], 0x20
        jne     L_743dea
        mov     edx, dword ptr [g_8b2618]
        cmp     edx, 0x20
        jae     L_743dea
        xor     eax, eax
        test    edx, edx
        jbe     L_743da0
        mov     bx, word ptr [ecx + 0xc]
        lea     esi, [edi + 0x94a]
L_743d83:
        cmp     word ptr [esi - 2], bx
        jne     L_743d96
        mov     bp, word ptr [esi]
        cmp     bp, word ptr [ecx + 8]
        je      L_743df6
        mov     ebp, dword ptr [esp + 0x14]
L_743d96:
        add     eax, 2
        add     esi, 4
        cmp     eax, edx
        jb      L_743d83
L_743da0:
        mov     eax, dword ptr [g_8b260c]
        test    eax, eax
        jne     L_743db9
        imul    ebp, dword ptr [ecx + 0xc]
        mov     eax, dword ptr [g_8b2608]
        shl     ebp, 4
        cmp     eax, ebp
        jbe     L_743dea
L_743db9:
        mov     ax, word ptr [ecx + 0xc]
        mov     word ptr [edi + edx*2 + 0x948], ax
        mov     ax, word ptr [ecx + 8]
        mov     cx, word ptr [ecx + 0x18]
        mov     word ptr [edi + edx*2 + 0x94a], ax
        mov     eax, edx
        shr     eax, 1
        add     edx, 2
        mov     word ptr [edi + eax*2 + 0x988], cx
        mov     dword ptr [g_8b2618], edx
L_743dea:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        ret     8
L_743df6:
        mov     cx, word ptr [ecx + 0x18]
        cdq
        sub     eax, edx
        sar     eax, 1
        cmp     word ptr [edi + eax*2 + 0x988], cx
        lea     eax, [edi + eax*2 + 0x988]
        jae     L_743dea
        pop     edi
        pop     esi
        pop     ebp
        mov     word ptr [eax], cx
        mov     eax, 1
        pop     ebx
        ret     8
    }
}
