/*
 * FUN_005f04c0 (423 B) — no-arg subsystem initializer.
 *
 * Allocates the ExecutionStateEngine (0xa8) and registers it via
 * FUN_00501a20, then allocates/registers five 0x20-byte stat
 * objects (TotalSlotsTaken, Tonage, BattleValue, TradeValue,
 * ItemID) via FUN_005008e0 + FUN_00500ec0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void FUN_00501a20(void);
extern void FUN_005008e0(void);
extern void FUN_00500ec0(void);

__declspec(naked) void __stdcall FUN_005f04c0(void)
{
    

extern int DAT_007f25b0;
extern int DAT_007dc690;
extern int DAT_007f25b4;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L1
        mov eax, dword ptr [DAT_007f25b0]
        mov ecx, dword ptr [DAT_007dc690]
        push    0x502c60
        push    0x5028b0
        push    0x674890
        push    0
        push    0x674770
        push    eax
        push    0x6746e0
        push    0x5f06a0
        push    0
        push    0
        push    ecx
        push    0x78a138
        push    0x427
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x5f0a60
        mov dword ptr [DAT_007f25b4], esi
        jmp     L2
L1:
        mov dword ptr [DAT_007f25b4], 0x0
L2:
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L3
        push    0x28
        push    1
        push    0x78a128
        push    6
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775588
        jmp     L4
L3:
        xor     esi, esi
L4:
        mov edx, dword ptr [DAT_007f25b4]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L5
        push    0x1c
        push    2
        push    0x78a120
        push    7
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L6
L5:
        xor     esi, esi
L6:
        mov eax, dword ptr [DAT_007f25b4]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L7
        push    0x20
        push    1
        push    0x78a114
        push    8
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775588
        jmp     L8
L7:
        xor     esi, esi
L8:
        mov ecx, dword ptr [DAT_007f25b4]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L9
        push    0x24
        push    1
        push    0x78a108
        push    9
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775588
        jmp     L10
L9:
        xor     esi, esi
L10:
        mov edx, dword ptr [DAT_007f25b4]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L11
        push    0x30
        push    1
        push    0x78a100
        push    0xa
        mov     ecx, esi
        call    FUN_005008e0
        mov eax, dword ptr [DAT_007f25b4]
        push    esi
        lea     ecx, [eax + 0x74]
        mov     dword ptr [esi], 0x775588
        call    FUN_00500ec0
        pop     esi
        ret
L11:
        mov eax, dword ptr [DAT_007f25b4]
        xor     esi, esi
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        pop     esi
        ret
    }


}
