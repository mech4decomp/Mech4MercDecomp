/*
 * FUN_006f5110 (245 B) — __fastcall constructor. Initializes a hash/table
 * object: sets up two function pointers, computes a power-of-two size via a
 * bit-scan loop, allocates a bucket array (FUN_006f5300), links the buckets
 * into a circular list, and allocates a sub-object (FUN_006f8480 /
 * FUN_006f75f0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_6f5400[];         /* 0x006f5400 (function) */
extern char g_6f5440[];         /* 0x006f5440 (function) */
extern char g_79fc20[];         /* 0x0079fc20 (vtable) */

extern void __cdecl FUN_006f5300(void);
extern void __cdecl FUN_006f8480(void);
extern void __cdecl FUN_006f75f0(void);

__declspec(naked) void __fastcall FUN_006f5110(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        xor     edi, edi
        mov     dword ptr [esi + 0x10], offset g_6f5400
        mov     dword ptr [esi + 0xc], offset g_6f5440
        mov     dword ptr [esi + 0x14], edi
        mov     dword ptr [esi + 0x28], edi
        mov     dword ptr [esi + 0x2c], edi
        mov     edx, 0xf
L5132:
        mov     eax, 1
        mov     cl, dl
        shl     eax, cl
        test    eax, 0x1f4
        mov     word ptr [esi + 6], ax
        jnz     L514e
        add     edx, 0xffff
        jmp     L5132
L514e:
        xor     eax, 0x1f4
        test    ax, ax
        jz      L5166
        lea     ecx, [edx + 1]
        mov     eax, 1
        shl     eax, cl
        mov     word ptr [esi + 6], ax
L5166:
        xor     eax, eax
        mov     ax, word ptr [esi + 6]
        mov     word ptr [esi + 4], ax
        dec     eax
        mov     word ptr [esi + 6], ax
        xor     eax, eax
        mov     ax, word ptr [esi + 4]
        cmp     ax, 1
        ja      L5189
        lea     ecx, [esi + 0x18]
        mov     dword ptr [esi + 8], ecx
        jmp     L519a
L5189:
        and     eax, 0xffff
        shl     eax, 4
        push    eax
        call    FUN_006f5300
        mov     dword ptr [esi + 8], eax
L519a:
        xor     edx, edx
        cmp     word ptr [esi + 4], di
        jbe     L51ce
        push    ebx
        mov     ebx, dword ptr [esi + 8]
L51a3:
        mov     ecx, edx
        and     ecx, 0xffff
        mov     eax, ecx
        shl     eax, 4
        add     eax, ebx
        mov     dword ptr [eax], eax
        or      ecx, 0x80000000
        mov     dword ptr [eax + 4], eax
        inc     edx
        cmp     dx, word ptr [esi + 4]
        mov     dword ptr [eax + 8], edi
        mov     dword ptr [eax + 0xc], ecx
        /* __emit: MSVC6 miscomputes backward jcc rel-offset (emits 72 D9, ref 72 D6) */
        __emit 0x72
        __emit 0xD6
        pop     ebx
L51ce:
        push    0x58
        mov     dword ptr [esi + 0x30], edi
        mov     dword ptr [esi + 0x34], edi
        mov     dword ptr [esi + 0x38], edi
        mov     dword ptr [esi + 0x3c], edi
        mov     dword ptr [esi], offset g_79fc20
        call    FUN_006f8480
        cmp     eax, edi
        jz      L51fb
        push    esi
        mov     ecx, eax
        call    FUN_006f75f0
        mov     dword ptr [esi + 0x3c], eax
        pop     edi
        mov     eax, esi
        pop     esi
        ret
L51fb:
        xor     eax, eax
        mov     dword ptr [esi + 0x3c], eax
        pop     edi
        mov     eax, esi
        pop     esi
        ret
    }
}
