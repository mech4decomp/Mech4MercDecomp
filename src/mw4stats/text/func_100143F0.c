/*
 * FUN_100143F0 (670 B, __cdecl, 3 params) - String-buffer append helper.
 * Appends up to three strings (a static default, an optional param, and
 * a static suffix) into a growable buffer described by a 3-dword header
 * at EBP (ptr at +0x0, len at +0xc, cap at +0x10, allocator at +0x14).
 * Uses CRT strlen (IAT 0x100210f4), realloc (IAT 0x100210f8), free
 * (IAT 0x100210ec), and the __thiscall FUN_100016b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100016b0(void);
extern unsigned short g_100262d8;
extern unsigned short g_100262d0;
extern unsigned short g_100262cc;
extern void *g_100210f4;   /* IAT: strlen */
extern void *g_100210f8;   /* IAT: realloc */
extern void *g_100210ec;   /* IAT: free */

__declspec(naked) void __cdecl FUN_100143F0(void)
{
    __asm {
        push    ebx
        mov     eax, 0x100262d8
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        test    eax, eax
        jz      L_14424
        cmp     word ptr [g_100262d8], 0
        jz      L_14424
        push    eax
        call    dword ptr [g_100210f4]
        add     esp, 4
        mov     ecx, ebp
        shl     eax, 1
        push    eax
        push    0x100262d8
        call    FUN_100016b0
    L_14424:
        mov     esi, dword ptr [esp + 0x18]
        test    esi, esi
        jz      L_1444b
        cmp     word ptr [esi], 0
        jz      L_1444b
        mov     edi, dword ptr [g_100210f4]
        push    esi
        call    edi
        add     esp, 4
        mov     ecx, ebp
        shl     eax, 1
        push    eax
        push    esi
        call    FUN_100016b0
        jmp     L_14451
    L_1444b:
        mov     edi, dword ptr [g_100210f4]
    L_14451:
        mov     ecx, 0x100262d0
        test    ecx, ecx
        jz      L_14479
        cmp     word ptr [g_100262d0], 0
        jz      L_14479
        push    ecx
        call    edi
        add     esp, 4
        mov     ecx, ebp
        shl     eax, 1
        push    eax
        push    0x100262d0
        call    FUN_100016b0
    L_14479:
        mov     edx, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [edx]
        test    esi, esi
        mov     dword ptr [esp + 0x18], esi
        jz      L_14580
        cmp     word ptr [esi], 0
        jz      L_14580
        push    esi
        call    edi
        mov     edi, eax
        add     esp, 4
        shl     edi, 1
        mov     dword ptr [esp + 0x14], edi
        jz      L_14580
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        lea     eax, [eax + edi + 2]
        cmp     eax, ecx
        jbe     L_14548
        mov     ecx, dword ptr [ebp + 0x14]
        add     eax, ecx
        push    eax
        mov     dword ptr [ebp + 0x10], eax
        call    dword ptr [g_100210f8]
        mov     ebx, eax
        add     esp, 4
        test    ebx, ebx
        jnz     L_144fb
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        jbe     L_144eb
        mov     eax, dword ptr [ebp]
        test    eax, eax
        jz      L_144eb
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
    L_144eb:
        xor     eax, eax
        mov     dword ptr [ebp], eax
        mov     dword ptr [ebp + 0x10], eax
        mov     dword ptr [ebp + 0xc], eax
        jmp     L_14580
    L_144fb:
        mov     ecx, dword ptr [ebp + 0xc]
        test    ecx, ecx
        jbe     L_14545
        mov     esi, dword ptr [ebp]
        mov     edx, ecx
        mov     edi, ebx
        xor     eax, eax
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        sub     ecx, edx
        lea     edi, [edx + ebx]
        mov     edx, ecx
        shr     ecx, 2
        rep stosd
        mov     ecx, edx
        and     ecx, 3
        rep stosb
        mov     eax, dword ptr [ebp]
        push    eax
        call    dword ptr [g_100210ec]
        mov     edi, dword ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x1c]
        add     esp, 4
    L_14545:
        mov     dword ptr [ebp], ebx
    L_14548:
        mov     eax, dword ptr [ebp]
        mov     ecx, edi
        mov     edi, dword ptr [ebp + 0xc]
        mov     edx, ecx
        add     edi, eax
        mov     eax, dword ptr [esp + 0x14]
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [ebp + 0xc]
        add     ecx, eax
        mov     dword ptr [ebp + 0xc], ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        mov     byte ptr [ecx + eax], 0
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp]
        mov     byte ptr [edx + eax + 1], 0
    L_14580:
        mov     ecx, 0x100262cc
        test    ecx, ecx
        jz      L_14689
        cmp     word ptr [g_100262cc], 0
        jz      L_14689
        push    ecx
        call    dword ptr [g_100210f4]
        mov     esi, eax
        add     esp, 4
        shl     esi, 1
        mov     dword ptr [esp + 0x14], esi
        jz      L_14689
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        lea     eax, [edx + esi + 2]
        cmp     eax, ecx
        jbe     L_1464c
        mov     ecx, dword ptr [ebp + 0x14]
        add     eax, ecx
        push    eax
        mov     dword ptr [ebp + 0x10], eax
        call    dword ptr [g_100210f8]
        mov     ebx, eax
        xor     edi, edi
        add     esp, 4
        cmp     ebx, edi
        jnz     L_14603
        cmp     dword ptr [ebp + 0xc], edi
        jbe     L_145f5
        mov     eax, dword ptr [ebp]
        cmp     eax, edi
        jz      L_145f5
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
    L_145f5:
        mov     dword ptr [ebp], edi
        mov     dword ptr [ebp + 0x10], edi
        mov     dword ptr [ebp + 0xc], edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    L_14603:
        mov     ecx, dword ptr [ebp + 0xc]
        cmp     ecx, edi
        jbe     L_14649
        mov     esi, dword ptr [ebp]
        mov     edx, ecx
        mov     edi, ebx
        xor     eax, eax
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        sub     ecx, edx
        lea     edi, [edx + ebx]
        mov     edx, ecx
        shr     ecx, 2
        rep stosd
        mov     ecx, edx
        and     ecx, 3
        rep stosb
        mov     eax, dword ptr [ebp]
        push    eax
        call    dword ptr [g_100210ec]
        mov     esi, dword ptr [esp + 0x18]
        add     esp, 4
    L_14649:
        mov     dword ptr [ebp], ebx
    L_1464c:
        mov     edi, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp]
        mov     ecx, esi
        mov     esi, 0x100262cc
        mov     edx, ecx
        add     edi, eax
        shr     ecx, 2
        rep movsd
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [ebp + 0xc]
        add     ecx, eax
        mov     dword ptr [ebp + 0xc], ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        mov     byte ptr [ecx + eax], 0
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp]
        mov     byte ptr [edx + eax + 1], 0
    L_14689:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
