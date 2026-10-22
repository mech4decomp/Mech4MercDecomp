/*
 * FUN_004b56f0 (173 B) — MLR MultiLODElement::AttachLOD (__thiscall).
 * Scans the LOD array (this+0x150, count this+0x154) for a slot whose
 * [0] and [0xc] floats are both ~0 (|x| <= DAT_007b220c); copies the
 * 16-byte LOD struct from param_2 into that slot, calls FUN_004bf380,
 * and returns the slot index. If full, asserts via FUN_006fab90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_007b220c;
extern void __cdecl FUN_004bf380(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004b56f0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        mov     ebx, dword ptr [ecx + 0x154]
        push    esi
        xor     edx, edx
        test    ebx, ebx
        push    edi
        jbe     L_5781
        mov     edi, dword ptr [ecx + 0x150]
        xor     eax, eax
    L_570A:
        shl     eax, 0x4
        fld     dword ptr [eax + edi]
        lea     esi, [eax + edi]
        fabs
        fld     dword ptr [g_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_5738
        fld     dword ptr [esi + 0xc]
        fabs
        fld     dword ptr [g_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_5746
    L_5738:
        inc     edx
        mov     eax, edx
        and     eax, 0xffff
        cmp     eax, ebx
        jnc     L_5781
        jmp     L_570A
    L_5746:
        mov     esi, edx
        and     esi, 0xffff
        mov     eax, esi
        shl     eax, 0x4
        add     eax, edi
        mov     edi, dword ptr [ebp + 0xc]
        mov     ebx, dword ptr [edi]
        mov     dword ptr [eax], ebx
        mov     ebx, dword ptr [edi + 0x4]
        mov     dword ptr [eax + 0x4], ebx
        mov     ebx, dword ptr [edi + 0x8]
        mov     edi, dword ptr [edi + 0xc]
        mov     dword ptr [eax + 0x8], ebx
        mov     dword ptr [eax + 0xc], edi
        mov     eax, dword ptr [ebp + 0x8]
        push    eax
        push    edx
        call    FUN_004bf380
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x8
    L_5781:
        push    0x77076c
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_5793
        int     3
    L_5793:
        pop     edi
        pop     esi
        or      eax, 0xffffffff
        pop     ebx
        pop     ebp
        ret     0x8
    }
}
