/* Auto-generated inline asm for FUN_00591450 (0x00591450) */

extern void * __stdcall FUN_004084d0(int);
extern void __stdcall FUN_004084e0(void *);

__declspec(naked) void FUN_00591450(void)
{
    __asm {
        PUSH ECX
        PUSH EBX
        PUSH EBP
        PUSH ESI
        MOV  ESI, dword ptr [ESP + 0x1C]
        MOV  EBX, ECX
        MOV  EBP, dword ptr [EBX]
        PUSH EDI
        MOV  EDI, dword ptr [EBX + 0x4]
        MOV  EAX, EDI
        SUB  EAX, EBP
        SAR  EAX, 0x2
        CMP  EAX, ESI
        MOV  dword ptr [ESP + 0x10], EAX
        LEA  ECX, [ESP + 0x20]
        JC   use_param3
        LEA  ECX, [ESP + 0x10]
use_param3:
        MOV  ECX, dword ptr [ECX]
        ADD  ECX, EAX
        MOV  dword ptr [ESP + 0x10], ECX
        JZ   alloc_zero
        LEA  EAX, [ECX*0x4 + 0x0]
        PUSH EAX
        CALL FUN_004084d0
        ADD  ESP, 0x4
        MOV  dword ptr [ESP + 0x20], EAX
        JMP  copy_loop
alloc_zero:
        MOV  dword ptr [ESP + 0x20], 0x0
copy_loop:
        MOV  EDX, dword ptr [ESP + 0x18]
        CMP  EBP, EDX
        MOV  EAX, dword ptr [ESP + 0x20]
        JZ   check_count
copy_elem:
        MOV  ECX, EBP
loop_top:
        TEST EAX, EAX
        JZ   skip_copy1
        MOV  EBP, dword ptr [ECX]
        MOV  dword ptr [EAX], EBP
skip_copy1:
        ADD  ECX, 0x4
        ADD  EAX, 0x4
        CMP  ECX, EDX
        JNZ  loop_top
check_count:
        CMP  ESI, 0x1
        JNZ  check_count_multi
        TEST EAX, EAX
        JZ   inc_ptr1
        MOV  ECX, dword ptr [ESP + 0x1C]
        MOV  ECX, dword ptr [ECX]
        MOV  dword ptr [EAX], ECX
inc_ptr1:
        ADD  EAX, 0x4
        JMP  copy_remaining
check_count_multi:
        TEST ESI, ESI
        JBE  copy_remaining
copy_multi:
        MOV  ECX, ESI
        MOV  ESI, dword ptr [ESP + 0x1C]
copy_multi_elem:
        TEST EAX, EAX
        JZ   skip_copy2
        MOV  EBP, dword ptr [ESI]
        MOV  dword ptr [EAX], EBP
skip_copy2:
        ADD  EAX, 0x4
        DEC  ECX
        JNZ  copy_multi_elem
copy_remaining:
        CMP  EDX, EDI
        MOV  ESI, EAX
        JZ   free_old
copy_rem_elem:
        MOV  ECX, EDX
        SUB  ECX, EAX
rem_loop_top:
        TEST ESI, ESI
        JZ   skip_copy3
        MOV  EDX, dword ptr [ECX + ESI*0x1]
        MOV  dword ptr [ESI], EDX
skip_copy3:
        ADD  ESI, 0x4
        LEA  EAX, [ECX + ESI*0x1]
        CMP  EAX, EDI
        JNZ  rem_loop_top
free_old:
        MOV  EAX, dword ptr [EBX]
        TEST EAX, EAX
        MOV  dword ptr [ESP + 0x1C], EAX
        JZ   set_fields
        PUSH EAX
        CALL FUN_004084e0
        ADD  ESP, 0x4
set_fields:
        MOV  EAX, dword ptr [ESP + 0x20]
        MOV  ECX, dword ptr [ESP + 0x10]
        POP  EDI
        MOV  dword ptr [EBX + 0x4], ESI
        POP  ESI
        LEA  EDX, [EAX + ECX*0x4]
        POP  EBP
        MOV  dword ptr [EBX], EAX
        MOV  dword ptr [EBX + 0x8], EDX
        POP  EBX
        POP  ECX
        RET  0xC
    }
}
