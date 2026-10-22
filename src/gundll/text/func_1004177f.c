/*
 * FUN_1004177f (249 B) — __cdecl.
 * Character/word output with buffer-space checks and fallback callbacks.
 */

extern void FUN_1004209b(void);
extern void FUN_1004277d(void);
extern void FUN_1003a70a(void);
extern void FUN_100441e0(void);
extern int g_10076aa0[];

__declspec(naked) void FUN_1004177f(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, dword ptr [ebp + 0xC]
        test    byte ptr [esi + 0xC], 0x40
        jnz     loc_10041855
        mov     eax, dword ptr [esi + 0x10]
        cmp     eax, -0x1
        jz      loc_100417af
        mov     ecx, eax
        sar     ecx, 0x5
        and     eax, 0x1f
        mov     ecx, dword ptr [ecx*0x4 + g_10076aa0]
        lea     eax, [eax + eax*0x8]
        lea     eax, [ecx + eax*0x4]
        jmp     loc_100417b4
    loc_100417af:
        mov     eax, 0x100518b8
    loc_100417b4:
        test    byte ptr [eax + 0x4], 0x80
        jz      loc_10041855
        push    dword ptr [ebp + 0x8]
        lea     eax, [ebp + 0xC]
        push    eax
        call    FUN_1004209b
        pop     ecx
        cmp     eax, -0x1
        pop     ecx
        jnz     loc_100417e5
        call    FUN_1004277d
        mov     dword ptr [eax], 0x2a
    loc_100417dc:
        or      ax, 0xffff
        jmp     loc_10041875
    loc_100417e5:
        cmp     eax, 0x1
        jnz     loc_10041816
        dec     dword ptr [esi + 0x4]
        js      loc_100417fe
        mov     eax, dword ptr [esi]
        mov     cl, byte ptr [ebp + 0xC]
        mov     byte ptr [eax], cl
        movzx   eax, byte ptr [ebp + 0xC]
    loc_100417fa:
        inc     dword ptr [esi]
        jmp     loc_1004180b
    loc_100417fe:
        movsx   eax, byte ptr [ebp + 0xC]
        push    esi
    loc_10041803:
        push    eax
        call    FUN_1003a70a
        pop     ecx
        pop     ecx
    loc_1004180b:
        cmp     eax, -0x1
        jz      loc_100417dc
        mov     ax, word ptr [ebp + 0x8]
        jmp     loc_10041875
    loc_10041816:
        dec     dword ptr [esi + 0x4]
        js      loc_1004182a
        mov     eax, dword ptr [esi]
        mov     cl, byte ptr [ebp + 0xC]
        mov     byte ptr [eax], cl
        inc     dword ptr [esi]
        movzx   eax, byte ptr [ebp + 0xC]
        jmp     loc_10041837
    loc_1004182a:
        movsx   eax, byte ptr [ebp + 0xC]
        push    esi
        push    eax
        call    FUN_1003a70a
        pop     ecx
        pop     ecx
    loc_10041837:
        cmp     eax, -0x1
        jz      loc_100417dc
        dec     dword ptr [esi + 0x4]
        js      loc_1004184e
        mov     eax, dword ptr [esi]
        mov     cl, byte ptr [ebp + 0xD]
        mov     byte ptr [eax], cl
        movzx   eax, byte ptr [ebp + 0xD]
        jmp     loc_100417fa
    loc_1004184e:
        movsx   eax, byte ptr [ebp + 0xD]
        push    esi
        jmp     loc_10041803
    loc_10041855:
        add     dword ptr [esi + 0x4], -0x2
        js      loc_10041868
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ebp + 0x8]
        mov     word ptr [ecx], ax
        add     dword ptr [esi], 0x2
        jmp     loc_10041875
    loc_10041868:
        movzx   eax, word ptr [ebp + 0x8]
        push    esi
        push    eax
        call    FUN_100441e0
        pop     ecx
        pop     ecx
    loc_10041875:
        pop     esi
        pop     ebp
        ret
    }
}
