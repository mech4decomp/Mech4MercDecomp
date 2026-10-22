/*
 * FUN_00599f20 (116 B) — __stdcall initialization function.
 *
 * Same pattern as FUN_00591860 but with different constants.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void * FUN_004084d0(int);
int FUN_00501a20(void);

__declspec(naked) void __stdcall FUN_00599f20(void)
{
    

extern int DAT_007f255c;
extern int DAT_007f2548;
extern int DAT_007f1fe8;
__asm {
push    esi
        push    0xA8                        ; allocation size
        call    FUN_004084d0                 ; allocate
        mov     esi, eax                    ; esi = allocated memory
        add     esp, 4
        test    esi, esi
        je      L_fail

        mov eax, dword ptr [DAT_007f255c]
        mov ecx, dword ptr [DAT_007f2548]

        push    0x502C60
        push    0x5028B0
        push    0x675A60
        push    0
        push    0x675A40
        push    eax
        push    0x674B00
        push    0x599FD0
        push    0
        push    0
        push    ecx
        push    0x783510
        push    0x4D0
        mov     ecx, esi                    ; this = allocated memory
        call    FUN_00501a20                 ; initialize object

        mov     dword ptr [esi + 0xA4], 0x5EF970
        mov dword ptr [DAT_007f1fe8], esi
        pop     esi
        ret

    L_fail:
        mov dword ptr [DAT_007f1fe8], 0x0
        pop     esi
        ret
    }


}
