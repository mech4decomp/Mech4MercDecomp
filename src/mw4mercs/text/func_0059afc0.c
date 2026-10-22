/*
 * FUN_0059afc0 (116 B) — __stdcall initialization function.
 *
 * Same pattern as FUN_00591860 but with different constants.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void * FUN_004084d0(int);
int FUN_00501a20(void);

__declspec(naked) void __stdcall FUN_0059afc0(void)
{
    

extern int DAT_007f25b0;
extern int DAT_007f25b4;
extern int DAT_007f1ff4;
__asm {
push    esi
        push    0xA8                        ; allocation size
        call    FUN_004084d0                 ; allocate
        mov     esi, eax                    ; esi = allocated memory
        add     esp, 4
        test    esi, esi
        je      L_fail

        mov eax, dword ptr [DAT_007f25b0]
        mov ecx, dword ptr [DAT_007f25b4]

        push    0x502C60
        push    0x5028B0
        push    0x674890
        push    0
        push    0x674770
        push    eax
        push    0x6746E0
        push    0x59B070
        push    0
        push    0
        push    ecx
        push    0x78376C
        push    0x4CD
        mov     ecx, esi                    ; this = allocated memory
        call    FUN_00501a20                 ; initialize object

        mov     dword ptr [esi + 0xA4], 0x5F0A60
        mov dword ptr [DAT_007f1ff4], esi
        pop     esi
        ret

    L_fail:
        mov dword ptr [DAT_007f1ff4], 0x0
        pop     esi
        ret
    }


}
