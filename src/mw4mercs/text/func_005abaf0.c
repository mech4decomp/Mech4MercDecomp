/*
 * FUN_005abaf0 (190 B) — __cdecl, no args.
 *
 * Initialization routine: allocates a HeatSink object (0xa8 bytes), stores
 * it in global 0x007f20c4, then allocates a 0x20-byte HeatSinkPoints object
 * and registers it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500ec0(void);

__declspec(naked) void FUN_005abaf0(void)
{
    

extern int DAT_007f25b0;
extern int DAT_007f25b4;
extern int DAT_007f20c4;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_abb58
        mov eax, dword ptr [DAT_007f25b0]
        mov ecx, dword ptr [DAT_007f25b4]
        push    0x502c60
        push    0x5028b0
        push    0x678150
        push    0
        push    0x678130
        push    eax
        push    0x6746e0
        push    0x5abbe0
        push    0
        push    0
        push    ecx
        push    0x785870
        push    0x49d
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x5f0a60
        mov dword ptr [DAT_007f20c4], esi
        jmp     L_abb62
L_abb58:
        mov dword ptr [DAT_007f20c4], 0x0
L_abb62:
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_abb9b
        push    0x34
        push    2
        push    0x785860
        push    0xb
        mov     ecx, esi
        call    FUN_005008e0
        mov edx, dword ptr [DAT_007f20c4]
        push    esi
        lea     ecx, [edx + 0x74]
        mov     dword ptr [esi], 0x775948
        call    FUN_00500ec0
        pop     esi
        ret
L_abb9b:
        mov edx, dword ptr [DAT_007f20c4]
        xor     esi, esi
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        pop     esi
        ret
    }


}
