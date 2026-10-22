/*
 * FUN_005b77a0 (101 B) — __cdecl. Allocates 0xa4 bytes via FUN_004084d0;
 * on success constructs an Objective object via FUN_00501a20 (thiscall,
 * ECX=EAX, 13 stack args) and stores the result in global 0x007f2110,
 * else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *FUN_004084d0(int);
extern void *FUN_00501a20(void);

__declspec(naked) void __cdecl FUN_005b77a0(void)
{
    

extern int DAT_007f2118;
extern int DAT_007dc690;
extern int DAT_007f2110;
__asm {
push    0xa4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_77fa
        mov ecx, dword ptr [DAT_007f2118]
        mov edx, dword ptr [DAT_007dc690]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0x0
        push    0x501eb0
        push    ecx
        push    0x679190
        push    0x5b7840
        push    0x0
        push    0x0
        push    edx
        push    0x7868d8
        push    0x489
        mov     ecx, eax
        call    FUN_00501a20
        mov dword ptr [DAT_007f2110], eax
        ret
    L_77fa:
        mov dword ptr [DAT_007f2110], 0x0
        ret
    }


}
