/*
 * FUN_1002C6F0 (280 B) - __stdcall, RET 0xC (3 args).
 * Allocate (FUN_10001d50) and zero a buffer of arg3*0xc bytes, then
 * build a 0xc-byte-per-element table from arg2: deep-clone the first
 * and third dwords via FUN_10001dd0, copy the second.  On success stores
 * the buffer into *arg1 and returns 0.  On allocation/clone failure frees
 * via FUN_1002c810 and returns 0x8007000e.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);    /* rel32 call (alloc) */
extern void __stdcall FUN_10001dd0(void);  /* rel32 call (clone) */
extern void __cdecl FUN_10001d60(void);    /* rel32 call (shared_free) */
extern void __stdcall FUN_1002c810(void);  /* rel32 call (free table) */

__declspec(naked) void __stdcall FUN_1002C6F0(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        xor     ebx, ebx
        xor     ebp, ebp
        xor     eax, eax
        test    esi, esi
        push    edi
        jne     L_c715
        mov     ecx, dword ptr [esp + 0x1c]
        pop     edi
        mov     dword ptr [ecx], esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0xc
    L_c715:
        lea     edi, [esi + esi*2]
        shl     edi, 2
        push    edi
        call    FUN_10001d50
        mov     edx, eax
        add     esp, 0x4
        test    edx, edx
        mov     dword ptr [esp + 0x10], edx
        jne     L_c738
        mov     edi, 0x8007000e
        jmp     L_c7ef
    L_c738:
        mov     ecx, edi
        mov     edi, edx
        mov     edx, ecx
        shr     ecx, 2
        xor     eax, eax
        rep stosd
        mov     ecx, edx
        and     ecx, 3
        test    esi, esi
        rep stosb
        mov     dword ptr [esp + 0x14], 0
        jbe     L_c7bf
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x20]
        mov     edi, ecx
        sub     ecx, eax
        lea     esi, [eax + 8]
        mov     dword ptr [esp + 0x20], ecx
        nop
        __emit 0x8D   /* __emit: lea esp,[esp] zero-disp; MSVC6 drops the 00 disp byte (8D 64 24 00) */
        __emit 0x64
        __emit 0x24
        __emit 0x00
    L_c770:
        mov     eax, dword ptr [esi - 8]
        test    eax, eax
        je      L_c783
        push    eax
        call    FUN_10001dd0
        mov     ebx, eax
        test    ebx, ebx
        je      L_c7d5
    L_c783:
        mov     eax, dword ptr [esi]
        test    eax, eax
        je      L_c795
        push    eax
        call    FUN_10001dd0
        mov     ebp, eax
        test    ebp, ebp
        je      L_c7d5
    L_c795:
        mov     eax, dword ptr [esi - 4]
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [edi + 4], eax
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [ecx + esi], ebp
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [edi], ebx
        xor     ebx, ebx
        xor     ebp, ebp
        inc     eax
        add     esi, 0xc
        add     edi, 0xc
        cmp     eax, ecx
        mov     dword ptr [esp + 0x14], eax
        jb      L_c770
    L_c7bf:
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x1c]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [edx], eax
        xor     eax, eax
        pop     ebx
        add     esp, 0x8
        ret     0xc
    L_c7d5:
        test    ebx, ebx
        mov     edi, 0x8007000e
        je      L_c7e7
        push    ebx
        call    FUN_10001d60
        add     esp, 0x4
    L_c7e7:
        mov     esi, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x10]
    L_c7ef:
        test    edx, edx
        je      L_c7fc
        push    esi
        push    edx
        push    0
        call    FUN_1002c810
    L_c7fc:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0xc
    }
}
