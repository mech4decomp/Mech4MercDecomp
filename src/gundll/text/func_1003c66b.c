/*
 * FUN_1003c66b (429 B) — __cdecl.
 * Codepage setup: builds lead-byte tables via GetCPInfo / static tables.
 *
 * CFLAGS: /O1
 */

extern int g_10076864;
extern int g_10076a84;
extern int g_1007687c;
extern int g_1007569c;
extern unsigned char g_10076981[];
extern unsigned char g_10051e70[];
extern unsigned char g_10051e88[];
extern unsigned char g_10051e7c[];
extern int *g_1004913c;   /* IAT: GetCPInfo */
extern void __cdecl FUN_10039b19(void);
extern void __cdecl FUN_1003c818(void);
extern void __cdecl FUN_1003c862(void);
extern void __cdecl FUN_1003c895(void);
extern void __cdecl FUN_1003c8be(void);
extern void __cdecl FUN_10039b7a(void);

__declspec(naked) void FUN_1003c66b(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x18
        push    ebx
        push    esi
        push    edi
        push    0x19
        call    FUN_10039b19
        push    dword ptr [ebp + 0x8]
        call    FUN_1003c818
        mov     ebx, eax
        pop     ecx
        cmp     ebx, dword ptr [g_10076864]
        pop     ecx
        mov     dword ptr [ebp + 0x8], ebx
        jnz     L_1003c699
    L_1003c692:
        xor     esi, esi
        jmp     L_1003c809
    L_1003c699:
        test    ebx, ebx
        jz      L_1003c7f7
        xor     edx, edx
        mov     eax, 0x10051e78
    L_1003c6a8:
        cmp     dword ptr [eax], ebx
        jz      L_1003c720
        add     eax, 0x30
        inc     edx
        cmp     eax, 0x10051f68
        jc      L_1003c6a8
        lea     eax, [ebp - 0x18]
        push    eax
        push    ebx
        call    dword ptr [g_1004913c]
        push    0x1
        pop     esi
        cmp     eax, esi
        jnz     L_1003c7ee
        push    0x40
        and     dword ptr [g_10076a84], 0x0
        pop     ecx
        xor     eax, eax
        mov     edi, 0x10076980
        cmp     dword ptr [ebp - 0x18], esi
        rep     stosd
        stosb
        mov     dword ptr [g_10076864], ebx
        jbe     L_1003c7db
        cmp     byte ptr [ebp - 0x12], 0x0
        jz      L_1003c7b6
        lea     ecx, [ebp - 0x11]
    L_1003c6fd:
        mov     dl, byte ptr [ecx]
        test    dl, dl
        jz      L_1003c7b6
        movzx   eax, byte ptr [ecx - 0x1]
        movzx   edx, dl
    L_1003c70e:
        cmp     eax, edx
        ja      L_1003c7aa
        or      byte ptr [eax + g_10076981], 0x4
        inc     eax
        jmp     L_1003c70e
    L_1003c720:
        and     dword ptr [ebp - 0x4], 0x0
        push    0x40
        pop     ecx
        xor     eax, eax
        mov     edi, 0x10076980
        lea     esi, [edx + edx*2]
        rep     stosd
        shl     esi, 0x4
        stosb
        lea     ebx, [esi + g_10051e88]
    L_1003c73d:
        cmp     byte ptr [ebx], 0x0
        mov     ecx, ebx
        jz      L_1003c770
    L_1003c744:
        mov     dl, byte ptr [ecx + 0x1]
        test    dl, dl
        jz      L_1003c770
        movzx   eax, byte ptr [ecx]
        movzx   edi, dl
        cmp     eax, edi
        ja      L_1003c769
        mov     edx, dword ptr [ebp - 0x4]
        mov     dl, byte ptr [edx + g_10051e70]
    L_1003c75e:
        or      byte ptr [eax + g_10076981], dl
        inc     eax
        cmp     eax, edi
        jbe     L_1003c75e
    L_1003c769:
        inc     ecx
        inc     ecx
        cmp     byte ptr [ecx], 0x0
        jnz     L_1003c744
    L_1003c770:
        inc     dword ptr [ebp - 0x4]
        add     ebx, 0x8
        cmp     dword ptr [ebp - 0x4], 0x4
        jc      L_1003c73d
        mov     eax, dword ptr [ebp + 0x8]
        mov     dword ptr [g_1007687c], 0x1
        push    eax
        mov     dword ptr [g_10076864], eax
        call    FUN_1003c862
        lea     esi, [esi + g_10051e7c]
        mov     edi, 0x10076870
        movsd
        movsd
        pop     ecx
        mov     dword ptr [g_10076a84], eax
        movsd
        jmp     L_1003c7fc
    L_1003c7aa:
        inc     ecx
        inc     ecx
        cmp     byte ptr [ecx - 0x1], 0x0
        jnz     L_1003c6fd
    L_1003c7b6:
        mov     eax, esi
    L_1003c7b8:
        or      byte ptr [eax + g_10076981], 0x8
        inc     eax
        cmp     eax, 0xff
        jc      L_1003c7b8
        push    ebx
        call    FUN_1003c862
        pop     ecx
        mov     dword ptr [g_10076a84], eax
        mov     dword ptr [g_1007687c], esi
        jmp     L_1003c7e2
    L_1003c7db:
        and     dword ptr [g_1007687c], 0x0
    L_1003c7e2:
        xor     eax, eax
        mov     edi, 0x10076870
        stosd
        stosd
        stosd
        jmp     L_1003c7fc
    L_1003c7ee:
        cmp     dword ptr [g_1007569c], 0x0
        jz      L_1003c806
    L_1003c7f7:
        call    FUN_1003c895
    L_1003c7fc:
        call    FUN_1003c8be
        jmp     L_1003c692
    L_1003c806:
        or      esi, 0xffffffff
    L_1003c809:
        push    0x19
        call    FUN_10039b7a
        pop     ecx
        mov     eax, esi
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
