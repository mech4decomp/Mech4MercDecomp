/*
 * FUN_1002C2A0 (226 B) - __stdcall, RET 0xC (3 args).
 * Allocate (FUN_10001d50) and zero a buffer of arg3*0x30 bytes, then
 * build a 0x30-byte-per-element table from arg2: copy the first dword,
 * then deep-clone 10 pointers via FUN_10001dd0.  On success stores the
 * buffer into *arg1 and returns 0.  On allocation/clone failure frees
 * via FUN_1002c390 and returns 0x8007000e.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);    /* rel32 call (alloc) */
extern void __stdcall FUN_10001dd0(void);  /* rel32 call (clone) */
extern void __stdcall FUN_1002c390(void);  /* rel32 call (free table) */

__declspec(naked) void __stdcall FUN_1002C2A0(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    ebp
        push    esi
        lea     esi, [ebx + ebx*2]
        push    edi
        shl     esi, 4
        push    esi
        call    FUN_10001d50
        mov     edx, eax
        add     esp, 0x4
        test    edx, edx
        mov     dword ptr [esp + 0x14], edx
        jne     L_c2d3
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x8007000e
        pop     ebx
        add     esp, 0x8
        ret     0xc
    L_c2d3:
        mov     ecx, esi
        shr     ecx, 2
        xor     eax, eax
        mov     edi, edx
        rep stosd
        mov     ecx, esi
        and     ecx, 3
        test    ebx, ebx
        rep stosb
        mov     dword ptr [esp + 0x10], 0
        jbe     L_c34e
        mov     ebp, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x20], ebp
        lea     ebx, [edx + 4]
        sub     ebp, edx
        mov     edi, edi
    L_c300:
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebx - 4], ecx
        mov     edx, dword ptr [ebx + ebp]
        mov     dword ptr [ebx], edx
        xor     edi, edi
        lea     esi, [ebx + 4]
    L_c313:
        mov     eax, dword ptr [esi + ebp]
        push    eax
        call    FUN_10001dd0
        test    eax, eax
        je      L_c360
        mov     dword ptr [esi], eax
        inc     edi
        add     esi, 4
        cmp     edi, 0xa
        jb      L_c313
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x24]
        inc     eax
        add     esi, 0x30
        add     ebx, 0x30
        cmp     eax, ecx
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x20], esi
        jb      L_c300
        mov     edx, dword ptr [esp + 0x14]
    L_c34e:
        mov     ecx, dword ptr [esp + 0x1c]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [ecx], edx
        xor     eax, eax
        pop     ebx
        add     esp, 0x8
        ret     0xc
    L_c360:
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x14]
        push    edx
        push    eax
        push    0
        mov     esi, 0x8007000e
        call    FUN_1002c390
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0xc
    }
}
