/*
 * FUN_00444900 (79 B) - MLR mesh/render helper.
 * Calls FUN_006f4950(DAT_007b9590), allocates via FUN_004084d0(0x20),
 * and if non-null constructs an object via FUN_00487830(0x14,DAT_007da724)
 * storing the result at [esp+0x10]. Then calls FUN_006f49a0 and
 * FUN_006f4950(DAT_007b958c).
 *
 * NOTE: Ghidra under-detected this function's body (CSV size 79 B); the
 * decompiled C follows control flow beyond the marked body. Diff slices by
 * the CSV size, so only the 79 bytes shown are transcribed.
 *
 * CFLAGS: /O1
 */

extern int DAT_007b9590;
extern int DAT_007da724;
extern int DAT_007b958c;

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00487830(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00444900(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007b9590]
        sub     esp, 0x70
        push    eax
        call    FUN_006f4950
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L44932
        mov     ecx, dword ptr [DAT_007da724]
        push    ecx
        push    0x14
        mov     ecx, eax
        call    FUN_00487830
        mov     dword ptr [esp + 0x10], eax
        jmp     L4493a
L44932:
        mov     dword ptr [esp + 0x10], 0x0
L4493a:
        push    ebx
        push    ebp
        push    esi
        push    edi
        call    FUN_006f49a0
        mov     edx, dword ptr [DAT_007b958c]
        push    edx
        call    FUN_006f4950
    }
}
