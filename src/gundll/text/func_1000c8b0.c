/*
 * FUN_1000C8B0 (87 B) - __stdcall, RET 0xc.  Hash-list lookup/insert
 * (3 args): indexes a bucket table via param_1 header (+0x04/+0x05/+0x06),
 * inserts a node via FUN_1000c4c0 on the fast path, else allocates via
 * FUN_1000c290.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1000c4c0(void);   /* rel32 call, 2 args */
extern void __cdecl FUN_1000c290(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1000C8B0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        mov     cl, byte ptr [edx + 0x6]
        mov     eax, dword ptr [esp + 0xc]
        push    esi
        mov     esi, 1
        shl     esi, cl
        cmp     eax, esi
        pop     esi
        jae     L_c8fa
        mov     cl, byte ptr [edx + 0x4]
        test    cl, cl
        je      L_c8fa
        mov     cl, byte ptr [edx + 0x5]
        shr     eax, cl
        xor     ecx, ecx
        test    eax, eax
        je      L_c8e7
        __emit 0x8D   /* lea ebx,[ebx] 6-byte alignment nop; MSVC6 drops disp */
        __emit 0x9B
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
L_c8e0:
        shr     eax, 1
        inc     ecx
        test    eax, eax
        jne     L_c8e0
L_c8e7:
        mov     eax, dword ptr [esp + 0x8]
        mov     edx, dword ptr [edx]
        push    eax
        mov     eax, dword ptr [edx + ecx*4]
        push    eax
        call    FUN_1000c4c0
        ret     0xc
L_c8fa:
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        call    FUN_1000c290
        ret     0xc
    }
}
