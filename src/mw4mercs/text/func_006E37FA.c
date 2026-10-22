/*
 * FUN_006E37FA (192 B) — tail fragment of a larger function (jumps back to
 * the main body at 0x6E359D), followed by an in-.text jump table.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b3ec;
extern void __cdecl FUN_006e2eb0(void);
extern void __cdecl FUN_006e2f20(void);

__declspec(naked) void FUN_006E37FA(void)
{
    __asm {
        mov     dword ptr [esp+0x14], ecx
        mov     al, byte ptr [edi+1]
        inc     edi
        test    al, al
        /* __emit: backward jne to main body 0x6E359D (outside this slice) */
        __emit 0x0F
        __emit 0x85
        __emit 0x93
        __emit 0xFD
        __emit 0xFF
        __emit 0xFF
        mov     edi, dword ptr [esp+0x24]
        push    ecx
        mov     ecx, esi
        call    FUN_006e2eb0
        mov     edx, dword ptr [esp+0x1c]
        mov     eax, dword ptr [esi]
        push    edx
        push    edi
        push    eax
        call    dword ptr [g_76b3ec]
        add     esp, 0xc
        push    -1
        mov     ecx, esi
        call    FUN_006e2f20
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     8
        /* ---- in-.text jump table (relocated dword entries) ---- */
        __emit 0x90
        __emit 0x9B
        __emit 0x36
        __emit 0x6E
        __emit 0x00
        __emit 0x8F
        __emit 0x36
        __emit 0x6E
        __emit 0x00
        __emit 0x96
        __emit 0x36
        __emit 0x6E
        __emit 0x00
        __emit 0x9C
        __emit 0x36
        __emit 0x6E
        __emit 0x00
        __emit 0x00
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x00
        __emit 0x03
        __emit 0x00
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x01
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x02
        __emit 0x90
        __emit 0xAF
        __emit 0x37
        __emit 0x6E
        __emit 0x00
        __emit 0xF1
        __emit 0x36
        __emit 0x6E
        __emit 0x00
        __emit 0xE4
        __emit 0x37
        __emit 0x6E
        __emit 0x00
        __emit 0xCA
        __emit 0x37
        __emit 0x6E
        __emit 0x00
        __emit 0xE7
        __emit 0x37
        __emit 0x6E
        __emit 0x00
        __emit 0x00
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x01
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x01
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x04
        __emit 0x01
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x02
        __emit 0x01
        __emit 0x03
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x01
        __emit 0x04
        __emit 0x04
        __emit 0x01
    }
}
