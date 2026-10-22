/*
 * FUN_005EBEE0 (430 B) — __cdecl, no params.
 *
 * Allocates and constructs a chain of objects (via FUN_004084d0 +
 * various __thiscall constructors), wiring them into the global at
 * 0x007f259c. Sets vtable pointers on each allocated object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_00501500(void);
extern void __cdecl FUN_005016b0(void);
extern void __cdecl FUN_005013f0(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500ec0(void);

__declspec(naked) void __cdecl FUN_005ebee0(void)
{
    

extern int DAT_007f2598;
extern int DAT_007f25a8;
extern int DAT_007f259c;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L1
        mov eax, dword ptr [DAT_007f2598]
        mov ecx, dword ptr [DAT_007f25a8]
        push    0x502c60
        push    0x5028b0
        push    0x692c80
        push    0x0
        push    0x692c60
        push    eax
        push    0x674b00
        push    0x5ec0c0
        push    0x0
        push    0x0
        push    ecx
        push    0x789b90
        push    0x452
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x5ef970
        mov dword ptr [DAT_007f259c], esi
        jmp     L2
L1:
        mov dword ptr [DAT_007f259c], 0x0
L2:
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L3
        push    0xe0
        push    0x453
        push    0x773250
        push    0x1
        mov     ecx, eax
        call    FUN_00501500
        jmp     L4
L3:
        xor     eax, eax
L4:
        mov edx, dword ptr [DAT_007f259c]
        push    eax
        lea     ecx, [edx + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5
        push    0x1d4
        push    0x2
        push    0x78977c
        push    0x6
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x7731fc
        jmp     L6
L5:
        xor     esi, esi
L6:
        mov eax, dword ptr [DAT_007f259c]
        push    esi
        lea     ecx, [eax + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L7
        push    0x1c8
        push    0x1
        push    0x789b80
        push    0x7
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x773234
        jmp     L8
L7:
        xor     esi, esi
L8:
        mov ecx, dword ptr [DAT_007f259c]
        push    esi
        add     ecx, 0x44
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L9
        push    0x74
        push    0x2
        push    0x789b70
        push    0x1b
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L10
L9:
        xor     esi, esi
L10:
        mov edx, dword ptr [DAT_007f259c]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L11
        push    0x78
        push    0x231
        push    0x789b5c
        push    0x1c
        mov     ecx, esi
        call    FUN_005008e0
        mov eax, dword ptr [DAT_007f259c]
        push    esi
        lea     ecx, [eax + 0x74]
        mov     dword ptr [esi], 0x773cd0
        call    FUN_00500ec0
        pop     esi
        ret
L11:
        mov eax, dword ptr [DAT_007f259c]
        xor     esi, esi
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        pop     esi
        ret
    }


}
