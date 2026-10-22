/*
 * FUN_005a3d50 (119 B) — Object creation/initialization.
 *
 * __cdecl, no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_004084d0(int size);
extern int __fastcall FUN_00501a20(void);

__declspec(naked) void __cdecl FUN_005a3d50(void)
{
    

extern int DAT_007f25bc;
extern int DAT_007f25c0;
extern int DAT_007f2044;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_null
        mov eax, dword ptr [DAT_007f25bc]
        mov ecx, dword ptr [DAT_007f25c0]
        push    0x502c60
        push    0x5028b0
        push    0x66a3c0
        push    0x62ec80
        push    0x66a150
        push    eax
        push    0x62df30
        push    0x5a3e00
        push    0
        push    0
        push    ecx
        push    0x7841a8
        push    0x4bb
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x6039e0
        mov dword ptr [DAT_007f2044], esi
        pop     esi
        ret
L_null:
        mov dword ptr [DAT_007f2044], 0x0
        pop     esi
        ret
    }


}
