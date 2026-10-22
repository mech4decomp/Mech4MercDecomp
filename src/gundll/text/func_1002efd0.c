/*
 * FUN_1002efd0 (80 B) - __fastcall. Constructor: sets vtable pointers
 * 0x1004ad94/0x1004ad70, initializes a sub-object at EDI+0x18, and calls
 * FUN_1001ac80.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001ac80(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_1002efd0(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     dword ptr [edi], 0x1004ad94
        xor     ebx, ebx
        push    0xfe
        mov     dword ptr [edi + 4], ebx
        lea     esi, [edi + 0x18]
        call    FUN_1001ac80
        mov     dword ptr [esi + 8], ebx
        mov     dword ptr [esi + 0x14], ebx
        mov     dword ptr [esi + 0x18], ebx
        mov     dword ptr [esi], esi
        mov     dword ptr [esi + 4], esi
        mov     dword ptr [esi + 0xc], esi
        mov     dword ptr [esi + 0x10], esi
        mov     byte ptr [edi + 0x10], bl
        mov     dword ptr [edi + 0x14], ebx
        mov     dword ptr [edi + 0x38], ebx
        mov     dword ptr [edi + 0x34], ebx
        mov     dword ptr [edi], 0x1004ad70
        mov     dword ptr [edi + 0xc], 1
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
