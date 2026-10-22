/*
 * FUN_1002B370 (168 B) - __stdcall, RET 0xC (3 args).
 * Clone an array of arg3 pointers from arg2 into a freshly allocated
 * buffer (FUN_10001d50), zero-filled; each non-null source element is
 * deep-cloned via FUN_10001dd0.  On success stores the buffer into *arg1
 * and returns 0.  On allocation/clone failure frees the buffer (and its
 * clones) via FUN_1002b420 and returns 0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);    /* rel32 call (alloc) */
extern void __stdcall FUN_10001dd0(void);  /* rel32 call (clone) */
extern void __stdcall FUN_1002b420(void);  /* rel32 call (free array) */

__declspec(naked) void __stdcall FUN_1002B370(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        xor     ebx, ebx
        test    ebp, ebp
        push    edi
        jne     L_b38d
        mov     eax, dword ptr [esp + 0x14]
        pop     edi
        pop     esi
        mov     dword ptr [eax], ebp
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0xc
    L_b38d:
        lea     esi, [ebp*4]
        push    esi
        call    FUN_10001d50
        mov     edx, eax
        add     esp, 0x4
        test    edx, edx
        mov     dword ptr [esp + 0x1c], edx
        je      L_b40f
        mov     ecx, esi
        shr     ecx, 2
        xor     eax, eax
        mov     edi, edx
        rep stosd
        mov     ecx, esi
        and     ecx, 3
        rep stosb
        xor     edi, edi
        test    ebp, ebp
        jbe     L_b3f7
        mov     esi, dword ptr [esp + 0x18]
        mov     ecx, edx
        sub     ecx, esi
        mov     dword ptr [esp + 0x18], ecx
        nop
        __emit 0x8D   /* __emit: lea esp,[esp] zero-disp; MSVC6 drops the 00 disp byte (8D 64 24 00) */
        __emit 0x64
        __emit 0x24
        __emit 0x00
    L_b3d0:
        mov     eax, dword ptr [esi]
        test    eax, eax
        je      L_b3ea
        push    eax
        call    FUN_10001dd0
        mov     edx, dword ptr [esp + 0x1c]
        mov     ebx, eax
        test    ebx, ebx
        je      L_b406
        mov     ecx, dword ptr [esp + 0x18]
    L_b3ea:
        mov     dword ptr [ecx + esi], ebx
        xor     ebx, ebx
        inc     edi
        add     esi, 4
        cmp     edi, ebp
        jb      L_b3d0
    L_b3f7:
        mov     ecx, dword ptr [esp + 0x14]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [ecx], edx
        xor     eax, eax
        pop     ebx
        ret     0xc
    L_b406:
        push    ebp
        push    edx
        push    0
        call    FUN_1002b420
    L_b40f:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0xc
    }
}
