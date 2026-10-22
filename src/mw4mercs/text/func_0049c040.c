/*
 * FUN_0049c040 (347 B) — MLR debris-cloud constructor (__thiscall, RET 8).
 * Calls FUN_004940a0, allocates a 0x58-byte-per-element array, copies
 * element data, sets vtable 0x770244, and caches array in this+0xa0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da970;
extern void * __cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_004084e0(void *);
extern void FUN_004940a0(void);

__declspec(naked) void FUN_0049c040(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp+0xc]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x18]
        mov     esi, ecx
        mov     ecx, dword ptr [g_007da970]
        push    eax
        push    edi
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp+0x1c], esi
        call    FUN_004940a0
        mov     edi, dword ptr [edi+0x174]
        xor     ebp, ebp
        mov     ebx, ebp
        cmp     edi, ebx
        mov     dword ptr [esi+0xa0], ebp
        mov     dword ptr [esi+0xa4], ebp
        mov     dword ptr [esi], 0x770244
        mov     dword ptr [esp+0x18], edi
        jz      L_c191
        cmp     edi, ebp
        jbe     L_c176
        lea     edx, [edi+edi*4]
        lea     eax, [edi+edx*2]
        shl     eax, 3
        push    eax
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        jz      L_c0b6
        lea     ecx, [edi-1]
        mov     dword ptr [esp+0x1c], ecx
        mov     dword ptr [esp+0x1c], eax
        jmp     L_c0ba
L_c0b6:
        mov     dword ptr [esp+0x1c], ebp
L_c0ba:
        mov     edx, dword ptr [esi+0xa0]
        cmp     edx, ebp
        jz      L_c15c
        cmp     edi, ebx
        mov     ecx, edi
        jc      L_c0d0
        mov     ecx, ebx
L_c0d0:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_c14d
        lea     eax, [ecx+ecx*4]
        lea     eax, [ecx+eax*2]
        shl     eax, 3
        lea     ebx, [eax+edx]
        mov     edx, dword ptr [esp+0x1c]
        lea     eax, [eax+edx+0x44]
        lea     edx, [ebx+0x44]
        lea     ebp, [ecx+1]
L_c0f1:
        lea     edi, [eax-0x44]
        mov     esi, ebx
        mov     ecx, 0xc
        rep movsd
        mov     ecx, dword ptr [edx-0x14]
        mov     dword ptr [eax-0x14], ecx
        mov     ecx, dword ptr [edx-0x10]
        mov     dword ptr [eax-0x10], ecx
        mov     ecx, dword ptr [edx-0xc]
        mov     dword ptr [eax-0xc], ecx
        mov     ecx, dword ptr [edx-0x8]
        mov     dword ptr [eax-0x8], ecx
        mov     ecx, dword ptr [edx-0x4]
        mov     dword ptr [eax-0x4], ecx
        mov     ecx, dword ptr [edx]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [edx+0x4]
        mov     dword ptr [eax+0x4], ecx
        mov     ecx, dword ptr [edx+0x8]
        mov     dword ptr [eax+0x8], ecx
        mov     ecx, dword ptr [edx+0xc]
        mov     dword ptr [eax+0xc], ecx
        mov     ecx, dword ptr [edx+0x10]
        mov     dword ptr [eax+0x10], ecx
        dec     ebp
        sub     ebx, 0x58
        sub     edx, 0x58
        sub     eax, 0x58
        test    ebp, ebp
        ja      L_c0f1
        mov     edi, dword ptr [esp+0x18]
        mov     esi, dword ptr [esp+0x10]
L_c14d:
        mov     eax, dword ptr [esi+0xa0]
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_c15c:
        mov     edx, dword ptr [esp+0x1c]
        mov     dword ptr [esi+0xa4], edi
        pop     edi
        mov     dword ptr [esi+0xa0], edx
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     8
L_c176:
        mov     eax, dword ptr [esi+0xa0]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi+0xa0], ebp
        mov     dword ptr [esi+0xa4], edi
L_c191:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     8
    }
}
