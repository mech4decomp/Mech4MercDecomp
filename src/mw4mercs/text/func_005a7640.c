/*
 * FUN_005a7640 (253 B) — Initialization function for light entities.
 *
 * Allocates and initializes a main object (0xa8 bytes), then creates
 * LightEntityResource and LightConeResource sub-objects.
 *
 * __cdecl (no params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_004084d0(int size);
extern void __stdcall FUN_00501a20(int arg1, ...);
extern void __stdcall FUN_005008e0(int arg1, ...);
extern void __stdcall FUN_00500ec0(void *ptr);

__declspec(naked) void __cdecl FUN_005a7640(void)
{
    

extern int DAT_007f25b0;
extern int DAT_007f25b4;
extern int DAT_007f2078;
__asm {
push    esi

        ; Allocate main object (0xa8 bytes)
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      null_ptr1

        mov eax, dword ptr [DAT_007f25b0]
        mov ecx, dword ptr [DAT_007f25b4]

        ; Call FUN_00501a20 with many args
        push    0x502c60
        push    0x5028b0
        push    0x677990
        push    0x0
        push    0x677970
        push    eax
        push    0x6778c0
        push    0x5a7770
        push    0x0
        push    0x0
        push    ecx
        push    0x784cd4
        push    0x4a9
        mov     ecx, esi
        call    FUN_00501a20

        mov     dword ptr [esi + 0xa4], 0x5a7f40
        mov     dword ptr [DAT_007f2078], esi
        jmp     after_null1

null_ptr1:
        mov dword ptr [DAT_007f2078], 0x0

after_null1:
        ; Allocate LightEntityResource (0x20 bytes)
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      null_ptr2

        push    0x34
        push    0x231
        push    0x784cc0
        push    0xb
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x773cd0
        jmp     after_null2

null_ptr2:
        xor     esi, esi

after_null2:
        mov edx, dword ptr [DAT_007f2078]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0

        ; Allocate LightConeResource (0x20 bytes)
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      null_ptr3

        push    0x38
        push    0x231
        push    0x784cac
        push    0xc
        mov     ecx, esi
        call    FUN_005008e0
        mov eax, dword ptr [DAT_007f2078]
        push    esi
        lea     ecx, [eax + 0x74]
        mov     dword ptr [esi], 0x773cd0
        call    FUN_00500ec0
        pop     esi
        ret

null_ptr3:
        mov eax, dword ptr [DAT_007f2078]
        xor     esi, esi
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        pop     esi
        ret
    }


}
