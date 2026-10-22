/*
 * FUN_1002af80 (347 B) — __stdcall, RET 0x8.
 * HTML-escapes a wide string: counts special chars, allocates, then expands
 * &quot;/&amp;/&lt;/&gt; via a switch (jump-table dispatch).
 */

extern void __cdecl FUN_10001d50(void);
extern void __cdecl FUN_10037999(void);
extern void __cdecl FUN_1003791a(void);
extern char g_1002b0dc;
extern char g_1002b0e4;
extern char g_1002b104;
extern char g_1002b118;
extern char g_10049b08;
extern char g_10049afc;
extern char g_10049af0;
extern char g_10049ae4;

__declspec(naked) void __stdcall FUN_1002af80(void)
{
    __asm {
        push    ebp
        mov     ebp, dword ptr [esp + 0x8]
        xor     edx, edx
        xor     eax, eax
        test    ebp, ebp
        push    edi
        jnz     L_1002af99
        mov     ecx, dword ptr [esp + 0x10]
        pop     edi
        mov     dword ptr [ecx], ebp
        pop     ebp
        ret     0x8
    L_1002af99:
        xor     eax, eax
        mov     ax, word ptr [ebp]
        xor     ecx, ecx
        test    ax, ax
        jz      L_1002afcb
    L_1002afa6:
        movzx   eax, ax
        add     eax, -0x22
        cmp     eax, 0x1c
        ja      L_1002afc0
        movzx   eax, byte ptr [eax + g_1002b0e4]
        jmp     dword ptr [eax*4 + g_1002b0dc]
    L_1002afbf:
        inc     edx
    L_1002afc0:
        mov     ax, word ptr [ebp + ecx*2 + 0x2]
        inc     ecx
        test    ax, ax
        jnz     L_1002afa6
    L_1002afcb:
        test    edx, edx
        mov     dword ptr [esp + 0xc], ecx
        jnz     L_1002afe0
        mov     ecx, dword ptr [esp + 0x10]
        pop     edi
        mov     dword ptr [ecx], ebp
        xor     eax, eax
        pop     ebp
        ret     0x8
    L_1002afe0:
        lea     eax, [ecx + edx*4]
        add     edx, eax
        lea     ecx, [edx + edx + 0x2]
        push    ecx
        call    FUN_10001d50
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        jnz     L_1002b002
        pop     edi
        mov     eax, 0x8007000e
        pop     ebp
        ret     0x8
    L_1002b002:
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        push    esi
        xor     esi, esi
        xor     ebx, ebx
        test    eax, eax
        jbe     L_1002b0c6
    L_1002b014:
        mov     ax, word ptr [ebp + ebx*2]
        xor     ecx, ecx
        mov     cx, ax
        add     ecx, -0x22
        cmp     ecx, 0x1c
        ja      L_1002b0b4
        movzx   edx, byte ptr [ecx + g_1002b118]
        jmp     dword ptr [edx*4 + g_1002b104]
    L_1002b038:
        lea     eax, [edi + esi*2]
        push    offset g_10049b08
        push    eax
        call    FUN_10037999
        push    offset g_10049b08
        call    FUN_1003791a
        add     esp, 0xc
        add     esi, eax
        jmp     L_1002b0b9
    L_1002b057:
        lea     ecx, [edi + esi*2]
        push    offset g_10049afc
        push    ecx
        call    FUN_10037999
        push    offset g_10049afc
        call    FUN_1003791a
        add     esp, 0xc
        add     esi, eax
        jmp     L_1002b0b9
    L_1002b076:
        lea     edx, [edi + esi*2]
        push    offset g_10049af0
        push    edx
        call    FUN_10037999
        push    offset g_10049af0
        call    FUN_1003791a
        add     esp, 0xc
        add     esi, eax
        jmp     L_1002b0b9
    L_1002b095:
        lea     eax, [edi + esi*2]
        push    offset g_10049ae4
        push    eax
        call    FUN_10037999
        push    offset g_10049ae4
        call    FUN_1003791a
        add     esp, 0xc
        add     esi, eax
        jmp     L_1002b0b9
    L_1002b0b4:
        mov     word ptr [edi + esi*2], ax
        inc     esi
    L_1002b0b9:
        mov     eax, dword ptr [esp + 0x14]
        inc     ebx
        cmp     ebx, eax
        jc      L_1002b014
    L_1002b0c6:
        mov     ecx, dword ptr [esp + 0x18]
        mov     word ptr [edi + esi*2], 0x0
        pop     esi
        pop     ebx
        mov     dword ptr [ecx], edi
        pop     edi
        xor     eax, eax
        pop     ebp
        ret     0x8
    }
}
