/*
 * FUN_0048A970 (234 B) — in-.text data block function (block 0x48A966).
 * MLR record processing: calls FUN_0048ad90 / FUN_0048b230 /
 * FUN_00713cc0, dispatches via jump table 0x7b2450.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0048ad90(void);
extern void __cdecl FUN_0048b230(void);
extern void __cdecl FUN_00713cc0(void);

extern int g_007da7dc;   /* DAT_007da7dc */
extern int g_7b2450[];   /* jump table @ 0x7b2450 */

__declspec(naked) void FUN_0048A970(void)
{
    __asm {
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [esp + 8]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x12]
        test    eax, eax
        jl      LAA56
        cmp     eax, 1
        jg      LAA56
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        mov     ecx, edi
        call    FUN_0048ad90
        test    eax, eax
        jl      LAA56
        mov     ecx, dword ptr [g_007da7dc]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [edi + 8]
        shl     eax, 5
        push    ebx
        add     eax, edx
        push    esi
        mov     esi, eax
        mov     ebx, dword ptr [esi]
        cmp     ecx, ebx
        je      LA9D7
        mov     eax, dword ptr [esi + 8]
        mov     edx, eax
        shr     edx, 0x10
        push    edx
        and     eax, 0xffff
        push    eax
        push    ebx
        push    ecx
        mov     ecx, edi
        call    FUN_0048b230
        mov     dword ptr [edi + 8], ebx
LA9D7:
        mov     eax, dword ptr [esi + 8]
        test    eax, eax
        jbe     LAA38
        test    ebx, 0x40000000
        jne     LAA38
        and     eax, 0xffff
        jg      LA9F1
        xor     ecx, ecx
        jmp     LA9F8
LA9F1:
        mov     ecx, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [ecx + eax*4 + 0x24]
LA9F8:
        mov     edx, dword ptr [ecx]
        push    0
        call    dword ptr [edx + 4]
        mov     eax, dword ptr [eax + 0x1c]
        push    eax
        push    2
        call    FUN_00713cc0
        mov     eax, dword ptr [esi + 4]
        and     eax, 0x3c00
        cmp     eax, 0x400
        je      LAA2F
        cmp     eax, 0x800
        je      LAA2B
        cmp     eax, 0x1000
        jne     LAA38
        push    3
        jmp     LAA31
LAA2B:
        push    2
        jmp     LAA31
LAA2F:
        push    1
LAA31:
        push    0x1c
        call    FUN_00713cc0
LAA38:
        mov     edx, dword ptr [esi + 0x1c]
        mov     ecx, esi
        call    dword ptr [edx*4 + g_7b2450]
        mov     eax, dword ptr [esi + 8]
        test    eax, eax
        pop     esi
        pop     ebx
        jbe     LAA56
        push    0
        push    0x1c
        call    FUN_00713cc0
LAA56:
        pop     edi
        ret     8
    }
}
