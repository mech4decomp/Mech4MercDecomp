/*
 * FUN_005c0ee0 (104 B) — Global CombatAI singleton initializer.
 * Allocates 0xa4 bytes; on success calls FUN_00501a20 (constructor) with
 * a large argument list and stores the result in DAT_007f23b0; on failure
 * stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int);
extern void *__cdecl FUN_00501a20(void);

__declspec(naked) void __stdcall FUN_005c0ee0(void)
{
    

extern int DAT_007dc8cc;
extern int DAT_007f23d8;
extern int DAT_007f23b0;
__asm {
push    0xa4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_fail
        mov ecx, dword ptr [DAT_007dc8cc]
        mov edx, dword ptr [DAT_007f23d8]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0x0
        push    0x501eb0
        push    ecx
        push    0x678cb0
        push    0x5c0f80
        push    0x787958
        push    0x1
        push    edx
        push    0x787968
        push    0x47a
        mov     ecx, eax
        call    FUN_00501a20
        mov dword ptr [DAT_007f23b0], eax
        ret
L_fail:
        mov dword ptr [DAT_007f23b0], 0x0
        ret
    }


}
