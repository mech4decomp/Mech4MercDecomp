/*
 * FUN_005b8c30 (247 B) — Global init. Allocates a 0xa8-byte object,
 * registers it, then allocates two 0x20-byte objects and registers them
 * via FUN_00500ec0. __cdecl, no args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __stdcall FUN_00501a20(void *this_, ...);
extern void __stdcall FUN_005008e0(void *this_, ...);
extern void __stdcall FUN_00500ec0(void *this_, void *p);

__declspec(naked) void __stdcall FUN_005b8c30(void)
{
    

extern int DAT_007f25b0;
extern int DAT_007f25b4;
extern int DAT_007f2124;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_skip1
        mov eax, dword ptr [DAT_007f25b0]
        mov ecx, dword ptr [DAT_007f25b4]
        push    0x502c60
        push    0x5028b0
        push    0x679d00
        push    0x0
        push    0x679ce0
        push    eax
        push    0x6746e0
        push    0x5b8d60
        push    0x0
        push    0x0
        push    ecx
        push    0x786b98
        push    0x487
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x5f0a60
        mov dword ptr [DAT_007f2124], esi
        jmp     l_skip2
l_skip1:
        mov dword ptr [DAT_007f2124], 0x0
l_skip2:
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_skip3
        push    0x34
        push    0x2
        push    0x7823bc
        push    0xb
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     l_skip4
l_skip3:
        xor     esi, esi
l_skip4:
        mov edx, dword ptr [DAT_007f2124]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_skip5
        push    0x38
        push    0x2
        push    0x786b7c
        push    0xc
        mov     ecx, esi
        call    FUN_005008e0
        mov eax, dword ptr [DAT_007f2124]
        push    esi
        lea     ecx, [eax + 0x74]
        mov     dword ptr [esi], 0x775948
        call    FUN_00500ec0
        pop     esi
        ret
l_skip5:
        mov eax, dword ptr [DAT_007f2124]
        xor     esi, esi
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        pop     esi
        ret
    }


}
