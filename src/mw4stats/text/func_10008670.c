/*
 * FUN_10008670 (315 B) - __thiscall (ECX = this, one stack param, RET 0x4).
 * XML declaration/comment/CDATA/doctype parser loop. Consumes '<?', '<!',
 * '<!--', '<![CDATA[', and element tags, dispatching to helper parsers.
 * Returns BL (success flag).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10008dc0(void);
extern void __cdecl FUN_100087B0(void);
extern void __cdecl FUN_10008d30(void);
extern void __cdecl FUN_10008e70(void);
extern void __cdecl FUN_10008320(void);
extern void __cdecl FUN_10008df0(void);
extern void __cdecl FUN_10006ef0(void);
extern void __cdecl FUN_10008970(void);
extern char g_str_10025850[];
extern char g_str_10025840[];
extern char g_str_10025824[];

__declspec(naked) void __cdecl FUN_10008670(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, ecx
        mov     bl, 0x1
L67b:
        test    bl, bl
        jz      La3
        mov     eax, dword ptr [esi + 0x14]
        mov     cx, word ptr [eax]
        mov     dx, word ptr [eax + 0x2]
        mov     ax, word ptr [eax + 0x4]
        cmp     cx, 0x3c
        jnz     L74a
        cmp     dx, 0x3f
        jnz     L6b1
        push    offset g_str_10025850
        mov     ecx, esi
        call    FUN_10008dc0
L6ad:
        xor     bl, bl
        jmp     L67b
L6b1:
        cmp     dx, 0x21
        jnz     L6f2
        cmp     ax, 0x5b
        jnz     L6cd
        push    offset g_str_10025840
        mov     ecx, esi
        call    FUN_10008dc0
        xor     bl, bl
        jmp     L67b
L6cd:
        cmp     ax, 0x2d
        jnz     L6e2
        mov     ecx, esi
        call    FUN_100087B0
        test    al, al
        jnz     L67b
        xor     bl, bl
        jmp     L67b
L6e2:
        push    offset g_str_10025824
        mov     ecx, esi
        call    FUN_10008d30
        xor     bl, bl
        jmp     L67b
L6f2:
        cmp     dx, 0x2f
        jz      La3
        lea     eax, [esp + 0x10]
        mov     ecx, esi
        push    eax
        call    FUN_10008e70
        test    al, al
        jz      L6ad
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx + 0x44], edi
        mov     edx, dword ptr [edi + 0x38]
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, esi
        mov     dword ptr [edx], eax
        add     eax, 0x8
        mov     dword ptr [eax], 0x0
        mov     dword ptr [edi + 0x38], eax
        mov     eax, dword ptr [edi + 0x3c]
        inc     eax
        mov     dword ptr [edi + 0x3c], eax
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call    FUN_10008320
        test    al, al
        jnz     L67b
        xor     bl, bl
        jmp     L67b
L74a:
        test    cx, cx
        jnz     L75d
        mov     ecx, esi
        call    FUN_10008df0
        xor     bl, bl
        jmp     L67b
L75d:
        test    byte ptr [esi + 0x8], 0x1
        jz      L78a
        cmp     cx, 0x20
        jz      L77b
        cmp     cx, 0x9
        jz      L77b
        cmp     cx, 0xd
        jz      L77b
        cmp     cx, 0xa
        jnz     L78a
L77b:
        push    0x0
        lea     ecx, [esi + 0xc]
        call    FUN_10006ef0
        jmp     L67b
L78a:
        lea     ecx, [edi + 0x30]
        push    ecx
        mov     ecx, esi
        call    FUN_10008970
        test    al, al
        jnz     L67b
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
La3:
        pop     edi
        mov     al, bl
        pop     esi
        pop     ebx
        ret     0x4
    }
}
