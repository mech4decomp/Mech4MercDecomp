/*
 * FUN_007588C0 (141 B) — __stdcall, RET 0x20 (eight stack params).
 *
 * Wraps acmStreamOpen; on failure formats an error string via
 * FUN_006fabf0 and traps (INT 3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_0075e0dc(void);
extern void *__stdcall FUN_0074dd10(void);
extern void *__stdcall FUN_0073e160(void);
extern int __cdecl FUN_006fabf0(void);

__declspec(naked) int __stdcall FUN_007588c0(
    void *p1, void *p2, void *p3, void *p4,
    void *p5, void *p6, void *p7, void *p8)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x100
        mov     eax, dword ptr [ebp + 0x1c]
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x14]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x20]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x24]
        push    edi
        push    ebx
        push    eax
        mov     eax, dword ptr [ebp + 0x10]
        push    ecx
        mov     ecx, dword ptr [ebp + 0xc]
        push    edx
        mov     edx, dword ptr [ebp + 0x8]
        push    eax
        push    ecx
        push    edx
        call    FUN_0075e0dc
        mov     esi, eax
        test    esi, esi
        jge     L_942
        mov     eax, dword ptr [ebp + 0x1c]
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x14]
        push    edi
        push    ebx
        push    eax
        push    ecx
        push    edx
        lea     eax, [ebp - 0x100]
        push    eax
        call    FUN_0074dd10
        mov     ecx, dword ptr [ebp + 0x10]
        push    eax
        push    ecx
        lea     edx, [ebp - 0x80]
        push    edx
        call    FUN_0074dd10
        mov     ecx, dword ptr [ebp + 0x8]
        push    eax
        mov     eax, dword ptr [ebp + 0xc]
        push    eax
        push    ecx
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aeda0
        call    FUN_006fabf0
        add     esp, 0x2c
        test    eax, eax
        jz      L_942
        int     3
L_942:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x20
    }
}
