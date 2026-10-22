/*
 * FUN_1000C790 (89 B) - __stdcall, RET 0x8.  Hash-list lookup helper:
 * uses param_1 (a hash-list header at +0x00/+0x04/+0x05/+0x06) to index a
 * bucket table, or allocates a fresh node via FUN_1000c1b0 and marks it
 * 0xff.  Calls FUN_1000c410 (node insert) on the fast path.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *__cdecl FUN_1000c410(void);   /* rel32 call, 1 arg */
extern void __cdecl FUN_1000c1b0(void);    /* rel32 call (alloc), 1 arg */

__declspec(naked) void __stdcall FUN_1000C790(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        mov     cl, byte ptr [edx + 0x6]
        mov     eax, 1
        shl     eax, cl
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        cmp     esi, eax
        jae     L_c7d4
        mov     al, byte ptr [edx + 0x4]
        test    al, al
        je      L_c7d4
        mov     cl, byte ptr [edx + 0x5]
        mov     eax, esi
        shr     eax, cl
        xor     ecx, ecx
        test    eax, eax
        je      L_c7c7
        nop
        __emit 0x8D   /* lea esp,[esp] zero-disp form; MSVC6 drops the 00 byte */
        __emit 0x64
        __emit 0x24
        __emit 0x00
L_c7c0:
        shr     eax, 1
        inc     ecx
        test    eax, eax
        jne     L_c7c0
L_c7c7:
        mov     edx, dword ptr [edx]
        mov     eax, dword ptr [edx + ecx*4]
        push    eax
        call    FUN_1000c410
        jmp     L_c7dd
L_c7d4:
        lea     ecx, [esi + 1]
        push    ecx
        call    FUN_1000c1b0
L_c7dd:
        test    eax, eax
        je      L_c7e5
        mov     byte ptr [eax + esi], 0xff
L_c7e5:
        pop     esi
        ret     0x8
    }
}
