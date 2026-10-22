/*
 * FUN_00591DA0 (253 B) — Initialization function.
 * Allocates objects, sets up global state.
 *
 * CFLAGS: /O1
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __fastcall FUN_00501a20(void);
extern void __fastcall FUN_005008e0(void);
extern void __fastcall FUN_00500ec0(void);

__declspec(naked) void FUN_00591DA0(void)
{
    

extern int DAT_007f255c;
extern int DAT_007f2560;
extern int DAT_007f1fb0;
__asm {
PUSH ESI

        /* First allocation: 0xa8 bytes */
        PUSH 0xa8
        CALL FUN_004084d0
        MOV  ESI, EAX
        ADD  ESP, 0x4
        TEST ESI, ESI
        JZ   first_alloc_fail

        mov eax, dword ptr [DAT_007f255c]

        mov ecx, dword ptr [DAT_007f2560]

        /* Push arguments for FUN_00501a20 */
        PUSH 0x502c60
        PUSH 0x5028b0
        PUSH 0x6753a0
        PUSH 0x0
        PUSH 0x675380
        PUSH EAX
        PUSH 0x674b00
        PUSH 0x591ed0
        PUSH 0x0
        PUSH 0x0
        PUSH ECX
        PUSH 0x782718
        PUSH 0x4c1
        MOV  ECX, ESI
        CALL FUN_00501a20

        MOV  dword ptr [ESI + 0xa4], 0x5ef970

        mov dword ptr [DAT_007f1fb0], esi

        JMP  second_alloc

first_alloc_fail:
        mov dword ptr [DAT_007f1fb0], 0x0

second_alloc:
        /* Second allocation: 0x20 bytes */
        PUSH 0x20
        CALL FUN_004084d0
        MOV  ESI, EAX
        ADD  ESP, 0x4
        TEST ESI, ESI
        JZ   second_alloc_fail

        PUSH 0x98
        PUSH 0x2
        PUSH 0x782708
        PUSH 0x20
        MOV  ECX, ESI
        CALL FUN_005008e0
        MOV  dword ptr [ESI], 0x775948
        JMP  after_second_alloc

second_alloc_fail:
        XOR  ESI, ESI

after_second_alloc:
        mov edx, dword ptr [DAT_007f1fb0]

        PUSH ESI
        LEA  ECX, [EDX + 0x74]
        CALL FUN_00500ec0

        /* Third allocation: 0x20 bytes */
        PUSH 0x20
        CALL FUN_004084d0
        MOV  ESI, EAX
        ADD  ESP, 0x4
        TEST ESI, ESI
        JZ   third_alloc_fail

        PUSH 0x9c
        PUSH 0x2
        PUSH 0x7826f8
        PUSH 0x21
        MOV  ECX, ESI
        CALL FUN_005008e0

        mov eax, dword ptr [DAT_007f1fb0]

        PUSH ESI
        LEA  ECX, [EAX + 0x74]
        MOV  dword ptr [ESI], 0x775948
        CALL FUN_00500ec0
        POP  ESI
        RET

third_alloc_fail:
        mov eax, dword ptr [DAT_007f1fb0]

        XOR  ESI, ESI
        PUSH ESI
        LEA  ECX, [EAX + 0x74]
        CALL FUN_00500ec0
        POP  ESI
        RET
    }


}
