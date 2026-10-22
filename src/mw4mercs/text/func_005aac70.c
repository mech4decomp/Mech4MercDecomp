/*
 * FUN_005aac70 (116 B) — __cdecl, RET.
 *
 * Allocates 0xa8 bytes via FUN_004084d0; if non-null, initializes an
 * object via FUN_00501a20 with a large argument list, sets [esi+0xa4]
 * to a vtable pointer, and stores esi into global 0x007f20ac. Otherwise
 * stores 0 into 0x007f20ac.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __fastcall FUN_00501a20(void);

__declspec(naked) void FUN_005aac70(void)
{
    

extern int DAT_007f255c;
extern int DAT_007f2548;
extern int DAT_007f20ac;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_done
        mov eax, dword ptr [DAT_007f255c]
        mov ecx, dword ptr [DAT_007f2548]
        push    0x502c60
        push    0x5028b0
        push    0x675a60
        push    0x0
        push    0x675a40
        push    eax
        push    0x674b00
        push    0x5aad20
        push    0x0
        push    0x0
        push    ecx
        push    0x78567c
        push    0x49e
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x5ef970
        mov dword ptr [DAT_007f20ac], esi
        pop     esi
        ret
L_done:
        mov dword ptr [DAT_007f20ac], 0x0
        pop     esi
        ret
    }


}
