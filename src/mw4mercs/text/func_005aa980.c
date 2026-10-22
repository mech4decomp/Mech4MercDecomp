/*
 * FUN_005aa980 (193 B) — AMS subsystem init.
 * Allocates 0xA8 bytes; on success calls FUN_00501a20 (thiscall, ECX=EAX)
 * with a large argument list, sets [ESI+0xA4] to FUN_005aac20, stores ESI
 * in global 0x007F20A8. On failure stores 0. Then allocates 0x20 bytes;
 * on success calls FUN_005008e0 (thiscall) and FUN_00500ec0 (thiscall,
 * ECX=this+0x74); on failure calls FUN_00500ec0(0).
 *
 * __cdecl, no args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern int FUN_00501a20(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500ec0(void);

__declspec(naked) void __cdecl FUN_005aa980(void)
{
    

extern int DAT_007f25b0;
extern int DAT_007f25b4;
extern int DAT_007f20a8;
__asm {
push    esi
        push    0xA8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_alloc_fail
        mov eax, dword ptr [DAT_007f25b0]
        mov ecx, dword ptr [DAT_007f25b4]
        push    0x502C60
        push    0x5028B0
        push    0x6780C0
        push    0
        push    0x6780A0
        push    eax
        push    0x678010
        push    0x5AAA80
        push    0
        push    0
        push    ecx
        push    0x7855B4
        push    0x49F
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xA4], 0x5AAC20
        mov dword ptr [DAT_007f20a8], esi
        jmp     L_second
L_alloc_fail:
        mov dword ptr [DAT_007f20a8], 0x0
L_second:
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_second_fail
        push    0x34
        push    0x231
        push    0x7855A0
        push    0xB
        mov     ecx, esi
        call    FUN_005008e0
        mov edx, dword ptr [DAT_007f20a8]
        push    esi
        lea     ecx, [edx + 0x74]
        mov     dword ptr [esi], 0x773CD0
        call    FUN_00500ec0
        pop     esi
        ret
L_second_fail:
        mov edx, dword ptr [DAT_007f20a8]
        xor     esi, esi
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        pop     esi
        ret
    }


}
