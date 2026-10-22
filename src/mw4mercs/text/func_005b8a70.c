/*
 * FUN_005b8a70 (190 B) — RET (no params).
 *
 * Initialization: allocates a 0xa8-byte object, configures it via
 * FUN_00501a20, stores it in DAT_007f2120; then allocates a 0x20-byte
 * object, configures via FUN_005008e0 and FUN_00500ec0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004084d0(void);
extern void __fastcall FUN_00501a20(void);
extern void __fastcall FUN_005008e0(void);
extern void __fastcall FUN_00500ec0(void);

__declspec(naked) void __fastcall FUN_005b8a70(void)
{
    

extern int DAT_007f25b0;
extern int DAT_007f25b4;
extern int DAT_007f2120;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_8ad8
        mov eax, dword ptr [DAT_007f25b0]
        mov ecx, dword ptr [DAT_007f25b4]
        push    0x502c60
        push    0x5028b0
        push    0x679c20
        push    0x0
        push    0x679c00
        push    eax
        push    0x6746e0
        push    0x5b8b60
        push    0x0
        push    0x0
        push    ecx
        push    0x786ab4
        push    0x486
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x5f0a60
        mov dword ptr [DAT_007f2120], esi
        jmp     L_8ae2
    L_8ad8:
        mov dword ptr [DAT_007f2120], 0x0
    L_8ae2:
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_8b1b
        push    0x34
        push    0x2
        push    0x7823bc
        push    0xb
        mov     ecx, esi
        call    FUN_005008e0
        mov edx, dword ptr [DAT_007f2120]
        push    esi
        lea     ecx, [edx + 0x74]
        mov     dword ptr [esi], 0x775948
        call    FUN_00500ec0
        pop     esi
        ret
    L_8b1b:
        mov edx, dword ptr [DAT_007f2120]
        xor     esi, esi
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        pop     esi
        ret
    }


}
