/*
 * FUN_007102ED (192 B) — fragment of a larger function (backward jumps to
 * 0x7102CA/0x7102BC outside this slice). Formats strings via an IAT function
 * and updates globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_858954;
extern int g_85894c;
extern int g_76b420;
extern int g_8ac070[];
extern int g_85a254;
extern int g_858950;
extern int g_85a21c;
extern int g_85a214;
extern int g_85a270;
extern int g_85b608;

__declspec(naked) void FUN_007102ED(void)
{
    __asm {
        /* __emit: misaligned fragment start (tail of a prior instruction) */
        __emit 0x00
        __emit 0x5F
        __emit 0x5E
        add     esp, 0x80
        ret
        mov     al, byte ptr [g_858954]
        mov     edi, dword ptr [g_85894c]
        neg     al
        mov     esi, dword ptr [g_76b420]
        sbb     eax, eax
        and     eax, edi
        mov     ecx, eax
        shl     ecx, 4
        add     ecx, eax
        lea     eax, [eax+ecx*8]
        lea     edx, [eax+eax*2]
        lea     eax, [edx*8 + g_8ac070]
        push    eax
        lea     ecx, [esp+0xc]
        push    0x76c690
        push    ecx
        call    esi
        mov     eax, dword ptr [g_85a254]
        add     esp, 0xc
        test    eax, eax
        mov     edi, 1
        je      L_710346
        lea     eax, [esp+8]
        jmp     L_710365
    L_710346:
        mov     eax, dword ptr [g_858950]
        cmp     eax, 2
        jne     L_710357
        mov     eax, 0x7a16d8
        jmp     L_710365
    L_710357:
        cmp     eax, edi
        mov     eax, 0x7a16b0
        je      L_710365
        mov     eax, 0x7a1d8c
    L_710365:
        push    eax
        push    0x7a1d7c
        push    0x859bac
        call    esi
        mov     edx, dword ptr [g_85a21c]
        mov     eax, dword ptr [g_85a214]
        add     esp, 0xc
        push    edx
        mov     dword ptr [g_85a270], edi
        mov     dword ptr [g_85b608], edi
        push    eax
        /* __emit: backward jmp to 0x7102CA (outside this slice) */
        __emit 0xE9
        __emit 0x37
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
        test    eax, eax
        /* __emit: backward je to 0x7102BC (outside this slice) */
        __emit 0x0F
        __emit 0x84
        __emit 0x21
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
        mov     edx, dword ptr [g_85a21c]
        mov     eax, dword ptr [g_85a214]
        push    edx
        push    eax
        /* __emit: backward jmp to 0x7102CA (outside this slice) */
        __emit 0xE9
        __emit 0x1D
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
    }
}
