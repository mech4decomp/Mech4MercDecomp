/*
 * FUN_00757510 (164 B) — maps a format/type code returned by FUN_00758430 to
 * a size value written through the output pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00758430(void);

__declspec(naked) void FUN_00757510(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [ecx+0xc]
        /* __emit: MSVC6 drops the 00 disp byte for lea eax,[esp] (8D 04 24 vs ref 8D 44 24 00) */
        __emit 0x8D
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push    eax
        push    ecx
        call    FUN_00758430
        /* __emit: MSVC6 drops the 00 disp byte for mov eax,[esp] (8B 04 24 vs ref 8B 44 24 00) */
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x00
        cmp     eax, 1
        mov     ecx, dword ptr [esp+8]
        mov     dword ptr [ecx], 0
        jne     L_7538
        mov     dword ptr [ecx], eax
        pop     ecx
        ret     4
    L_7538:
        cmp     eax, 2
        jne     L_7543
        mov     dword ptr [ecx], eax
        pop     ecx
        ret     4
    L_7543:
        cmp     eax, 3
        jne     L_7552
        mov     dword ptr [ecx], 4
        pop     ecx
        ret     4
    L_7552:
        cmp     eax, 5
        jne     L_7561
        mov     dword ptr [ecx], 0x10
        pop     ecx
        ret     4
    L_7561:
        cmp     eax, 4
        jne     L_7570
        mov     dword ptr [ecx], 8
        pop     ecx
        ret     4
    L_7570:
        cmp     eax, 0x50004
        jne     L_7581
        mov     dword ptr [ecx], 0x28
        pop     ecx
        ret     4
    L_7581:
        cmp     eax, 0xa0004
        jne     L_7592
        mov     dword ptr [ecx], 0x48
        pop     ecx
        ret     4
    L_7592:
        cmp     eax, 0x140004
        jne     L_75a3
        mov     dword ptr [ecx], 0x88
        pop     ecx
        ret     4
    L_75a3:
        cmp     eax, 0xb40004
        jne     L_75b0
        mov     dword ptr [ecx], 0x108
    L_75b0:
        pop     ecx
        ret     4
    }
}
