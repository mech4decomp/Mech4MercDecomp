/*
 * FUN_00753F80 (383 B) — __thiscall (ECX = this). Destructor/cleanup that
 * frees sub-objects, then relinks a doubly-linked list of 0x38-byte nodes
 * tracked by globals 0x008b287c / 0x008b2878, using division-by-0x38
 * (magic 0x92492493) to compute node indices.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_008b287c;
extern unsigned int g_008b2878;

extern void __cdecl FUN_0075c060(void);
extern void __cdecl FUN_00735e30(void);
extern void __cdecl FUN_00749190(void);
extern void __cdecl FUN_006f4230(void *a);

__declspec(naked) void __fastcall FUN_00753f80(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x8]
        push    edi
        xor     edi, edi
        cmp     eax, edi
        jz      L_53f93
        call    FUN_0075c060
L_53f93:
        cmp     dword ptr [esi + 0xc], edi
        jz      L_53f9f
        mov     ecx, esi
        call    FUN_00735e30
L_53f9f:
        cmp     dword ptr [esi + 0x10], edi
        jz      L_53fab
        mov     ecx, esi
        call    FUN_00749190
L_53fab:
        mov     eax, dword ptr [esi + 0x14]
        cmp     eax, edi
        jz      L_53fbb
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi + 0x14], edi
L_53fbb:
        cmp     dword ptr [g_008b287c], esi
        mov     word ptr [esi + 0x4], di
        jnz     L_53ff3
        xor     eax, eax
        mov     ax, word ptr [esi + 0x1a]
        cmp     ax, di
        jz      L_53feb
        and     eax, 0xffff
        lea     ecx, [eax*8]
        sub     ecx, eax
        lea     edx, [esi + ecx*8]
        mov     dword ptr [g_008b287c], edx
        jmp     L_54042
L_53feb:
        mov     dword ptr [g_008b287c], edi
        jmp     L_54042
L_53ff3:
        xor     eax, eax
        mov     ax, word ptr [esi - 0x1e]
        lea     ecx, [esi - 0x38]
        mov     edx, 0x1
L_54001:
        lea     ebx, [eax*8]
        sub     ebx, eax
        lea     eax, [ecx + ebx*8]
        cmp     eax, esi
        jz      L_5402b
L_54011:
        xor     eax, eax
        mov     ax, word ptr [ecx - 0x1e]
        sub     ecx, 0x38
        inc     edx
        lea     ebx, [eax*8]
        sub     ebx, eax
        lea     eax, [ecx + ebx*8]
        cmp     eax, esi
        jnz     L_54011
L_5402b:
        xor     eax, eax
        mov     ax, word ptr [esi + 0x1a]
        cmp     ax, di
        jz      L_5403e
        add     eax, edx
        mov     word ptr [ecx + 0x1a], ax
        jmp     L_54042
L_5403e:
        mov     word ptr [ecx + 0x1a], di
L_54042:
        mov     ecx, dword ptr [g_008b2878]
        cmp     ecx, edi
        jz      L_540ef
        cmp     esi, ecx
        jc      L_540cc
        xor     eax, eax
        mov     ax, word ptr [ecx + 0x1a]
        cmp     ax, di
        jz      L_5407f
L_5405f:
        and     eax, 0xffff
        lea     edx, [eax*8]
        sub     edx, eax
        lea     eax, [ecx + edx*8]
        cmp     eax, esi
        jnc     L_5407f
        mov     ecx, eax
        mov     ax, word ptr [ecx + 0x1a]
        cmp     ax, di
        jnz     L_5405f
L_5407f:
        mov     bx, word ptr [ecx + 0x1a]
        cmp     bx, di
        jz      L_540a9
        mov     edi, ecx
        sub     edi, esi
        mov     eax, 0x92492493
        imul    edi
        add     edx, edi
        sar     edx, 0x5
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        and     ebx, 0xffff
        add     edx, ebx
        jmp     L_540ab
L_540a9:
        xor     edx, edx
L_540ab:
        mov     word ptr [esi + 0x1a], dx
        sub     esi, ecx
        mov     eax, 0x92492493
        imul    esi
        add     edx, esi
        sar     edx, 0x5
        mov     eax, edx
        pop     edi
        shr     eax, 0x1f
        add     edx, eax
        pop     esi
        mov     word ptr [ecx + 0x1a], dx
        pop     ebx
        ret
L_540cc:
        sub     ecx, esi
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 0x5
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        pop     edi
        mov     word ptr [esi + 0x1a], dx
        mov     dword ptr [g_008b2878], esi
        pop     esi
        pop     ebx
        ret
L_540ef:
        xor     edx, edx
        pop     edi
        mov     word ptr [esi + 0x1a], dx
        mov     dword ptr [g_008b2878], esi
        pop     esi
        pop     ebx
        ret
    }
}
