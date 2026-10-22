/*
 * FUN_1000248b (429 B, __cdecl) — codepage setup / lead-byte table builder.
 * Looks up a codepage in a static table; if not found, calls GetCPInfo and
 * builds the 0x10008ee0 lead-byte bitmap from CPINFO.LeadByte ranges plus a
 * 0x08 "trail byte" mask, then stores per-codepage data into 0x10008dc0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001f46(int);
extern int  __cdecl FUN_10002638(int);
extern int  __cdecl FUN_10002682(int);
extern void __cdecl FUN_100026b5(void);
extern void __cdecl FUN_100026de(void);
extern void __cdecl FUN_10001fa7(int);

extern int (__stdcall *g_GetCPInfo)(unsigned int, void *);

extern int  g_10008db4;
extern int  g_10006248;
extern int  g_10008fe4;
extern char g_10008ee0;
extern char g_10008ee1;
extern char g_10006258;
extern char g_10006240;
extern int  g_10008dcc;
extern char g_1000624c;
extern int  g_10008dc0;
extern int  g_10008c00;

__declspec(naked) void __cdecl FUN_1000248b(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x18
        push    ebx
        push    esi
        push    edi
        push    0x19
        call    FUN_10001f46
        push    dword ptr [ebp + 8]
        call    FUN_10002638
        mov     ebx, eax
        pop     ecx
        cmp     ebx, dword ptr [g_10008db4]
        pop     ecx
        mov     dword ptr [ebp + 8], ebx
        jnz     L_24b9
L_24b2:
        xor     esi, esi
        jmp     L_2629
L_24b9:
        test    ebx, ebx
        jz      L_2617
        xor     edx, edx
        mov     eax, offset g_10006248
L_24c8:
        cmp     dword ptr [eax], ebx
        jz      L_2540
        add     eax, 0x30
        inc     edx
        cmp     eax, 0x10006338
        jl      L_24c8
        lea     eax, [ebp - 0x18]
        push    eax
        push    ebx
        call    dword ptr [g_GetCPInfo]
        push    0x1
        pop     esi
        cmp     eax, esi
        jnz     L_260e
        push    0x40
        and     dword ptr [g_10008fe4], 0
        pop     ecx
        xor     eax, eax
        mov     edi, offset g_10008ee0
        cmp     dword ptr [ebp - 0x18], esi
        rep stosd
        stosb
        mov     dword ptr [g_10008db4], ebx
        jbe     L_25fb
        cmp     byte ptr [ebp - 0x12], 0
        jz      L_25d6
        lea     ecx, [ebp - 0x11]
L_251d:
        mov     dl, byte ptr [ecx]
        test    dl, dl
        jz      L_25d6
        movzx   eax, byte ptr [ecx - 1]
        movzx   edx, dl
L_252e:
        cmp     eax, edx
        ja      L_25ca
        or      byte ptr [eax + g_10008ee1], 4
        inc     eax
        jmp     L_252e
L_2540:
        and     dword ptr [ebp - 4], 0
        push    0x40
        pop     ecx
        xor     eax, eax
        mov     edi, offset g_10008ee0
        lea     esi, [edx + edx*2]
        rep stosd
        shl     esi, 4
        stosb
        lea     ebx, [esi + g_10006258]
L_255d:
        cmp     byte ptr [ebx], 0
        mov     ecx, ebx
        jz      L_2590
L_2564:
        mov     dl, byte ptr [ecx + 1]
        test    dl, dl
        jz      L_2590
        movzx   eax, byte ptr [ecx]
        movzx   edi, dl
        cmp     eax, edi
        ja      L_2589
        mov     edx, dword ptr [ebp - 4]
        mov     dl, byte ptr [edx + g_10006240]
L_257e:
        or      byte ptr [eax + g_10008ee1], dl
        inc     eax
        cmp     eax, edi
        jbe     L_257e
L_2589:
        inc     ecx
        inc     ecx
        cmp     byte ptr [ecx], 0
        jnz     L_2564
L_2590:
        inc     dword ptr [ebp - 4]
        add     ebx, 8
        cmp     dword ptr [ebp - 4], 4
        jc      L_255d
        mov     eax, dword ptr [ebp + 8]
        mov     dword ptr [g_10008dcc], 1
        push    eax
        mov     dword ptr [g_10008db4], eax
        call    FUN_10002682
        lea     esi, [esi + g_1000624c]
        mov     edi, offset g_10008dc0
        movsd
        movsd
        pop     ecx
        mov     dword ptr [g_10008fe4], eax
        movsd
        jmp     L_261c
L_25ca:
        inc     ecx
        inc     ecx
        cmp     byte ptr [ecx - 1], 0
        jnz     L_251d
L_25d6:
        mov     eax, esi
L_25d8:
        or      byte ptr [eax + g_10008ee1], 8
        inc     eax
        cmp     eax, 0xff
        jc      L_25d8
        push    ebx
        call    FUN_10002682
        pop     ecx
        mov     dword ptr [g_10008fe4], eax
        mov     dword ptr [g_10008dcc], esi
        jmp     L_2602
L_25fb:
        and     dword ptr [g_10008dcc], 0
L_2602:
        xor     eax, eax
        mov     edi, offset g_10008dc0
        stosd
        stosd
        stosd
        jmp     L_261c
L_260e:
        cmp     dword ptr [g_10008c00], 0
        jz      L_2626
L_2617:
        call    FUN_100026b5
L_261c:
        call    FUN_100026de
        jmp     L_24b2
L_2626:
        or      esi, 0xffffffff
L_2629:
        push    0x19
        call    FUN_10001fa7
        pop     ecx
        mov     eax, esi
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
