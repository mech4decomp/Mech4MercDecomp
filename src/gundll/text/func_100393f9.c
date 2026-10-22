/*
 * FUN_100393f9 (132 B in CSV; actual body 158 B) — __cdecl.
 * SEH-guarded loop walking a linked list (param_3+8 indexed by ESI*8),
 * invoking FUN_100398c0 per node, until ESI == param_4. Includes the
 * __except handler block (PUSH [EBP-0x14]/CALL FUN_10039497/RET then
 * ESP restore) that the main path jumps over.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10039985(void);
extern void __stdcall FUN_100398c0(void);
extern void __cdecl FUN_10039497(void);

__declspec(naked) void __cdecl FUN_100393f9(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    0x1004b648
        push    0x1003eb9c
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0xc
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp - 0x18], esp
        mov     ebx, dword ptr [ebp + 0x8]
        mov     esi, dword ptr [ebx + 0x8]
        mov     dword ptr [ebp - 0x1c], esi
        mov     edi, dword ptr [ebp + 0x10]
    loc_942b:
        cmp     esi, dword ptr [ebp + 0x14]
        jz      loc_9485
        cmp     esi, -1
        jle     loc_943a
        cmp     esi, dword ptr [edi + 0x4]
        jl      loc_943f
    loc_943a:
        call    FUN_10039985
    loc_943f:
        and     dword ptr [ebp - 0x4], 0x0
        mov     eax, dword ptr [edi + 0x8]
        mov     eax, dword ptr [eax + esi*8 + 0x4]
        test    eax, eax
        jz      loc_945a
        push    0x103
        push    ebx
        push    eax
        call    FUN_100398c0
    loc_945a:
        or      dword ptr [ebp - 0x4], 0xffffffff
        jmp     loc_947a
        /* --- __except handler block (jumped over) --- */
        push    dword ptr [ebp - 0x14]
        call    FUN_10039497
        pop     ecx
        ret
        mov     esp, dword ptr [ebp - 0x18]
        or      dword ptr [ebp - 0x4], 0xffffffff
        mov     edi, dword ptr [ebp + 0x10]
        mov     ebx, dword ptr [ebp + 0x8]
        mov     esi, dword ptr [ebp - 0x1c]
    loc_947a:
        mov     eax, dword ptr [edi + 0x8]
        mov     esi, dword ptr [eax + esi*8]
        mov     dword ptr [ebp - 0x1c], esi
        jmp     loc_942b
    loc_9485:
        mov     dword ptr [ebx + 0x8], esi
        mov     ecx, dword ptr [ebp - 0x10]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
