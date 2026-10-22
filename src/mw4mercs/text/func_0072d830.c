/*
 * DATA block @ 0x72D830 (332 B true extent; 4 trailing nops excluded).
 * __stdcall, RET 8 (2 stack params). Maintains a rotating buffer index
 * (0..9) into a 0x1000-byte-per-slot array at 0x88c97c, dispatches through
 * an IAT function (0x76b420), and fills a slot with a 0x2a2a2a2a pattern
 * via rep stosd/stosb.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00707e90(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0072de80(void);

extern int g_7b71dc;
extern int g_8aae40;
extern int g_859af0;
extern void *g_76b420;

__declspec(naked) void __stdcall FUN_0072D830(void *p1, void *p2)
{
    __asm {
        mov     eax, dword ptr [g_7b71dc]
        inc     eax
        cmp     eax, 0xa
        mov     dword ptr [g_7b71dc], eax
        jne     L7847
        xor     eax, eax
        mov     dword ptr [g_7b71dc], eax
L7847:
        mov     ecx, dword ptr [g_8aae40]
        test    ecx, ecx
        je      L78b4
        call    FUN_00707e90
        fadd    st(0), st(0)
        call    FUN_0075db4a
        mov     ecx, dword ptr [g_8aae40]
        and     eax, 1
        cmp     ecx, 1
        je      L7874
        cmp     ecx, 2
        jne     L78af
        test    eax, eax
        je      L78af
L7874:
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [g_7b71dc]
        push    eax
        add     ecx, 8
        push    ecx
        shl     edx, 0xc
        add     edx, 0x88c97c
        push    0x7a5b18
        push    edx
        call    dword ptr [g_76b420]
        mov     eax, dword ptr [g_7b71dc]
        shl     eax, 0xc
        add     esp, 0x10
        add     eax, 0x88c97c
        ret     8
L78af:
        mov     eax, dword ptr [g_7b71dc]
L78b4:
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     ebx, dword ptr [esi + 4]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        push    0x1000
        shl     eax, 0xc
        add     eax, 0x88c97c
        push    eax
        push    edi
        push    ebx
        call    FUN_0072de80
        mov     ecx, eax
        test    ecx, ecx
        jne     L7911
        mov     eax, dword ptr [g_7b71dc]
        push    edi
        add     esi, 8
        push    esi
        shl     eax, 0xc
        add     eax, 0x88c97c
        push    0x7a5b04
        push    eax
        call    dword ptr [g_76b420]
        mov     eax, dword ptr [g_7b71dc]
        add     esp, 0x10
        pop     edi
        shl     eax, 0xc
        pop     esi
        add     eax, 0x88c97c
        pop     ebx
        ret     8
L7911:
        mov     eax, dword ptr [g_859af0]
        test    eax, eax
        je      L7969
        mov     esi, dword ptr [g_7b71dc]
        mov     eax, 0x55555556
        imul    ecx
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        push    ebp
        mov     ecx, edx
        mov     ebp, ecx
        shr     ecx, 2
        shl     esi, 0xc
        mov     eax, 0x2a2a2a2a
        lea     edi, [esi + 0x88c97c]
        rep stosd
        mov     ecx, ebp
        and     ecx, 3
        rep stosb
        mov     eax, 0x1000
        sub     eax, edx
        push    eax
        lea     ecx, [esi + edx + 0x88c97c]
        mov     edx, dword ptr [esp + 0x1c]
        push    ecx
        push    edx
        push    ebx
        call    FUN_0072de80
        pop     ebp
L7969:
        mov     eax, dword ptr [g_7b71dc]
        pop     edi
        shl     eax, 0xc
        pop     esi
        add     eax, 0x88c97c
        pop     ebx
        ret     8
    }
}
