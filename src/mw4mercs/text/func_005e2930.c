/*
 * FUN_005e2930 (116 B) — __cdecl subsystem constructor (no params).
 *
 * Allocates 0xa8 bytes via FUN_004084d0; if non-null, calls
 * FUN_00501a20 (__thiscall, ECX=this) with 13 args, sets
 * [this+0xa4]=0x5ef970, stores this to global 0x007f2540.
 * Else stores 0 to 0x007f2540.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __stdcall FUN_00501a20(void);

__declspec(naked) void __stdcall FUN_005e2930(void)
{
    

extern int DAT_007f255c;
extern int DAT_007f2548;
extern int DAT_007f2540;
__asm {
push    esi
        push    0xA8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      fail
        mov eax, dword ptr [DAT_007f255c]
        mov ecx, dword ptr [DAT_007f2548]
        push    0x502C60
        push    0x5028B0
        push    0x675A60
        push    0x0
        push    0x675A40
        push    eax
        push    0x674B00
        push    0x5E29E0
        push    0x0
        push    0x0
        push    ecx
        push    0x788C00
        push    0x476
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xA4], 0x5EF970
        mov dword ptr [DAT_007f2540], esi
        pop     esi
        ret
fail:
        mov dword ptr [DAT_007f2540], 0x0
        pop     esi
        ret
    }


}
