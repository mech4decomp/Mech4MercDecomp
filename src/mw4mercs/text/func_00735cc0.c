/*
 * FUN_00735CC0 (364 B) — __thiscall dispatcher. Calls FUN_007353f0 to
 * build a local buffer, then based on a field at this+4 selects one of
 * three handlers (FUN_00743610 / FUN_00743790 / FUN_00742e00), each
 * invoked with a table-indexed argument from g_008b7b24, then calls
 * FUN_00735440. RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_008b7b24[];

extern void __cdecl FUN_007353f0(void *a, void *b, void *c, int d, void *e);
extern void __cdecl FUN_00743610(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h, void *i);
extern void __cdecl FUN_00743790(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h, void *i);
extern void __cdecl FUN_00742e00(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h, void *i);
extern void __cdecl FUN_00735440(void *a, void *b);

__declspec(naked) void __fastcall FUN_00735cc0(void)
{
    __asm {
        sub     esp, 0x7c
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x8c]
        push    0x0
        push    0x811
        lea     eax, [esp + 0x10]
        push    eax
        push    0x0
        push    edi
        mov     esi, ecx
        mov     dword ptr [esp + 0x1c], 0x7c
        call    FUN_007353f0
        xor     eax, eax
        mov     ax, word ptr [esi + 0x4]
        mov     ecx, eax
        and     ecx, 0x1c00
        cmp     cx, 0xc00
        jnz     L_35d61
L_35cff:
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        mov     edx, dword ptr [esp + 0x20]
        xor     ecx, ecx
        mov     cx, word ptr [esi + 0x6]
        push    0x0
        push    0x0
        shr     eax, 0xa
        and     eax, 0x7
        push    ecx
        push    edx
        mov     edx, dword ptr [esp + 0x44]
        push    edx
        mov     edx, dword ptr [esp + 0xa4]
        push    edx
        mov     edx, ecx
        shr     edx, 0x7
        and     edx, 0x1
        shr     ecx, 0xe
        lea     eax, [edx + eax*0x2]
        lea     eax, [ecx + eax*0x4]
        mov     ecx, eax
        shl     ecx, 0x5
        sub     ecx, eax
        mov     edx, dword ptr [ecx*4 + g_008b7b24]
        push    edx
        call    FUN_00743610
        push    0x0
        push    edi
        call    FUN_00735440
        pop     edi
        pop     esi
        add     esp, 0x7c
        ret     0x8
L_35d61:
        cmp     cx, 0x1000
        jnz     L_35dca
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        mov     edx, dword ptr [esp + 0x20]
        xor     ecx, ecx
        mov     cx, word ptr [esi + 0x6]
        push    0x0
        push    0x0
        shr     eax, 0xa
        and     eax, 0x7
        push    ecx
        push    edx
        mov     edx, dword ptr [esp + 0x44]
        push    edx
        mov     edx, dword ptr [esp + 0xa4]
        push    edx
        mov     edx, ecx
        shr     edx, 0x7
        and     edx, 0x1
        shr     ecx, 0xe
        lea     eax, [edx + eax*0x2]
        lea     eax, [ecx + eax*0x4]
        mov     ecx, eax
        shl     ecx, 0x5
        sub     ecx, eax
        mov     edx, dword ptr [ecx*4 + g_008b7b24]
        push    edx
        call    FUN_00743790
        push    0x0
        push    edi
        call    FUN_00735440
        pop     edi
        pop     esi
        add     esp, 0x7c
        ret     0x8
L_35dca:
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        mov     edx, dword ptr [esp + 0x20]
        xor     ecx, ecx
        mov     cx, word ptr [esi + 0x6]
        push    0x0
        push    0x0
        shr     eax, 0xa
        and     eax, 0x7
        push    ecx
        push    edx
        mov     edx, dword ptr [esp + 0x44]
        push    edx
        mov     edx, dword ptr [esp + 0xa4]
        push    edx
        mov     edx, ecx
        shr     edx, 0x7
        and     edx, 0x1
        shr     ecx, 0xe
        lea     eax, [edx + eax*0x2]
        lea     eax, [ecx + eax*0x4]
        mov     ecx, eax
        shl     ecx, 0x5
        sub     ecx, eax
        mov     edx, dword ptr [ecx*4 + g_008b7b24]
        push    edx
        call    FUN_00742e00
        push    0x0
        push    edi
        call    FUN_00735440
        pop     edi
        pop     esi
        add     esp, 0x7c
        ret     0x8
    }
}
