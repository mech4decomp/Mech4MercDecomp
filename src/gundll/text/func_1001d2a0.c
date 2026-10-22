/*
 * FUN_1001D2A0 (157 B) - __stdcall, RET 0x10.  Looks up a string in a
 * hash table: validates a 'XLMX' (0x584d4c54) magic header, then walks
 * the bucket chain calling FUN_10037bf0 to compare, returning the
 * matching entry pointer or 0xc1120007 on failure.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10037bf0(void);     /* rel32 call, 2 args */

__declspec(naked) int __stdcall FUN_1001D2A0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    ebx
        push    ebp
        push    esi
        xor     esi, esi
        xor     ebp, ebp
        test    eax, eax
        push    edi
        jne     L_b7
        mov     eax, dword ptr [esp + 0x14]
        mov     eax, dword ptr [eax + 0x4]
L_b7:
        cmp     dword ptr [eax], 0x584d4c54
        je      L_c6
        mov     ebp, 0x80070057
        jmp     L_c8
L_c6:
        mov     esi, eax
L_c8:
        test    ebp, ebp
        jl      L_334
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jne     L_df
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120007
        pop     ebx
        ret     0x10
L_df:
        mov     eax, dword ptr [esi + 0xc]
        xor     edi, edi
        test    eax, eax
        jbe     L_322
        mov     ebx, dword ptr [esp + 0x1c]
        __emit 0x8d                 /* __emit: lea esp,[esp+0] zero-disp; MSVC6 drops the 00 byte */
        __emit 0x64
        __emit 0x24
        __emit 0x00
L_f0:
        mov     ecx, dword ptr [esi + 0x10]
        mov     eax, dword ptr [ecx + edi*4]
        push    eax
        push    ebx
        call    FUN_10037bf0
        add     esp, 0x8
        test    eax, eax
        je      L_318
        mov     eax, dword ptr [esi + 0xc]
        inc     edi
        cmp     edi, eax
        jb      L_f0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120007
        pop     ebx
        ret     0x10
L_318:
        mov     edx, dword ptr [esi + 0x14]
        mov     edi, dword ptr [edx + edi*4]
        test    edi, edi
        jne     L_32e
L_322:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120007
        pop     ebx
        ret     0x10
L_32e:
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [eax], edi
L_334:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     0x10
    }
}
