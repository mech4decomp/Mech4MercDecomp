/*
 * FUN_0074B280 (253 B true extent; 256 B slice incl. trailing NOPs) —
 * in-.text data block function (block 0x74B258). Copies 8-dword records
 * into tables 0x8b86b8 / 0x8b7b18; calls FUN_0074b180 / FUN_0074b150.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0074b180(void);
extern void __cdecl FUN_0074b150(void);

extern int  g_008b7a8c;   /* DAT_008b7a8c */
extern int  g_0087c29c;   /* DAT_0087c29c */
extern int  g_8b7a2c[];   /* table @ 0x8b7a2c */
extern char g_8b86b8[];   /* buffer @ 0x8b86b8 */
extern char g_8b7b18[];   /* buffer @ 0x8b7b18 */

__declspec(naked) void FUN_0074B280(void)
{
    __asm {
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     ebp, dword ptr [esi + 0xc]
        xor     eax, eax
        cmp     ebp, 0x20
        sete    al
        push    edi
        lea     ecx, [esp + 0x10]
        push    ecx
        push    esi
        mov     ebp, eax
        call    FUN_0074b180
        test    al, al
        je      L372
        mov     eax, dword ptr [esi + 4]
        test    eax, 0x40000
        jne     L372
        test    eax, 0x80000
        je      L2F1
        cmp     dword ptr [esi + 0xc], 0x10
        jne     L372
        mov     ecx, 8
        mov     edi, offset g_8b86b8
        rep movsd
        pop     edi
        pop     esi
        mov     dword ptr [g_008b7a8c], 0x14
        mov     dword ptr [g_0087c29c], 1
        mov     eax, 1
        pop     ebp
        ret     8
L2F1:
        test    al, 1
        je      L302
        mov     edx, dword ptr [esi + 0x1c]
        push    edx
        call    FUN_0074b150
        mov     edi, eax
        jmp     L304
L302:
        xor     edi, edi
L304:
        mov     eax, dword ptr [esi + 0x14]
        push    eax
        call    FUN_0074b150
        cmp     eax, 8
        jne     L325
        mov     ecx, dword ptr [esi + 0x10]
        mov     edx, dword ptr [esi + 0x18]
        shr     ecx, 0x10
        and     ecx, edx
        cmp     ecx, 0xff
        jne     L372
L325:
        cmp     edi, 1
        mov     ecx, 2
        jg      L331
        mov     ecx, edi
L331:
        xor     edx, edx
        cmp     eax, 5
        setne   dl
        lea     eax, [ebp + ecx*2]
        mov     ecx, dword ptr [esp + 0x10]
        lea     eax, [ecx + eax*4]
        mov     ecx, dword ptr [eax*4 + g_8b7a2c]
        dec     edx
        and     edx, 0xfffffff6
        add     edx, 0x14
        cmp     edx, ecx
        jle     L372
        mov     ecx, eax
        shl     ecx, 5
        sub     ecx, eax
        lea     edi, [ecx*4 + g_8b7b18]
        mov     ecx, 8
        rep movsd
        mov     dword ptr [eax*4 + g_8b7a2c], edx
L372:
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebp
        ret     8
    }
}
