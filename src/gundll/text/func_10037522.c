/*
 * FUN_10037522 (45 B) — __stdcall.
 * SEH unwinding helper: pops the exception registration frame and
 * tail-jumps to the handler.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10037522(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ebx
        push    esi
        push    edi
        mov     eax, dword ptr [ebp + 0xc]
        add     eax, 0xc
        mov     dword ptr [ebp - 0x4], eax
        mov     ebx, dword ptr fs:[0x0]
        mov     eax, dword ptr [ebx]
        mov     dword ptr fs:[0x0], eax
        mov     eax, dword ptr [ebp + 0x8]
        mov     ebx, dword ptr [ebp + 0xc]
        mov     esp, dword ptr [ebx - 0x4]
        mov     ebp, dword ptr [ebp - 0x4]
        jmp     eax
    }
}
