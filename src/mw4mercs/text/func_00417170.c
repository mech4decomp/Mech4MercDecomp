/*
 * FUN_00417170 — Iterator constructor for iterator vtable 0x7725A0.
 *
 * Called by FUN_004D2B80 (database_dtor_body_1) to create a stack-allocated
 * iterator that walks a sub-list.  The caller pushes the container/sub-list
 * pointer and passes the iterator object in ECX.
 *
 * __stdcall (RET 0x4), ECX = this (iterator object).
 * CFLAGS: /O1
 *
 * Disassembly (49 bytes):
 *   0x00417170: 56                   PUSH ESI
 *   0x00417171: 57                   PUSH EDI
 *   0x00417172: 8B 7C 24 0C          MOV EDI,dword ptr [ESP + 0xc]
 *   0x00417176: 8B F1                MOV ESI,ECX
 *   0x00417178: 57                   PUSH EDI
 *   0x00417179: E8 92 EA FF FF       CALL FUN_00415c10
 *   0x0041717E: 8B 47 10             MOV EAX,dword ptr [EDI + 0x10]
 *   0x00417181: 85 C0                TEST EAX,EAX
 *   0x00417183: 76 0E                JBE 0x00417193
 *   0x00417185: 5F                   POP EDI
 *   0x00417186: C7 46 10 00 00 00 00 MOV dword ptr [ESI + 0x10],0x0
 *   0x0041718D: 8B C6                MOV EAX,ESI
 *   0x0041718F: 5E                   POP ESI
 *   0x00417190: C2 04 00             RET 0x4
 *   0x00417193: 5F                   POP EDI
 *   0x00417194: C7 46 10 FF FF FF FF MOV dword ptr [ESI + 0x10],0xffffffff
 *   0x0041719B: 8B C6                MOV EAX,ESI
 *   0x0041719D: 5E                   POP ESI
 *   0x0041719E: C2 04 00             RET 0x4
 */

/* ---- external functions (called via inline asm, decoration irrelevant) ---- */
extern void __stdcall FUN_00415c10(void);

__declspec(naked) void __stdcall iterator_ctor(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x0c]   /* edi = container pointer (stack param) */
        mov     esi, ecx                       /* esi = this (iterator object) */
        push    edi
        call    FUN_00415c10                   /* linked-list node insertion */

        mov     eax, dword ptr [edi + 0x10]    /* eax = container->field_10 (item count) */
        test    eax, eax
        jbe     l_zero_or_neg

        /* container has items: set index to 0 */
        pop     edi
        mov     dword ptr [esi + 0x10], 0x0
        mov     eax, esi
        pop     esi
        ret     0x4

    l_zero_or_neg:
        /* container is empty: set index to -1 */
        pop     edi
        mov     dword ptr [esi + 0x10], 0xffffffff
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
