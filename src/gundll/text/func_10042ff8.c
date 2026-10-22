/*
 * FUN_10042ff8 (250 B) — __cdecl.
 * Format-string expansion into a destination buffer with locking.
 */

extern void FUN_10039b19(void);
extern void FUN_10039b7a(void);
extern void FUN_100430f2(void);
extern int *g_10049120;
extern int g_100491bc;
extern int g_10076a88;
extern int g_10054b48;
extern int g_10051984;
extern int g_10075818;

__declspec(naked) void FUN_10042ff8(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ecx
        mov     eax, dword ptr [ebp + 0xC]
        push    ebx
        push    esi
        push    edi
        mov     edi, 0x10076a8c
        mov     dword ptr [ebp - 0x4], eax
        push    edi
        call    dword ptr [g_10049120]
        mov     ebx, dword ptr [g_100491bc]
        xor     esi, esi
        cmp     dword ptr [g_10076a88], esi
        jz      loc_10043036
        push    edi
        call    ebx
        push    0x13
        call    FUN_10039b19
        pop     ecx
        mov     dword ptr [ebp - 0x8], 0x1
        jmp     loc_10043039
    loc_10043036:
        mov     dword ptr [ebp - 0x8], esi
    loc_10043039:
        mov     eax, dword ptr [ebp + 0x18]
        cmp     eax, esi
        jnz     loc_10043045
        mov     eax, dword ptr [g_10054b48]
    loc_10043045:
        cmp     dword ptr [ebp - 0x4], esi
        mov     dword ptr [ebp + 0x18], eax
        jbe     loc_100430c4
        mov     esi, dword ptr [ebp + 0x10]
    loc_10043050:
        mov     al, byte ptr [esi]
        test    al, al
        jz      loc_100430c4
        cmp     al, 0x25
        jz      loc_1004308c
        mov     edx, dword ptr [g_10051984]
        movzx   ecx, al
        test    byte ptr [edx + ecx*0x2 + 0x1], 0x80
        jz      loc_1004307c
        cmp     dword ptr [ebp - 0x4], 0x1
        jbe     loc_1004307c
        mov     ecx, dword ptr [ebp + 0x8]
        mov     byte ptr [ecx], al
        inc     dword ptr [ebp + 0x8]
        inc     esi
        dec     dword ptr [ebp - 0x4]
    loc_1004307c:
        mov     ecx, dword ptr [ebp + 0x8]
        mov     al, byte ptr [esi]
        mov     byte ptr [ecx], al
        inc     dword ptr [ebp + 0x8]
        inc     esi
        dec     dword ptr [ebp - 0x4]
        jmp     loc_100430be
    loc_1004308c:
        and     dword ptr [g_10075818], 0x0
        inc     esi
        cmp     byte ptr [esi], 0x23
        jnz     loc_100430a4
        mov     dword ptr [g_10075818], 0x1
        inc     esi
    loc_100430a4:
        push    dword ptr [ebp + 0x18]
        lea     eax, [ebp - 0x4]
        push    eax
        lea     eax, [ebp + 0x8]
        push    eax
        mov     al, byte ptr [esi]
        push    dword ptr [ebp + 0x14]
        push    eax
        call    FUN_100430f2
        add     esp, 0x14
        inc     esi
    loc_100430be:
        cmp     dword ptr [ebp - 0x4], 0x0
        ja      loc_10043050
    loc_100430c4:
        cmp     dword ptr [ebp - 0x8], 0x0
        jz      loc_100430d4
        push    0x13
        call    FUN_10039b7a
        pop     ecx
        jmp     loc_100430d7
    loc_100430d4:
        push    edi
        call    ebx
    loc_100430d7:
        cmp     dword ptr [ebp - 0x4], 0x0
        pop     edi
        pop     esi
        pop     ebx
        jbe     loc_100430ee
        mov     eax, dword ptr [ebp + 0x8]
        and     byte ptr [eax], 0x0
        mov     eax, dword ptr [ebp + 0xC]
        sub     eax, dword ptr [ebp - 0x4]
        leave
        ret
    loc_100430ee:
        xor     eax, eax
        leave
        ret
    }
}
