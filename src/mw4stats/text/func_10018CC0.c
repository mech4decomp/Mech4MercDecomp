/*
 * FUN_10018cc0 (642 B) - __stdcall. Appends several wide-string constants
 * (0x100262d8, 0x100268f0, 0x100262d0, and the string at this+0x34->+4,
 * plus 0x100262cc) into a growable buffer described by param_2
 * ({ptr, size, cap, alloc_inc} at offsets 0,0xc,0x10,0x14). Reallocates
 * via malloc/free pointers at 0x100210f8/0x100210ec.
 *
 * __stdcall (2 args, RET 0x8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_100210f4;
extern unsigned long *g_100210f8;
extern unsigned long *g_100210ec;
extern unsigned short g_100262d8;
extern unsigned short g_100268f0;
extern unsigned short g_100262d0;
extern unsigned short g_100262cc;
extern void __cdecl FUN_100016b0(void);
extern void __cdecl FUN_100011a0(void);

__declspec(naked) void __cdecl FUN_10018cc0(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 8]
        push    ebx
        push    ebp
        push    esi
        mov     ecx, dword ptr [eax + 0x34]
        push    edi
        mov     ebx, dword ptr [ecx + 4]
        test    ebx, ebx
        mov     dword ptr [esp + 0x10], ebx
        jz      L_f38
        cmp     word ptr [ebx], 0
        jz      L_f38
        mov     ebp, dword ptr [esp + 0x1c]
        mov     edx, offset g_100262d8
        test    edx, edx
        jz      L_d19
        cmp     word ptr [g_100262d8], 0
        jz      L_d19
        mov     esi, dword ptr [g_100210f4]
        push    edx
        call    esi
        add     esp, 4
        mov     ecx, ebp
        shl     eax, 1
        push    eax
        push    offset g_100262d8
        call    FUN_100016b0
        jmp     L_d1f
L_d19:
        mov     esi, dword ptr [g_100210f4]
L_d1f:
        mov     eax, offset g_100268f0
        test    eax, eax
        jz      L_d47
        cmp     word ptr [g_100268f0], 0
        jz      L_d47
        push    eax
        call    esi
        add     esp, 4
        mov     ecx, ebp
        shl     eax, 1
        push    eax
        push    offset g_100268f0
        call    FUN_100016b0
L_d47:
        mov     ecx, offset g_100262d0
        test    ecx, ecx
        jz      L_d6f
        cmp     word ptr [g_100262d0], 0
        jz      L_d6f
        push    ecx
        call    esi
        add     esp, 4
        mov     ecx, ebp
        shl     eax, 1
        push    eax
        push    offset g_100262d0
        call    FUN_100016b0
L_d6f:
        cmp     word ptr [ebx], 0
        jz      L_e4c
        push    ebx
        call    esi
        mov     edi, eax
        add     esp, 4
        shl     edi, 1
        mov     dword ptr [esp + 0x18], edi
        jz      L_e4c
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        lea     eax, [edx + edi + 2]
        cmp     eax, ecx
        jbe     L_e0c
        mov     ecx, dword ptr [ebp + 0x14]
        add     eax, ecx
        push    eax
        mov     dword ptr [ebp + 0x10], eax
        call    dword ptr [g_100210f8]
        mov     ebx, eax
        add     esp, 4
        test    ebx, ebx
        jnz     L_dbf
        mov     ecx, ebp
        call    FUN_100011a0
        jmp     L_e4c
L_dbf:
        mov     ecx, dword ptr [ebp + 0xc]
        test    ecx, ecx
        jbe     L_e05
        mov     esi, dword ptr [ebp]
        mov     edx, ecx
        mov     edi, ebx
        xor     eax, eax
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        sub     ecx, edx
        lea     edi, [edx + ebx]
        mov     edx, ecx
        shr     ecx, 2
        rep     stosd
        mov     ecx, edx
        and     ecx, 3
        rep     stosb
        mov     eax, dword ptr [ebp]
        push    eax
        call    dword ptr [g_100210ec]
        mov     edi, dword ptr [esp + 0x1c]
        add     esp, 4
L_e05:
        mov     dword ptr [ebp], ebx
        mov     ebx, dword ptr [esp + 0x10]
L_e0c:
        mov     eax, dword ptr [ebp]
        mov     ecx, edi
        mov     edi, dword ptr [ebp + 0xc]
        mov     edx, ecx
        mov     esi, ebx
        add     edi, eax
        shr     ecx, 2
        rep     movsd
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebp + 0xc]
        mov     esi, dword ptr [g_100210f4]
        add     ecx, eax
        mov     dword ptr [ebp + 0xc], ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        mov     byte ptr [eax + ecx], 0
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp]
        mov     byte ptr [edx + eax + 1], 0
L_e4c:
        mov     ecx, offset g_100262cc
        test    ecx, ecx
        jz      L_f38
        cmp     word ptr [g_100262cc], 0
        jz      L_f38
        push    ecx
        call    esi
        mov     esi, eax
        add     esp, 4
        shl     esi, 1
        mov     dword ptr [esp + 0x18], esi
        jz      L_f38
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        lea     eax, [edx + esi + 2]
        cmp     eax, ecx
        jbe     L_efb
        mov     ecx, dword ptr [ebp + 0x14]
        add     eax, ecx
        push    eax
        mov     dword ptr [ebp + 0x10], eax
        call    dword ptr [g_100210f8]
        mov     ebx, eax
        add     esp, 4
        test    ebx, ebx
        jnz     L_eb2
        mov     ecx, ebp
        call    FUN_100011a0
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     8
L_eb2:
        mov     ecx, dword ptr [ebp + 0xc]
        test    ecx, ecx
        jbe     L_ef8
        mov     esi, dword ptr [ebp]
        mov     edx, ecx
        mov     edi, ebx
        xor     eax, eax
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        sub     ecx, edx
        lea     edi, [edx + ebx]
        mov     edx, ecx
        shr     ecx, 2
        rep     stosd
        mov     ecx, edx
        and     ecx, 3
        rep     stosb
        mov     eax, dword ptr [ebp]
        push    eax
        call    dword ptr [g_100210ec]
        mov     esi, dword ptr [esp + 0x1c]
        add     esp, 4
L_ef8:
        mov     dword ptr [ebp], ebx
L_efb:
        mov     edi, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp]
        mov     ecx, esi
        mov     esi, offset g_100262cc
        mov     edx, ecx
        add     edi, eax
        shr     ecx, 2
        rep     movsd
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebp + 0xc]
        add     ecx, eax
        mov     dword ptr [ebp + 0xc], ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        mov     byte ptr [eax + ecx], 0
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp]
        mov     byte ptr [edx + eax + 1], 0
L_f38:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     8
    }
}
