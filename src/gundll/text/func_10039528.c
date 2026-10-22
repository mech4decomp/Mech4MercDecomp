/*
 * FUN_10039528 (165 B) — __cdecl.
 * SEH-guarded wrapper: reads a global object's fields, stores args into it,
 * calls a worker with 5 args, returns its result.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1004b658(void);   /* SEH handler */
extern void __cdecl FUN_1003eb9c(void);   /* SEH scope table */
extern void __cdecl FUN_10038512(void);
extern void __cdecl FUN_1003760a(void);
extern void __cdecl FUN_100395f5(void);

__declspec(naked) void __cdecl FUN_10039528(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    offset FUN_1004b658
        push    offset FUN_1003eb9c
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp - 0x18], esp
        mov     ebx, dword ptr [ebp + 0x18]
        mov     dword ptr [ebp - 0x2c], ebx
        and     dword ptr [ebp - 0x24], 0x0
        mov     esi, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [esi - 0x4]
        mov     dword ptr [ebp - 0x28], eax
        call    FUN_10038512
        mov     eax, dword ptr [eax + 0x6c]
        mov     dword ptr [ebp - 0x1c], eax
        call    FUN_10038512
        mov     eax, dword ptr [eax + 0x70]
        mov     dword ptr [ebp - 0x20], eax
        call    FUN_10038512
        mov     edi, dword ptr [ebp + 0x8]
        mov     dword ptr [eax + 0x6c], edi
        call    FUN_10038512
        mov     ecx, dword ptr [ebp + 0x10]
        mov     dword ptr [eax + 0x70], ecx
        and     dword ptr [ebp - 0x4], 0x0
        mov     dword ptr [ebp - 0x4], 0x1
        push    dword ptr [ebp + 0x20]
        push    dword ptr [ebp + 0x1c]
        push    ebx
        push    dword ptr [ebp + 0x14]
        push    esi
        call    FUN_1003760a
        add     esp, 0x14
        mov     dword ptr [ebp - 0x2c], eax
        and     dword ptr [ebp - 0x4], 0x0
        or      dword ptr [ebp - 0x4], 0xffffffff
        call    FUN_100395f5
        mov     eax, dword ptr [ebp - 0x2c]
        mov     ecx, dword ptr [ebp - 0x10]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
