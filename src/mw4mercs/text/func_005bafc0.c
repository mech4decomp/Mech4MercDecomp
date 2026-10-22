/*
 * FUN_005bafc0 (239 B) — StickyMover subsystem construction.
 *
 * Allocates a 0xa4-byte object, initializes it via FUN_00501a20 and stores
 * in DAT_007f2150; then builds two 0x20-byte sub-objects ("ActiveTime",
 * "IdleLoopResource") and attaches them at +0x74.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004084d0(void);
extern void FUN_00501a20(void);
extern void FUN_005008e0(void);
extern void FUN_00500ec0(void);

__declspec(naked) void FUN_005bafc0(void)
{
    

extern int DAT_007f214c;
extern int DAT_007f25a0;
extern int DAT_007f2150;
__asm {
push    0xa4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_1b
        mov ecx, dword ptr [DAT_007f214c]
        mov edx, dword ptr [DAT_007f25a0]
        push    0x502c60
        push    0x5028b0
        push    0x679e70
        push    0x0
        push    0x679e50
        push    ecx
        push    0x507aa0
        push    0x5bb0e0
        push    0x0
        push    0x0
        push    edx
        push    0x786ffc
        push    0x48e
        mov     ecx, eax
        call    FUN_00501a20
        mov dword ptr [DAT_007f2150], eax
        jmp     L_25
L_1b:
        mov dword ptr [DAT_007f2150], 0x0
L_25:
        push    esi
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_50
        push    0x7c
        push    0x2
        push    0x786ff0
        push    0x14
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L_52
L_50:
        xor     esi, esi
L_52:
        mov eax, dword ptr [DAT_007f2150]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_9c
        push    0x78
        push    0x231
        push    0x786fdc
        push    0x15
        mov     ecx, esi
        call    FUN_005008e0
        mov ecx, dword ptr [DAT_007f2150]
        push    esi
        add     ecx, 0x74
        mov     dword ptr [esi], 0x773cd0
        call    FUN_00500ec0
        pop     esi
        ret
L_9c:
        mov ecx, dword ptr [DAT_007f2150]
        xor     esi, esi
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        pop     esi
        ret
    }


}
