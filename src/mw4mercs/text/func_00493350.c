/*
 * FUN_00493350 (128 B) — __cdecl.
 * Initialization function that calls many sub-initializers, then
 * calls FUN_00494050 with param_1, calls FUN_006f4850 on a global,
 * and clears the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00491dc0(void);
extern void __cdecl FUN_00495030(void);
extern void __cdecl FUN_00496190(void);
extern void __cdecl FUN_00498a80(void);
extern void __cdecl FUN_0049a9e0(void);
extern void __cdecl FUN_0049c010(void);
extern void __cdecl FUN_0049f730(void);
extern void __cdecl FUN_004a1bc0(void);
extern void __cdecl FUN_004a29a0(void);
extern void __cdecl FUN_004a3ae0(void);
extern void __cdecl FUN_004a4100(void);
extern void __cdecl FUN_004a4e20(void);
extern void __cdecl FUN_004a6220(void);
extern void __cdecl FUN_004a70f0(void);
extern void __cdecl FUN_004a87e0(void);
extern void __cdecl FUN_004a96f0(void);
extern void __cdecl FUN_004aa570(void);
extern void __cdecl FUN_004ac0e0(void);
extern void __cdecl FUN_00494050(int param_1);
extern void __cdecl FUN_006f4850(int param_1, int param_2);

extern int DAT_007da920;

__declspec(naked) void FUN_00493350(int param_1)
{
    __asm {
        call    FUN_00491dc0
        call    FUN_00495030
        call    FUN_00496190
        call    FUN_00498a80
        call    FUN_0049a9e0
        call    FUN_0049c010
        call    FUN_0049f730
        call    FUN_004a1bc0
        call    FUN_004a29a0
        call    FUN_004a3ae0
        call    FUN_004a4100
        call    FUN_004a4e20
        call    FUN_004a6220
        call    FUN_004a70f0
        call    FUN_004a87e0
        call    FUN_004a96f0
        call    FUN_004aa570
        call    FUN_004ac0e0
        mov     eax, dword ptr [esp + 4]
        push    eax
        call    FUN_00494050
        _emit 0x8B  /* mov ecx, [0x007da920] */
        _emit 0x0D
        _emit 0x20
        _emit 0xA9
        _emit 0x7D
        _emit 0x00
        add     esp, 4
        push    1
        push    ecx
        call    FUN_006f4850
        _emit 0xC7  /* mov dword ptr [0x007da920], 0 */
        _emit 0x05
        _emit 0x20
        _emit 0xA9
        _emit 0x7D
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        ret
    }
}
