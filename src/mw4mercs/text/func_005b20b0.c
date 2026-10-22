/*
 * FUN_005b20b0 (104 B) — __cdecl (no args), RET.
 * Allocates 0xa4 bytes; if non-null, calls FUN_00501a20 with many args and
 * stores result to 0x007f20f4; else stores 0 to 0x007f20f4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void* __cdecl FUN_004084d0(int);
extern int   __fastcall FUN_00501a20(int,int,int,int,int,int,int,int,int,int,int,int,int);

__declspec(naked) void __cdecl FUN_005b20b0(void)
{
    

extern int DAT_007dc8cc;
extern int DAT_007f23b0;
extern int DAT_007f20f4;
__asm {
push    0xa4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      l_210d
        mov ecx, dword ptr [DAT_007dc8cc]
        mov edx, dword ptr [DAT_007f23b0]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0
        push    0x501eb0
        push    ecx
        push    0x678cb0
        push    0x5b2150
        push    0x7860d8
        push    1
        push    edx
        push    0x7860e4
        push    0x494
        mov     ecx, eax
        call    FUN_00501a20
        mov dword ptr [DAT_007f20f4], eax
        ret
    l_210d:
        mov dword ptr [DAT_007f20f4], 0x0
        ret
    }


}
